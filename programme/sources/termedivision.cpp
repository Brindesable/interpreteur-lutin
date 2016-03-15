/*************************************************************************
             TermeDivision  -  Représente un TermeDivision du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <TermeDivision> (fichier termedivision.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "termedivision.h"
#include "valeur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void TermeDivision::Print() const
{
    terme->Print();
    cout << "/";
    facteur->Print();
} //----- Fin de print

int TermeDivision::Evaluate(const map<string, int>& variables) const
{
    return terme->Evaluate(variables) / facteur->Evaluate(variables);
}

Expression* TermeDivision::Optimisation(const map<string, int>& constantes){
    //On optimise les deux branches
    Expression* facteurOpti = facteur->Optimisation(constantes);
    Expression* termeOpti = terme->Optimisation(constantes);

    if(facteurOpti != facteur){
        delete facteur;
        facteur = static_cast<Facteur*>(facteurOpti);
    }
    if(termeOpti != terme){
        delete terme;
        terme = static_cast<Terme*>(termeOpti);
    }

    //on optimise avec les valeurs neutres
    if((int)*terme == VALEUR && (int)*facteur == VALEUR) {
        return new Valeur(this->Evaluate(constantes));
    } else if((int)*terme == VALEUR && terme->Evaluate(constantes) == 0) {
        return new Valeur(0);
    } else if((int)*facteur == VALEUR && facteur->Evaluate(constantes) == 1) {
        Expression* ancienTerme(terme);
        terme = nullptr;
        return ancienTerme;
    }

    return this;
} //----- Fin de Optimisation

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

TermeDivision::TermeDivision(Terme* terme, Facteur* facteur) : Terme(TERME), terme(terme), facteur(facteur)
{

} //----- Fin de TermeDivision


TermeDivision::~TermeDivision()
{
    delete terme;
    delete facteur;
} //----- Fin de ~TermeDivision


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
