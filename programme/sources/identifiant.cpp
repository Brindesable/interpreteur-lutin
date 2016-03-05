/*************************************************************************
             Identifiant  -  Représente un Expression du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Identifiant> (fichier identifiant.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "identifiant.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Identifiant::print()
{

} //----- Fin de print

int Identifiant::Evaluate(map<string, int>& values)
{

    map<string,int>::iterator res = values.find(name);
    if(res == values.end()){
        return -1;
    }

    return res->second;

} //----- Fin de print


//------------------------------------------------- Surcharge d'opérateurs
Identifiant::operator int() const
{
    return identifiant;
} //----- Fin de operator int

//-------------------------------------------- Constructeurs - destructeur

Identifiant::Identifiant(int identifiant, const string& name) : Facteur(identifiant),name(name)
{

} //----- Fin de Identifiant


Identifiant::~Identifiant()
{

} //----- Fin de ~Identifiant


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
