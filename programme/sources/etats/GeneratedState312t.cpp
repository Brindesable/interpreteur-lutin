

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
		case FIN:
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
		case POINT_VIRGULE:
            automate.Reduction(5);
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
            automate.Reduction(5);
			break;
		default:
			break;
	}
	return false;

}

Symbole* GeneratedState312t::Reduction (vector<Symbole*>& s)
{
    Const* cst = (Const*)s[4];
    Valeur* val = (Valeur*)s[0];
    Identifiant* id = (Identifiant*)s[2];

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

