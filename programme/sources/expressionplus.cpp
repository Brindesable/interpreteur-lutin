/*************************************************************************
             ExpressionPlus  -  Représente un ExpressionPlus du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <ExpressionPlus> (fichier expressionplus.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <sstream>

//------------------------------------------------------ Include personnel
#include "expressionplus.h"
#include "valeur.h"
#include "expressionparenthese.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void ExpressionPlus::Print() const
{
    Print(cout);
} //----- Fin de Print

void ExpressionPlus::Print(ostream& out) const
{
    expression->Print(out);
    cout << "+";
    terme->Print(out);
} //----- Fin de Print

int ExpressionPlus::Evaluate(const map<string, int>& variables) const
{
    return expression->Evaluate(variables) + terme->Evaluate(variables);
}

Expression* ExpressionPlus::Optimisation(map<string, int>& constantes){
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
    } else if((int)*expression == VALEUR && expression->Evaluate(constantes) == 0){
        Expression* ancienTerme(terme);
        terme = nullptr;
        return ancienTerme;
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

        terme = static_cast<Terme*>(expr->GetExpression());
        expr->SetExpression(nullptr);
        delete expr;

    }

    this->SetSymboleType(EXPRESSION_PLUS);
    return this;

} //----- Fin de Optimisation

void ExpressionPlus::GetIds(vector<string>& ids)
{
    expression->GetIds(ids);
    terme->GetIds(ids);
} //----- Fin de GetIds

string ExpressionPlus::ToString() const
{
    stringstream ss;
    ss << expression->ToString() << "+" << terme->ToString();
    return ss.str();
}
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

ExpressionPlus::ExpressionPlus(Expression* expression, Terme* terme) : Expression(EXPRESSION), expression(expression), terme(terme)
{

} //----- Fin de ExpressionPlus


ExpressionPlus::~ExpressionPlus()
{
    delete expression;
    delete terme;
} //----- Fin de ~ExpressionPlus


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
