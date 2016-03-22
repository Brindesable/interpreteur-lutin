

/*************************************************************************

 GeneratedState11221  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState11221> (fichier GeneratedState11221.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState11221.h"
#include "../terme.h"
#include "../termedivision.h"
#include "../facteur.h"

//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState11221::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState11221::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case MOINS:
        automate.Reduction(3);
        break;
    case FERME_PAR:
        automate.Reduction(3);
        break;
    case MULTIPLIE:
        automate.Reduction(3);
        break;
    case DIVISE:
        automate.Reduction(3);
        break;
    case PLUS:
        automate.Reduction(3);
        break;
    case POINT_VIRGULE:
        automate.Reduction(3);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState11221::Reduction (vector<Symbole*>& s)
{
    Terme* terme = (Terme*)s[2];
    Facteur* facteur = (Facteur*)s[0];
    TermeDivision* termeDivision = new TermeDivision(terme, facteur);
    return termeDivision;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState11221::GeneratedState11221 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState11221>" << endl;

#endif

} //----- Fin de GeneratedState11221 (constructeur de copie)


GeneratedState11221::~GeneratedState11221 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState11221>" << endl;

#endif

} //----- Fin de ~GeneratedState11221





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

