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

//------------------------------------------------------ Include personnel
#include "expressionplus.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void ExpressionPlus::print()
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
ExpressionPlus::operator int() const
{
    return identifiant;
} //----- Fin de operator int

ExpressionPlus::Evaluate(map<string, int> &values)
{
    return expression->Evaluate(values) + terme->Evaluate(values);
}

//-------------------------------------------- Constructeurs - destructeur

ExpressionPlus::ExpressionPlus(int identifiant, Expression* expression, Terme* terme) : Expression(identifiant), expression(expression), terme(terme)
{

} //----- Fin de ExpressionPlus


ExpressionPlus::~ExpressionPlus()
{

} //----- Fin de ~ExpressionPlus


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
