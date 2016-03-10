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
void PinAffecter::Print() const
{

} //----- Fin de Print

//------------------------------------------------- Surcharge d'opérateurs
void PinAffecter::Execute(map<string, int>& variables)
{
    variables[id->Nom()] = expression->Evaluate(variables);
} //----- Fin de Execute

//-------------------------------------------- Constructeurs - destructeur
PinAffecter::PinAffecter(Identifiant* id, Expression* expression) : id(id), expression(expression)
{

} //----- Fin de PinAffecter


PinAffecter::~PinAffecter()
{

} //----- Fin de ~PinAffecter


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
