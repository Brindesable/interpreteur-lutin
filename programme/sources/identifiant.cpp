/*************************************************************************
             Identifiant  -  Représente un Expression du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Identifiant> (fichier identifiant.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <limits>
#include <boost/algorithm/string.hpp>

//------------------------------------------------------ Include personnel
#include "identifiant.h"
#include "symboletype.h"
#include "valeur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Identifiant::Print() const
{
    Print(cout);
} //----- Fin de Print

void Identifiant::Print(ostream& out) const
{
    out << nom;
} //----- Fin de Print

int Identifiant::Evaluate(const map<string, int>& variables) const
{
	//on recherche le nom de cet identifiant dans les variables.
    map<string,int>::const_iterator itResultat = variables.find(nom);
    if(itResultat == variables.end())
    {
    	//Le symbole est inconnu, on lui donne la valeur moins l'infini.
    	return Expression::VALEUR_INDEFINIE;
    }

    return itResultat->second;

} //----- Fin de Evaluate

Expression* Identifiant::Optimisation(const map<string, int>& constantes)
{
    map<string, int>::const_iterator res(constantes.find(nom));

    if(res != constantes.end()){
        Valeur* val = new Valeur(res->second);
        return val;
    }
    return this;
} //----- Fin de Optimisation

void Identifiant::GetIds(vector<string>& ids)
{
    ids.push_back(nom);
} //----- Fin de GetIds

string Identifiant::ToString() const
{
    return nom;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Identifiant::Identifiant(const string& nom) : Facteur(IDENTIFIANT)
{
   this->nom = boost::trim_copy(nom);
   spaces = nom.length() - this->nom.length();
} //----- Fin de Identifiant


Identifiant::~Identifiant()
{

} //----- Fin de ~Identifiant


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
