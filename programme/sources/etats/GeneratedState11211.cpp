

/*************************************************************************

 GeneratedState11211  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState11211> (fichier GeneratedState11211.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState11211.h"
#include "../terme.h"
#include "../facteur.h"
#include "../termemultiplication.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState11211::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState11211::Transition (Automate & automate, Symbole *s)
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

Symbole* GeneratedState11211::Reduction (vector<Symbole*>& s)
{
    Terme* terme = static_cast<Terme*>(s[2]);
    delete s[1];
    Facteur* facteur = static_cast<Facteur*>(s[0]);
    
    return new TermeMultiplication(terme, facteur);
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState11211::GeneratedState11211 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState11211>" << endl;

#endif

} //----- Fin de GeneratedState11211 (constructeur de copie)


GeneratedState11211::~GeneratedState11211 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState11211>" << endl;

#endif

} //----- Fin de ~GeneratedState11211





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

