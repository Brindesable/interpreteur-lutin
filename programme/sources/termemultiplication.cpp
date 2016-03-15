/*************************************************************************
             TermeMultiplication  -  Représente un TermeMultiplication du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <TermeMultiplication> (fichier termemultiplication.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "termemultiplication.h"
#include "symboletype.h"
#include "valeur.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void TermeMultiplication::Print() const
{
    terme->Print();
    cout << "*";
    facteur->Print();
} //----- Fin de Print

int TermeMultiplication::Evaluate(const map<string, int>& variables) const
{
    return terme->Evaluate(variables) * facteur->Evaluate(variables);
} //----- Fin de Evaluate

Expression* TermeMultiplication::Optimisation(const map<string, int>& constantes){

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
    } else if((int)*terme == VALEUR && terme->Evaluate(constantes) == 1) {
        Expression* ancienFacteur(facteur);
        facteur = nullptr;
        return ancienFacteur;
    } else if((int)*terme == VALEUR && terme->Evaluate(constantes) == 0) {
        return new Valeur(0);
    } else if((int)*facteur == VALEUR && facteur->Evaluate(constantes) == 1) {
        Expression* ancienTerme(terme);
        terme = nullptr;
        return ancienTerme;
    } else if((int)*facteur == VALEUR && facteur->Evaluate(constantes) == 0) {
        return new Valeur(0);
    }

    return this;

} //----- Fin de Optimisation

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

TermeMultiplication::TermeMultiplication(Terme* terme, Facteur* facteur) : Terme(TERME), terme(terme), facteur(facteur)
{

} //----- Fin de TermeMultiplication


TermeMultiplication::~TermeMultiplication()
{

} //----- Fin de ~TermeMultiplication


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
