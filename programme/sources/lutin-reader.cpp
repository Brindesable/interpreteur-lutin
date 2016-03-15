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
} //----- Fin de Construire

void LutinReader::AnalyseStatique()
{
    programme->PrintError();
} //----- Fin de AnalyseStatique

void LutinReader::Execution()
{
    cout << "Execution" << endl;
    cout << "---------" << endl;

    map<string, int> valeurs;
    programme->Execute(valeurs);
    
    //cout << endl;
} //----- Fin de Execution

void LutinReader::Affichage()
{
    cout << "Affichage du programme" << endl;
    cout << "----------------------" << endl;
    
    programme->Print();
    
    //cout << endl;
} //----- Fin de Affichage

void LutinReader::Transformation()
{
    programme->Optimisation();
} //----- Fin de Transformation


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

LutinReader::LutinReader(istream& s) : sources(s), programme(0), automate(s)
{
} //----- Fin de LutinReader


LutinReader::~LutinReader()
{
} //----- Fin de ~LutinReader


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
