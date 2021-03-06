/*************************************************************************
      LutinReader  -  Analyse, optimise, affiche et execute un fichier Lutin
 -------------------
 début                : 05/03/2016
 copyright            : (C) 2016 par kollivier
 *************************************************************************/

//---------- Réalisation de la classe <LutinReader> (fichier lutin-reader.cpp) --

//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "lutin-reader.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
void LutinReader::Construire()
{

    programme = automate.Lecture();

    if(programme != nullptr)
    {
        errors = programme->AnalyseStatique();
    }
} //----- Fin de Construire

void LutinReader::AnalyseStatique()
{

    if(programme == nullptr){
        return;
    }

    vector<string>::iterator itErrors;
    for(itErrors = errors.begin(); itErrors != errors.end(); ++itErrors)
    {
        cerr << *itErrors << endl;
    }

} //----- Fin de AnalyseStatique

void LutinReader::Execution()
{
    if(programme != nullptr && errors.size() == 0)
    {
        map<string, int> valeurs;
        programme->Execute(valeurs);
    }
} //----- Fin de Execution

void LutinReader::Affichage()
{
    if(programme != nullptr)
    {
        programme->Print();
    }
} //----- Fin de Affichage

void LutinReader::Transformation()
{

    if(programme != nullptr && errors.size() == 0)
    {
        programme->Optimisation();
    }
} //----- Fin de Transformation


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

LutinReader::LutinReader(istream& s) : sources(s), programme(0), automate(s)
{
} //----- Fin de LutinReader


LutinReader::~LutinReader()
{

    delete programme;
} //----- Fin de ~LutinReader


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées


//------------------------------------------------------- Méthodes privées
