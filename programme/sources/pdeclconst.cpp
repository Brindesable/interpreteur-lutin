/*************************************************************************
             PdeclConst  -  Représente un PdeclConst du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PdeclConst> (fichier pdeclconst.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "pdeclconst.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void PdeclConst::print()
{

} //----- Fin de print

void PdeclConst::Execute(map<string, int> &values)
{
    vector<pair<Identifiant*, Valeur*>>::iterator it;

    for(it = declarations.begin(); it != declarations.end(); it++){

        Identifiant* currId = it->first;
        Valeur* currVal = it->second;

        values[currId->getName()] = currVal->Evaluate(values);

    }


}

//------------------------------------------------- Surcharge d'opérateurs
PdeclConst::operator int() const
{
    return identifiant;
} //----- Fin de operator int

//-------------------------------------------- Constructeurs - destructeur

PdeclConst::PdeclConst(int identifiant, vector<pair<Identifiant*, Valeur*>>& declarations):PDECL(identifiant), declarations(declarations)
{

} //----- Fin de PdeclConst


PdeclConst::~PdeclConst()
{

} //----- Fin de ~PdeclConst


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
