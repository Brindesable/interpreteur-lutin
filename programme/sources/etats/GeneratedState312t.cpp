

/*************************************************************************

 GeneratedState312t  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState312t> (fichier GeneratedState312t.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState312t.h"
#include "../valeur.h"
#include "../identifiant.h"
#include "../const.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState312t::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState312t::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case POINT_VIRGULE:
        automate.Reduction(5);
        break;
    case VIRGULE:
        automate.Reduction(5);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState312t::Reduction (vector<Symbole*>& s)
{
    Const* cst = static_cast<Const*>(s[4]);
    delete s[3];
    Identifiant* id = static_cast<Identifiant*>(s[2]);
    delete s[1];
    Valeur* val = static_cast<Valeur*>(s[0]);

    cst->AddDeclaration(id, val);

    return cst;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState312t::GeneratedState312t ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState312t>" << endl;

#endif

} //----- Fin de GeneratedState312t (constructeur de copie)


GeneratedState312t::~GeneratedState312t ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState312t>" << endl;

#endif

} //----- Fin de ~GeneratedState312t





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

