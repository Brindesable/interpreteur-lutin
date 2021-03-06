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
    Print(cout);
} //----- Fin de Print

void Var::Print(ostream& out) const
{
    vector<Identifiant*>::const_iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        Identifiant* identifiantCourant = *it;

        out << "var ";
        //On affiche l'identifiant défini.
        identifiantCourant->Print(out);
        out << ";" << endl;

        //Si on n'est pas au début de la liste.
        if (it == declarations.end())
        {
            out << endl;
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

void Var::GetConstVars(map<string, int> & values) const
{
    //pas de constantes à ajouter
}

void Var::GetVars(vector<string> & vars) const
{
    vector<Identifiant*>::const_iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        vars.push_back((*it)->Nom());
    }
} //----- Fin de GetVars

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Var::Var(Identifiant* id) : PdeclInst(VARp)
{
    declarations.push_back(id);
} //----- Fin de Var


Var::~Var()
{
    vector<Identifiant*>::iterator it;

    for(it = declarations.begin(); it != declarations.end(); ++it)
    {
        delete *it;
    }

    declarations.clear();
} //----- Fin de ~Var


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
