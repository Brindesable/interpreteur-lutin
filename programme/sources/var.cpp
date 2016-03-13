/*************************************************************************
             Var  -  Représente un Var du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Var> (fichier var.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "var.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Var::Print() const
{
    vector<Identifiant*>::const_iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        Identifiant* identifiantCourant = *it;

        cout << "var ";
        //On affiche l'identifiant défini.
        identifiantCourant->Print();
        cout << ";" << endl;

        //Si on n'est pas au début de la liste.
        if (it == declarations.end())
        {
            cout << endl;
        }
    }
} //----- Fin de Print

void Var::AddDeclaration(Identifiant* id)
{
    declarations.push_back(id);
} //----- Fin de AddDeclaration

void Var::Execute(map<string, int>& variables)
{
    vector<Identifiant*>::iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        Identifiant* identifiantCourant = *it;
        variables[identifiantCourant->Nom()] = Expression::VALEUR_INDEFINIE;
    }
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Var::Var(Identifiant* id) : PdeclInst(VARp)
{
    declarations.push_back(id);
} //----- Fin de Var


Var::~Var()
{

} //----- Fin de ~Var


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
