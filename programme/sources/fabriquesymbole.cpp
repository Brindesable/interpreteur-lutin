/*************************************************************************
    FabriqueSymbole  -  Fabrique un symbole en fonction de son type.
 -------------------
 début                : 06/03/2016
 copyright            : (C) 2016 par mgaillard
 ************************************************************************/

//------------- Réalisation de la classe <FabriqueSymbole> ---------------
//------------------ (fichier fabriquesymbole.cpp) -----------------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;

//------------------------------------------------------ Include personnel
#include "fabriquesymbole.h"
#include "symboleterminal.h"
#include "identifiant.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
Symbole* FabriqueSymbole::CreerSymbole(const SymboleType& type,
                                       const string& valeur)
{
    Symbole* symbole = nullptr;

    switch (type)
    {
        case IDENTIFIANT:
            symbole = new Identifiant(valeur);
            break;
        default:
            symbole = new SymboleTerminal(type, valeur);
            break;
    }

    return symbole;
} //----- Fin de FabriqueSymbole

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur    
    
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées