

/*************************************************************************

 GeneratedState312s  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState312s> (fichier GeneratedState312s.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState312s.h"
#include "GeneratedState312t.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState312s::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState312s::Transition (Automate & automate, Symbole *s)
{

    // Generated code :
    switch (*s) {
    case VALEUR:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState312t);
        break;

    default:
        break;
    }
    return false;

}

Symbole* GeneratedState312s::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState312s::GeneratedState312s ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState312s>" << endl;

#endif

} //----- Fin de GeneratedState312s (constructeur de copie)


GeneratedState312s::~GeneratedState312s ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState312s>" << endl;

#endif

} //----- Fin de ~GeneratedState312s





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

