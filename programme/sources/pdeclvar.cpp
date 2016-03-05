/*************************************************************************
             PdeclVar  -  Représente un PdeclVar du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PdeclVar> (fichier pdeclvar.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "pdeclvar.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void PdeclVar::print()
{

} //----- Fin de print

void PdeclVar::Execute(map<string, int> &values)
{
    vector<Identifiant*>::iterator it;

    for(it = declarations.begin(); it != declarations.end(); it++){

        Identifiant* currId = *it;


        values[currId->getName()] = NON_EVALUATED;

    }


}

//------------------------------------------------- Surcharge d'opérateurs
PdeclVar::operator int() const
{
    return identifiant;
} //----- Fin de operator int

//-------------------------------------------- Constructeurs - destructeur

PdeclVar::PdeclVar(int identifiant, vector<Identifiant*>& declarations):PDECL(identifiant), declarations(declarations)
{

} //----- Fin de PdeclVar


PdeclVar::~PdeclVar()
{

} //----- Fin de ~PdeclVar


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
