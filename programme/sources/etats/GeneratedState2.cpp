

/*************************************************************************

 GeneratedState2  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState2> (fichier GeneratedState2.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState2.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState2::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState2::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case IDENTIFIANT:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState22);
        break;
    case VARp:
        automate.Decalage(s, new GeneratedState21);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState2::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState2::GeneratedState2 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState2>" << endl;

#endif

} //----- Fin de GeneratedState2 (constructeur de copie)


GeneratedState2::~GeneratedState2 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState2>" << endl;

#endif

} //----- Fin de ~GeneratedState2





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

