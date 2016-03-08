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
void PdeclVar::Print() const
{

} //----- Fin de print

void PdeclVar::Execute(map<string, int>& variables)
{
    vector<Identifiant*>::iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        Identifiant* identifiantCourant = *it;
        variables[identifiantCourant->Nom()] = Expression::VALEUR_INDEFINIE;
    }
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

PdeclVar::PdeclVar(vector<Identifiant*>& declarations) : PDECL(PDECL_VAR), declarations(declarations)
{

} //----- Fin de PdeclVar


PdeclVar::~PdeclVar()
{

} //----- Fin de ~PdeclVar


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
