/*************************************************************************
             Facteur  -  Représente un Expression du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Facteur> (fichier facteur.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "facteur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Facteur::print()
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
Facteur::operator int() const
{
    return identifiant;
} //----- Fin de operator int

//-------------------------------------------- Constructeurs - destructeur

Facteur::Facteur(int identifiant) : Terme(identifiant)
{

} //----- Fin de Facteur


Facteur::~Facteur()
{

} //----- Fin de ~Facteur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
