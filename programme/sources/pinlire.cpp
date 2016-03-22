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
#include <sstream>

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

void PinLire::Optimisation(const map<string, int>& constantes)
{
    //pas d'optimisation à effectuer.
} //----- Fin de Optimisation

void PinLire::AnalyseStatique(map<string, VarState> & vars, const map<string, int> & constantes, vector<string> & errors)
{
    map<string,VarState>::iterator itFindVar;
    map<string,int>::const_iterator itFindConst;

    itFindVar = vars.find(id->Nom());
    itFindConst = constantes.find(id->Nom());

    if(itFindConst != constantes.end())
    {
        stringstream err;
        err << "la constante " << id->Nom() << " a ete modifiee.";
        errors.push_back(err.str());
    }
    else if(itFindVar != vars.end())
    {
        itFindVar->second = AFFECTEE;
    }
    else
    {
        stringstream err;
        err << "la variable " << id->Nom() << " n'a pas ete declaree.";
        errors.push_back(err.str());
    }
} //----- Fin de AnalyseStatique

//-------------------------------------------- Constructeurs - destructeur

PinLire::PinLire(Identifiant* id) : id(id)
{

} //----- Fin de PinLire


PinLire::~PinLire()
{
    delete id;
} //----- Fin de ~PinLire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
