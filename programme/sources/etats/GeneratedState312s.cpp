

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
		case F:
			break;
		case POINT_VIRGULE:
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
		case VAL:
			automate.Decalage(s, new GeneratedState312t)
			break;
		case VAR:
			break;
		case VARp:
			break;
		case VIRGULE:
			break;
	}
	return false;

}

Symbole* GeneratedState312s::Reduction (vector<Symbole*> s)
{
// This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState312s::GeneratedState312s ( const string name ) : Etat(name)

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

