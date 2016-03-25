/*************************************************************************
ExpressionParenthese  -  Représente une expression parenthesée du langage.
 -------------------
 début                : 13/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

// Interface de la classe <ExpressionParenthese> (fichier expressionmoins.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <sstream>

//------------------------------------------------------ Include personnel
#include "expressionparenthese.h"
#include "symboletype.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void ExpressionParenthese::Print() const
{
    Print(cout);
} //----- Fin de Print

void ExpressionParenthese::Print(ostream& out) const
{
    out << "(";
    expression->Print(out);
    out << ")";
} //----- Fin de Print

int ExpressionParenthese::Evaluate(const map<string, int>& variables) const
{
    return expression->Evaluate(variables);
}

Expression* ExpressionParenthese::Optimisation(map<string, int>& constantes){
    //On optimise les deux branches
    Expression* expressionOpti = expression->Optimisation(constantes);

    if((int)*expressionOpti == VALEUR) //on enlève les parenthèses !
    {
        //Pas besoin de liberer l'ancienne expression.
        //Elle sera liberée par l'expression qui demande l'optimisation.
        expression = nullptr;
        return static_cast<Expression*>(expressionOpti);
    }else if((int)*expressionOpti == IDENTIFIANT){
        expression = nullptr;
        return static_cast<Expression*>(expressionOpti);
    }else if((int)*expressionOpti == EXPRESSION_PARENTHESE){
        expression = nullptr;
        return static_cast<Expression*>(expressionOpti);
    }

    this->SetSymboleType(EXPRESSION_PARENTHESE);
    return this;
} //----- Fin de Optimisation

void ExpressionParenthese::GetIds(vector<string>& ids)
{
    expression->GetIds(ids);
} //----- Fin de GetIds

string ExpressionParenthese::ToString() const
{
    stringstream ss;
    ss << "(" << expression->ToString() << ")";
    return ss.str();
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

ExpressionParenthese::ExpressionParenthese(Expression* expression) :
    Expression(EXPRESSION),
    expression(expression)
{

} //----- Fin de ExpressionParenthese


ExpressionParenthese::~ExpressionParenthese()
{
    delete expression;
} //----- Fin de ~ExpressionParenthese


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
