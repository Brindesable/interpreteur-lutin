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
#include <sstream>

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
    Print(cout);
} //----- Fin de Print

void Valeur::Print(ostream& out) const
{
    out << valeur;
} //----- Fin de Print

int Valeur::Evaluate(const map<string, int>& variables) const
{
    return valeur;
} //----- Fin de Evaluate

Expression* Valeur::Optimisation(map<string, int>& constantes)
{
    // Pour aider les noeuds parents à optimiser,
    // on précise le type de ce symbole.
    SetSymboleType(VALEUR);
    return this;
} //----- Fin de Optimisation

void Valeur::GetIds(vector<string>& ids)
{
} //----- Fin de GetIds

string Valeur::ToString() const
{
    stringstream ss;
    ss << valeur;
    return ss.str();
}

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
