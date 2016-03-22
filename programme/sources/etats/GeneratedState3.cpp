

/*************************************************************************

 GeneratedState3  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState3> (fichier GeneratedState3.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState3.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState3::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState3::Transition (Automate & automate, Symbole *s)
{

    // Generated code :
    switch ((int)*s) {
    case CONSTp:
        automate.Decalage(s, new GeneratedState31);
        break;
    case IDENTIFIANT:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState32);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState3::Reduction (vector<Symbole*>& s)
{
    /*This is some auto generated dummy reduction code*/

}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState3::GeneratedState3 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState3>" << endl;

#endif

} //----- Fin de GeneratedState3 (constructeur de copie)


GeneratedState3::~GeneratedState3 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState3>" << endl;

#endif

} //----- Fin de ~GeneratedState3





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

