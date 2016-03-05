/*************************************************************************
             Valeur  -  Représente un Expression du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Valeur> (fichier Valeur.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "valeur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Valeur::print()
{

} //----- Fin de print

int Valeur::Evaluate(map<string, int> &values)
{
    return value;

} //----- Fin de Evaluate

//------------------------------------------------- Surcharge d'opérateurs
Valeur::operator int() const
{
    return identifiant;
} //----- Fin de operator int

//-------------------------------------------- Constructeurs - destructeur

Valeur::Valeur(int Valeur, int value) : Facteur(Valeur), value(value)
{

} //----- Fin de Valeur


Valeur::~Valeur()
{

} //----- Fin de ~Valeur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
