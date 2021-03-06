

/*************************************************************************

 GeneratedState115  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState115> (fichier GeneratedState115.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState115.h"
#include "../identifiant.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState115::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState115::Transition (Automate & automate, Symbole *s)
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

Symbole* GeneratedState115::Reduction (vector<Symbole*>& s)
{
    Symbole* identifiant = s[0];
    identifiant->SetSymboleType(FACTEUR);
    
    return identifiant;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState115::GeneratedState115 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState115>" << endl;

#endif

} //----- Fin de GeneratedState115 (constructeur de copie)


GeneratedState115::~GeneratedState115 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState115>" << endl;

#endif

} //----- Fin de ~GeneratedState115





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

