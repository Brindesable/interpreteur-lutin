/*************************************************************************
             ExpressionMoins  -  Représente un ExpressionMoins du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <ExpressionMoins> (fichier expressionmoins.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <sstream>

//------------------------------------------------------ Include personnel
#include "expressionmoins.h"
#include "symboletype.h"
#include "valeur.h"
#include "expressionparenthese.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void ExpressionMoins::Print() const
{
    Print(cout);
} //----- Fin de Print

void ExpressionMoins::Print(ostream& out) const
{
    expression->Print(out);
    out << "-";
    terme->Print(out);
}

int ExpressionMoins::Evaluate(const map<string, int>& variables) const
{
    return expression->Evaluate(variables) - terme->Evaluate(variables);
}

Expression* ExpressionMoins::Optimisation(map<string, int>& constantes){
    //On optimise les deux branches
    Expression* expressionOpti = expression->Optimisation(constantes);
    Expression* termeOpti = terme->Optimisation(constantes);

    if(expressionOpti != expression){
        delete expression;
        expression = static_cast<Expression*>(expressionOpti);
    }
    if(termeOpti != terme){
        delete terme;
        terme = static_cast<Terme*>(termeOpti);
    }






    //on optimise avec les valeurs neutres
    if((int)*terme == VALEUR && (int)*expression == VALEUR) {
        return new Valeur(this->Evaluate(constantes));
    } else if((int)*terme == VALEUR && terme->Evaluate(constantes) == 0) {
        Expression* ancienExp(expression);
        expression = nullptr;
        return ancienExp;
    }

    if((int)*expressionOpti == EXPRESSION_PARENTHESE){
        ExpressionParenthese* expr = static_cast<ExpressionParenthese*>(expressionOpti);
        expression = expr->GetExpression();
        expr->SetExpression(nullptr);
        delete expr;
    }
    if((int)*termeOpti == EXPRESSION_PARENTHESE){
        ExpressionParenthese* expr = static_cast<ExpressionParenthese*>(termeOpti);
        Expression* exprFille = expr->GetExpression();
        if((int)*exprFille != EXPRESSION_MOINS && (int)*exprFille != EXPRESSION_PLUS){

            terme = static_cast<Terme*>(expr->GetExpression());
            expr->SetExpression(nullptr);
            delete expr;
        }
    }
    this->SetSymboleType(EXPRESSION_MOINS);
    return this;
} //----- Fin de Optimisation

void ExpressionMoins::GetIds(vector<string>& ids)
{
    expression->GetIds(ids);
    terme->GetIds(ids);
} //----- Fin de GetIds

string ExpressionMoins::ToString() const
{
    stringstream ss;
    ss << expression->ToString() << "-" << terme->ToString();
    return ss.str();
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

ExpressionMoins::ExpressionMoins(Expression* expression, Terme* terme) : Expression(EXPRESSION), expression(expression), terme(terme)
{

} //----- Fin de ExpressionMoins


ExpressionMoins::~ExpressionMoins()
{
    delete expression;
    delete terme;
} //----- Fin de ~ExpressionMoins


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
