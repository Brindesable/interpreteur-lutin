

/*************************************************************************

 GeneratedState311  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState311> (fichier GeneratedState311.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState311.h"
#include "../pdecl.h"
#include "../const.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState311::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState311::Transition (Automate & automate, Symbole *s)
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

Symbole* GeneratedState311::Reduction (vector<Symbole*>& s)
{
    Pdecl* pdecl = (Pdecl*)s[3];
    Const* cst = (Const*)s[1];

    pdecl->AddDecl(cst);

    return pdecl;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState311::GeneratedState311 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState311>" << endl;

#endif

} //----- Fin de GeneratedState311 (constructeur de copie)


GeneratedState311::~GeneratedState311 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState311>" << endl;

#endif

} //----- Fin de ~GeneratedState311





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

