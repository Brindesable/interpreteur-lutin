/*************************************************************************
             PinEcrire  -  Représente un PinEcrire du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinEcrire> (fichier pinecrire.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "pinecrire.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void PinEcrire::print()
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
PinEcrire::operator int() const
{
    return identifiant;
} //----- Fin de operator int

void PinEcrire::Execute(map<string, int> &values)
{
    cout<<expression->Evaluate(values)<<endl;
}

//-------------------------------------------- Constructeurs - destructeur

PinEcrire::PinEcrire(int identifiant, Expression* expression) : PIN(identifiant), expression(expression)
{

} //----- Fin de PinEcrire


PinEcrire::~PinEcrire()
{

} //----- Fin de ~PinEcrire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
