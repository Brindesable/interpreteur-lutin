/*************************************************************************
             PinAffecter  -  Représente un PinAffecter du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <PinAffecter> (fichier pinaffecter.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <sstream>

//------------------------------------------------------ Include personnel
#include "pinaffecter.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void PinAffecter::Print() const
{
    id->Print();
    cout << " := ";
    expression->Print();
    cout << ";" << endl;
} //----- Fin de Print

void PinAffecter::Execute(map<string, int>& variables)
{
    variables[id->Nom()] = expression->Evaluate(variables);
} //----- Fin de Execute

void PinAffecter::Optimisation(const map<string, int>& constantes)
{
    Expression* res = expression->Optimisation(constantes);

    if(res != expression){
        delete res;
        expression = res;
    }

} //----- Fin de Optimisation

void PinAffecter::AnalyseStatique(map<string, VarState> & vars, const map<string, int> & constantes, vector<string> & errors)
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

    itFindVar = vars.find(id->Nom());
    itFindConst = constantes.find(id->Nom());

    if(itFindConst != constantes.end())
    {
        stringstream err;
        err << "la variable " << id->Nom() << " est constante, elle ne peut etre modifiee.";
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
//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
PinAffecter::PinAffecter(Identifiant* id, Expression* expression) : id(id), expression(expression)
{

} //----- Fin de PinAffecter


PinAffecter::~PinAffecter()
{
    delete id;
    delete expression;
} //----- Fin de ~PinAffecter


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
