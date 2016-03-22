

/*************************************************************************

 GeneratedState112  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState112> (fichier GeneratedState112.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState112.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState112::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState112::Transition (Automate & automate, Symbole *s)
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
        automate.Consommer();
        automate.Decalage(s, new GeneratedState1121);
        break;
    case DIVISE:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState1122);
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

Symbole* GeneratedState112::Reduction (vector<Symbole*>& s)
{

    Symbole* terme = s[0];
    terme->SetSymboleType(EXPRESSION);

    return terme;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState112::GeneratedState112 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState112>" << endl;

#endif

} //----- Fin de GeneratedState112 (constructeur de copie)


GeneratedState112::~GeneratedState112 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState112>" << endl;

#endif

} //----- Fin de ~GeneratedState112





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

