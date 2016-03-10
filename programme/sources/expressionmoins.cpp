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

//------------------------------------------------------ Include personnel
#include "expressionmoins.h"
#include "symboletype.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void ExpressionMoins::Print() const
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
int ExpressionMoins::Evaluate(map<string, int> &variables)
{
    return expression->Evaluate(variables) - terme->Evaluate(variables);
}

//-------------------------------------------- Constructeurs - destructeur

ExpressionMoins::ExpressionMoins(Expression* expression, Terme* terme) : Expression(EXPRESSION), expression(expression), terme(terme)
{

} //----- Fin de ExpressionMoins


ExpressionMoins::~ExpressionMoins()
{

} //----- Fin de ~ExpressionMoins


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
