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

//------------------------------------------------------ Include personnel
#include "identifiant.h"
#include "symboletype.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Identifiant::Print() const
{
	cout << "Type:" << type << "\tIdentifiant: " << nom << endl;
} //----- Fin de print

int Identifiant::Evaluate(map<string, int>& variables)
{
	//on recherche le nom de cet identifiant dans les variables.
    map<string,int>::iterator itResultat = variables.find(nom);
    if(itResultat == variables.end())
    {
    	//Le symbole est inconnu, on lui donne la valeur moins l'infini.
    	return numeric_limits<int>::min();
    }

    return itResultat->second;

} //----- Fin de print


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Identifiant::Identifiant(const string& nom) : Facteur(IDENTIFIANT), nom(nom)
{

} //----- Fin de Identifiant


Identifiant::~Identifiant()
{

} //----- Fin de ~Identifiant


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
