/*************************************************************************
             Symbole  -  Représente un symbole du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Symbole> (fichier symbole.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "symbole.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Symbole::print()
{
	
} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
Symbole::operator int() const
{
	return type;
} //----- Fin de operator int

//-------------------------------------------- Constructeurs - destructeur

Symbole::Symbole(SymboleType type) : type(type)
{
	
} //----- Fin de Symbole


Symbole::~Symbole()
{

} //----- Fin de ~Symbole
    
    
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
