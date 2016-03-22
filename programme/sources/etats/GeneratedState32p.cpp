

/*************************************************************************

 GeneratedState32p  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState32p> (fichier GeneratedState32p.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState32p.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState32p::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState32p::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case VALEUR:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState32s);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState32p::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState32p::GeneratedState32p ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState32p>" << endl;

#endif

} //----- Fin de GeneratedState32p (constructeur de copie)


GeneratedState32p::~GeneratedState32p ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState32p>" << endl;

#endif

} //----- Fin de ~GeneratedState32p





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

