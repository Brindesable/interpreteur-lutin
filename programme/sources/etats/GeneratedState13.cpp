

/*************************************************************************

 GeneratedState13  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState13> (fichier GeneratedState13.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState13.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState13::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState13::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case AFFECTATION:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState13p);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState13::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState13::GeneratedState13 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState13>" << endl;

#endif

} //----- Fin de GeneratedState13 (constructeur de copie)


GeneratedState13::~GeneratedState13 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState13>" << endl;

#endif

} //----- Fin de ~GeneratedState13





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

