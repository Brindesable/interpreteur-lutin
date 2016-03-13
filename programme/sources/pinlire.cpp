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
void PinLire::Print() const
{
    cout << "lire ";
    id->Print();
    cout << ";" << endl;
} //----- Fin de Print

//------------------------------------------------- Surcharge d'opérateurs

void PinLire::Execute(map<string, int>& variables)
{
    int val;
    cin >> val;

    variables[id->Nom()] = val;
} //----- Fin de Execute

//-------------------------------------------- Constructeurs - destructeur

PinLire::PinLire(Identifiant* id) : id(id)
{

} //----- Fin de PinLire


PinLire::~PinLire()
{

} //----- Fin de ~PinLire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
