/*************************************************************************
             Const  -  Représente un Const du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Const> (fichier const.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "const.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Constiables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Const::Print() const
{

} //----- Fin de print

void Const::AddDeclaration(Identifiant* id, Valeur* val)
{
    declarations.push_back(make_pair(id,val));
} //----- Fin de AddDeclaration

void Const::Execute(map<string, int>& variables)
{
    vector<pair<Identifiant*, Valeur*>>::iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        Identifiant* identifiantCourant = it->first;
        Valeur* valeurCourante = it->second;
        variables[identifiantCourant->Nom()] = valeurCourante->Evaluate(variables);
    }
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Const::Const(Identifiant* id, Valeur* val) : PdeclInst(CONSTp)
{
    declarations.push_back(make_pair(id, val));
} //----- Fin de Const


Const::~Const()
{

} //----- Fin de ~Const


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
