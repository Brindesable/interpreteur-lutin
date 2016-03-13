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
void ExpressionPlus::Print() const
{
    expression->Print();
    cout << " + ";
    terme->Print();
} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
int ExpressionPlus::Evaluate(map<string, int>& variables)
{
    return expression->Evaluate(variables) + terme->Evaluate(variables);
}

//-------------------------------------------- Constructeurs - destructeur

ExpressionPlus::ExpressionPlus(Expression* expression, Terme* terme) : Expression(EXPRESSION), expression(expression), terme(terme)
{

} //----- Fin de ExpressionPlus


ExpressionPlus::~ExpressionPlus()
{

} //----- Fin de ~ExpressionPlus


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
