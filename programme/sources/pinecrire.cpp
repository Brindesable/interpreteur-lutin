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
#include "symboletype.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void PinEcrire::Print() const
{

} //----- Fin de Print

//------------------------------------------------- Surcharge d'opérateurs
void PinEcrire::Execute(map<string, int>& variables)
{
    cout << expression->Evaluate(variables) << endl;
} //----- Fin de Execute

//-------------------------------------------- Constructeurs - destructeur
PinEcrire::PinEcrire(Expression* expression) : PIN(PIN_ECRIRE), expression(expression)
{

} //----- Fin de PinEcrire


PinEcrire::~PinEcrire()
{

} //----- Fin de ~PinEcrire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
