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
#include <sstream>

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

void PinEcrire::AnalyseStatique(map<string, VarState> & vars, const map<string, int> & constantes, vector<string> & errors)
{
    vector<string> ids;
    vector<string>::iterator itIds;

    expression->GetIds(ids);

    map<string,VarState>::iterator itFindVar;
    map<string,int>::const_iterator itFindConst;

    for(itIds = ids.begin(); itIds != ids.end(); ++itIds)
    {
        itFindVar = vars.find(*itIds);
        itFindConst = constantes.find(*itIds);

        if(itFindConst == constantes.end())
        {
            if (itFindVar != vars.end())
            {
                if (itFindVar->second == DECLAREE)
                {
                    stringstream err;
                    err << "la valeur de " << *itIds << " dans l'expression exp n'est pas connue.";
                    errors.push_back(err.str());
                }
                else
                {
                    itFindVar->second = UTILISEE;
                }
            }
            else
            {
                stringstream err;
                err << "la variable " << *itIds << " n'a pas ete declaree.";
                errors.push_back(err.str());
            }
        }
    }
} //----- Fin de AnalyseStatique

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
