

/*************************************************************************

 GeneratedState12s  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState12s> (fichier GeneratedState12s.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState12s.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState12s::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState12s::Transition (Automate & automate, Symbole *s)
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
			automate.Reduction(4);
			break;
		case CONST:
			break;
		case CONSTp:
			break;
		case EXPRESSION:
			break;
		case ECRIRE:
			automate.Reduction(4);
			break;
		case F:
			break;
		case POINT_VIRGULE:
			break;
		case IDENTIFIANT:
			automate.Reduction(4);
			break;
		case LIRE:
			automate.Reduction(4);
			break;
		case PDECL:
			break;
		case PIN:
			break;
		case TERME:
			break;
		case VAL:
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

Symbole* GeneratedState12s::Reduction (vector<Symbole*> s)
{
// This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState12s::GeneratedState12s ( const string name ) : Etat(name)

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState12s>" << endl;

#endif

    } //----- Fin de GeneratedState12s (constructeur de copie)
        

    GeneratedState12s::~GeneratedState12s ( )

    // Algorithme :

    //

    {

#ifdef MAP

        cout << "Appel au destructeur de <GeneratedState12s>" << endl;

#endif

    } //----- Fin de ~GeneratedState12s

    

    

    //------------------------------------------------------------------ PRIVE

    

    //----------------------------------------------------- Méthodes protégées

    

    //------------------------------------------------------- Méthodes privées

