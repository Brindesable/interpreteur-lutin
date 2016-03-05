/*************************************************************************
             TermeDivision  -  Représente un TermeDivision du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <TermeDivision> (fichier termedivision.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "termedivision.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void TermeDivision::print()
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
TermeDivision::operator int() const
{
    return identifiant;
} //----- Fin de operator int

TermeDivision::Evaluate(map<string, int> &values)
{
    return terme->Evaluate(values) / facteur->Evaluate(values);
}

//-------------------------------------------- Constructeurs - destructeur

TermeDivision::TermeDivision(int identifiant, Terme* terme, Facteur* facteur) : Terme(identifiant), terme(terme), facteur(facteur)
{

} //----- Fin de TermeDivision


TermeDivision::~TermeDivision()
{

} //----- Fin de ~TermeDivision


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
