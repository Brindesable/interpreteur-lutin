

/*************************************************************************

 GeneratedState0p  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState0p> (fichier GeneratedState0p.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState0p.h"
#include "../pin.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState0p::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState0p::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case FIN:
        automate.Reduction(0);
        break;
    case CONST:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState3);
        break;
    case ECRIRE:
        automate.Reduction(0);
        break;
    case POINT_VIRGULE:
        break;
    case IDENTIFIANT:
        automate.Reduction(0);
        break;
    case LIRE:
        automate.Reduction(0);
        break;
    case PIN:
        automate.Decalage(s, new GeneratedState1);
        break;
    case VAR:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState2);
        break;
    default:
        automate.SetErreur();

        break;
    }
    return false;
}

Symbole* GeneratedState0p::Reduction (vector<Symbole*>& s)
{
    return new Pin(PIN);
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState0p::GeneratedState0p ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState0p>" << endl;

#endif

} //----- Fin de GeneratedState0p (constructeur de copie)


GeneratedState0p::~GeneratedState0p ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState0p>" << endl;

#endif

} //----- Fin de ~GeneratedState0p





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

