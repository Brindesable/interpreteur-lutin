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
    cout << "(";
    expression->Print();
    cout << ")";
} //----- Fin de Print

int ExpressionParenthese::Evaluate(const map<string, int>& variables) const
{
    return expression->Evaluate(variables);
}

Expression* ExpressionParenthese::Optimisation(const map<string, int>& constantes){
    //On optimise les deux branches
    Expression* expressionOpti = expression->Optimisation(constantes);

    if(expressionOpti != expression)
    {
        //Pas besoin de liberer l'ancienne expression.
        //Elle sera liberée par l'expression qui demande l'optimisation.
        return static_cast<Expression*>(expressionOpti);
    }

    return this;
} //----- Fin de Optimisation

void ExpressionParenthese::GetIds(vector<string>& ids)
{
    expression->GetIds(ids);
} //----- Fin de GetIds

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
