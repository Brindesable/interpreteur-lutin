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

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void ExpressionMoins::print()
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
ExpressionMoins::operator int() const
{
    return identifiant;
} //----- Fin de operator int

ExpressionMoins::Evaluate(map<string, int> &values)
{
    return expression->Evaluate(values) - terme->Evaluate(values);
}

//-------------------------------------------- Constructeurs - destructeur

ExpressionMoins::ExpressionMoins(int identifiant, Expression* expression, Terme* terme) : Expression(identifiant), expression(expression), terme(terme)
{

} //----- Fin de ExpressionMoins


ExpressionMoins::~ExpressionMoins()
{

} //----- Fin de ~ExpressionMoins


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
