/*************************************************************************
             PdeclVar  -  Représente un PdeclVar du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PdeclVar> (fichier pdeclvar.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "pdeclvar.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void PdeclVar::Print() const
{

} //----- Fin de print

void PdeclVar::Execute(map<string, int>& variables)
{
   var->Execute(variables);
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

PdeclVar::PdeclVar(Var* var) : Pdecl(PDECL_VAR), var(var)
{

} //----- Fin de PdeclVar


PdeclVar::~PdeclVar()
{
    delete var;
} //----- Fin de ~PdeclVar


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
