/*************************************************************************
             Programme  -  Représente un Programme du langage.
 -------------------
 début                : 01/03/2016
 copyright            : (C) 2016 par mgaillard
 *************************************************************************/

//---------- Interface de la classe <Programme> (fichier programme.cpp) ------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <sstream>

//------------------------------------------------------ Include personnel
#include "programme.h"
#include "varstate.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void Programme::Print() const
{
    declarations->Print();
    instructions->Print();
} //----- Fin de Print

void Programme::Execute(map<string, int> &values)
{
    Pdecl* currDecl = declarations;
    currDecl->Execute(values);

    Pin* currInstr = instructions;
    currInstr->Execute(values);
} //----- Fin de Execute


void Programme::PrintError()
{
    if(error.size() > 0)
    {
        cout << error << endl;
    }
} //----- Fin de PrintError

void Programme::Optimisation(){

    map<string, int> constantes;
    GetConstVars(constantes);
    declarations->RemoveConstDecl();
    instructions->Optimisation(constantes);

} //----- Fin de Optimisation

vector<string> Programme::AnalyseStatique()
{
    vector<string> errors;

    map<string,VarState> vars;
    map<string,VarState>::iterator itVars;
    vector<string> varsId;
    declarations->GetVars(varsId);

    map<string, int> constantes;
    GetConstVars(constantes);

    vector<string>::iterator it;
    for(it = varsId.begin(); it != varsId.end() ; ++it)
    {
        map<string,VarState>::iterator itFindVars = vars.find(*it);
        map<string,int>::iterator itFindConst = constantes.find(*it);
        if(itFindVars == vars.end() && itFindConst == constantes.end())
        {
            vars.insert(pair<string,VarState>(*it, DECLAREE));
        }
        else
        {
            stringstream ss;
            ss << "la variable " << *it << " est deja declaree";
            errors.push_back(ss.str());
        }
    }

    instructions->AnalyseStatique(vars, constantes, errors);
    for(itVars = vars.begin(); itVars != vars.end() ; ++itVars)
    {
        if(itVars->second == DECLAREE)
        {
            stringstream ss;
            ss << "variable non affectee :  " << itVars->first;
            errors.push_back(ss.str());
        }
        if(itVars->second == DECLAREE || itVars->second == AFFECTEE)
        {
            stringstream ss;
            ss << "variable non utilisee :  " << itVars->first;
            errors.push_back(ss.str());
        }
    }

    return errors;
} //----- Fin de GetVars

//-------------------------------------------- Constructeurs - destructeur

Programme::Programme(Pdecl*declarations, Pin* instructions, string err) :
        Symbole(PROGRAMME), declarations(declarations), instructions(instructions), error(err)
{

} //----- Fin de Programme


Programme::~Programme()
{

} //----- Fin de ~Programme


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
void Programme::GetConstVars(map<string, int> & values)
{
    declarations->GetConstVars(values);
}

