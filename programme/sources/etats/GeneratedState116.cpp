

/*************************************************************************

 GeneratedState116  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState116> (fichier GeneratedState116.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState116.h"
#include "../valeur.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState116::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState116::Transition (Automate & automate, Symbole *s)
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

Symbole* GeneratedState116::Reduction (vector<Symbole*>& s)
{
    Valeur* val = (Valeur*)s[0];
    val->SetSymboleType(FACTEUR);
    return val;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState116::GeneratedState116 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState116>" << endl;

#endif

} //----- Fin de GeneratedState116 (constructeur de copie)


GeneratedState116::~GeneratedState116 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState116>" << endl;

#endif

} //----- Fin de ~GeneratedState116





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

