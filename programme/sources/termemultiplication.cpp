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
#include "symboletype.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void TermeMultiplication::Print() const
{

} //----- Fin de Print

//------------------------------------------------- Surcharge d'opérateurs
int TermeMultiplication::Evaluate(map<string, int> &variables)
{
    return terme->Evaluate(variables) * facteur->Evaluate(variables);
} //----- Fin de Evaluate

//-------------------------------------------- Constructeurs - destructeur

TermeMultiplication::TermeMultiplication(Terme* terme, Facteur* facteur) : Terme(TERME_MULTIPLICATION), terme(terme), facteur(facteur)
{

} //----- Fin de TermeMultiplication


TermeMultiplication::~TermeMultiplication()
{

} //----- Fin de ~TermeMultiplication


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
