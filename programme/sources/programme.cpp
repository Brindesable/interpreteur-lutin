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

//------------------------------------------------------ Include personnel
#include "programme.h"

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

