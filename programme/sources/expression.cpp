/*************************************************************************
             Expression  -  Représente un Expression du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Expression> (fichier expression.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "expression.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Expression::print()
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
Expression::operator int() const
{
    return identifiant;
} //----- Fin de operator int

//-------------------------------------------- Constructeurs - destructeur

Expression::Expression(int identifiant) : Symbole(identifiant)
{

} //----- Fin de Expression


Expression::~Expression()
{

} //----- Fin de ~Expression


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
