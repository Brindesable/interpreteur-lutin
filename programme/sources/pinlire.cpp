/*************************************************************************
             PinLire  -  Représente un PinLire du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinLire> (fichier pinlire.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "pinlire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void PinLire::print()
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
PinLire::operator int() const
{
    return identifiant;
} //----- Fin de operator int

void PinLire::Execute(map<string, int> &values)
{
    int val;
    cin>>val;

    values[id->getName()] = val;

}

//-------------------------------------------- Constructeurs - destructeur

PinLire::PinLire(int identifiant, Identifiant* id) : PIN(identifiant), id(id)
{

} //----- Fin de PinLire


PinLire::~PinLire()
{

} //----- Fin de ~PinLire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
