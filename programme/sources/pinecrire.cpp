/*************************************************************************
             PinEcrire  -  Représente un PinEcrire du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinEcrire> (fichier pinecrire.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "pinecrire.h"
#include "symboletype.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void PinEcrire::Print() const
{
    cout << "ecrire ";
    expression->Print();
    cout << ";" << endl;
} //----- Fin de Print

void PinEcrire::Execute(map<string, int>& variables)
{
    cout << expression->Evaluate(variables) << endl;
} //----- Fin de Execute

void PinEcrire::Optimisation(const map<string, int>& constantes)
{
    Expression* res = expression->Optimisation(constantes);

    if(res != expression){
        delete expression;
        expression = res;
    }

} //----- Fin de Optimisation



//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
PinEcrire::PinEcrire(Expression* expression) : expression(expression)
{

} //----- Fin de PinEcrire


PinEcrire::~PinEcrire()
{
    delete expression;
} //----- Fin de ~PinEcrire


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
