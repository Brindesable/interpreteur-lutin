

/*************************************************************************

 GeneratedStateACCEPTE  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedStateACCEPTE> (fichier GeneratedStateACCEPTE.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "generatedstateaccepte.h"
#include "../pdecl.h"




//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedStateACCEPTE::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedStateACCEPTE::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case MOINS:
        break;
    case OUVRE_PAR:
        break;
    case FERME_PAR:
        break;
    case MULTIPLIE:
        break;
    case DIVISE:
        break;
    case PLUS:
        break;
    case EGAL:
        break;
    case POINT_VIRGULE:

        break;
    case FIN:
        automate.Reduction(2);
        break;
    case CONST:

        break;
    case CONSTp:
        break;
    case EXPRESSION:
        break;
    case ECRIRE:

        break;
    case FACTEUR:
        break;
    case IDENTIFIANT:

        break;
    case LIRE:

        break;
    case PDECL:

        break;
    case PIN:
        break;
    case TERME:
        break;
    case VALEUR:
        break;
    case VAR:

        break;
    case VARp:
        break;
    case VIRGULE:
        break;
    case PROGRAMME:

        break;
    default:
        break;
    }
    return false;

}

Symbole* GeneratedStateACCEPTE::Reduction (vector<Symbole*>& s)
{
    return s[0];
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedStateACCEPTE::GeneratedStateACCEPTE ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedStateACCEPTE>" << endl;

#endif

} //----- Fin de GeneratedStateACCEPTE (constructeur de copie)


GeneratedStateACCEPTE::~GeneratedStateACCEPTE ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedStateACCEPTE>" << endl;

#endif

} //----- Fin de ~GeneratedStateACCEPTE





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées


