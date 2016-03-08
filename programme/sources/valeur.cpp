/*************************************************************************
       Valeur  -  Représente une valeur constante dans le programme.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Valeur> (fichier Valeur.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "valeur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Valeur::Print() const
{
	cout << "Type:" << type << "\tValeur:      " << valeur << endl;
} //----- Fin de print

int Valeur::Evaluate(map<string, int>& variables)
{
    return valeur;
} //----- Fin de Evaluate

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Valeur::Valeur(int valeur) : Facteur(VALEUR), valeur(valeur)
{

} //----- Fin de Valeur


Valeur::~Valeur()
{

} //----- Fin de ~Valeur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
