

/*************************************************************************

 GeneratedState212  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState212> (fichier GeneratedState212.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState212.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState212::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState212::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case IDENTIFIANT:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState212p);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState212::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState212::GeneratedState212 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState212>" << endl;

#endif

} //----- Fin de GeneratedState212 (constructeur de copie)


GeneratedState212::~GeneratedState212 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState212>" << endl;

#endif

} //----- Fin de ~GeneratedState212





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

