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

//------------------------------------------------- Surcharge d'opérateurs
int ExpressionParenthese::Evaluate(map<string, int> &variables)
{
    return expression->Evaluate(variables);
}

//-------------------------------------------- Constructeurs - destructeur

ExpressionParenthese::ExpressionParenthese(Expression* expression) :
    Expression(EXPRESSION),
    expression(expression)
{

} //----- Fin de ExpressionParenthese


ExpressionParenthese::~ExpressionParenthese()
{

} //----- Fin de ~ExpressionParenthese


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
