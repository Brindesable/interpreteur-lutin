/*************************************************************************
             PinAffecter  -  Représente un PinAffecter du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinAffecter> (fichier pinaffecter.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "pinaffecter.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void PinAffecter::print()
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
PinAffecter::operator int() const
{
    return identifiant;
} //----- Fin de operator int

void PinAffecter::Execute(map<string, int> &values)
{

    values[id->getName()] = expression->Evaluate(values);

}

//-------------------------------------------- Constructeurs - destructeur

PinAffecter::PinAffecter(int identifiant, Identifiant* id, Expression* expression) : PIN(identifiant), id(id), expression(expression)
{

} //----- Fin de PinAffecter


PinAffecter::~PinAffecter()
{

} //----- Fin de ~PinAffecter


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
