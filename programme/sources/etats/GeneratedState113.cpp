

/*************************************************************************

 GeneratedState113  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState113> (fichier GeneratedState113.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState113.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState113::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState113::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case MOINS:
        automate.Reduction(1);
        break;
    case FERME_PAR:
        automate.Reduction(1);
        break;
    case MULTIPLIE:
        automate.Reduction(1);
        break;
    case DIVISE:
        automate.Reduction(1);
        break;
    case PLUS:
        automate.Reduction(1);
        break;
    case POINT_VIRGULE:
        automate.Reduction(1);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState113::Reduction (vector<Symbole*>& s)
{
    Symbole* facteur = s[0];
    facteur->SetSymboleType(TERME);

    return facteur;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState113::GeneratedState113 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState113>" << endl;

#endif

} //----- Fin de GeneratedState113 (constructeur de copie)


GeneratedState113::~GeneratedState113 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState113>" << endl;

#endif

} //----- Fin de ~GeneratedState113





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

