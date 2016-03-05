/*************************************************************************
             PDECL  -  Représente un PDECL du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PDECL> (fichier pdecl.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "pdecl.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void PDECL::print()
{

} //----- Fin de print

//------------------------------------------------- Surcharge d'opérateurs
PDECL::operator int() const
{
    return identifiant;
} //----- Fin de operator int

//-------------------------------------------- Constructeurs - destructeur

PDECL::PDECL(int identifiant) : Symbole(identifiant)
{

} //----- Fin de PDECL


PDECL::~PDECL()
{

} //----- Fin de ~PDECL


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
