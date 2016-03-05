/*************************************************************************
             TermeMultiplication  -  Représente un TermeMultiplication du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <TermeMultiplication> (fichier termemultiplication.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "termemultiplication.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void TermeMultiplication::print()
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
TermeMultiplication::operator int() const
{
    return identifiant;
} //----- Fin de operator int

TermeMultiplication::Evaluate(map<string, int> &values)
{
    return terme->Evaluate(values) * facteur->Evaluate(values);
}

//-------------------------------------------- Constructeurs - destructeur

TermeMultiplication::TermeMultiplication(int identifiant, Terme* terme, Facteur* facteur) : Terme(identifiant), terme(terme), facteur(facteur)
{

} //----- Fin de TermeMultiplication


TermeMultiplication::~TermeMultiplication()
{

} //----- Fin de ~TermeMultiplication


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
