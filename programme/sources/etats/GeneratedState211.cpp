

/*************************************************************************

 GeneratedState211  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState211> (fichier GeneratedState211.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState211.h"
#include "../pdecl.h"
#include "../var.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState211::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState211::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case FIN:
        automate.Reduction(4);
        break;
    case CONST:
        automate.Reduction(4);
        break;
    case ECRIRE:
        automate.Reduction(4);
        break;
    case IDENTIFIANT:
        automate.Reduction(4);
        break;
    case LIRE:
        automate.Reduction(4);
        break;
    case VAR:
        automate.Reduction(4);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState211::Reduction (vector<Symbole*>& s)
{
    Pdecl* pdecl = (Pdecl*)s[3];
    Var* var = (Var*)s[1];

    pdecl->AddDecl(var);

    return pdecl;

}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState211::GeneratedState211 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState211>" << endl;

#endif

} //----- Fin de GeneratedState211 (constructeur de copie)


GeneratedState211::~GeneratedState211 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState211>" << endl;

#endif

} //----- Fin de ~GeneratedState211





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

