

/*************************************************************************

 GeneratedState0p  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState0p> (fichier GeneratedState0p.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState0p.h"
#include "../pin.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState0p::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState0p::Transition (Automate & automate, Symbole *s)
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
            automate.Reduction(0);
			break;
		case CONST:
            automate.Consommer();
			automate.Decalage(s, new GeneratedState3);
			break;
		case CONSTp:
			break;
		case EXPRESSION:
			break;
		case ECRIRE:
            automate.Reduction(0);
			break;
		case FACTEUR:
			break;
		case POINT_VIRGULE:
			break;
		case IDENTIFIANT:
            automate.Reduction(0);
			break;
		case LIRE:
            automate.Reduction(0);
			break;
		case PDECL:
			break;
		case PIN:
            automate.Decalage(s, new GeneratedState1);
			break;
		case TERME:
			break;
		case VALEUR:
			break;
		case VAR:
            automate.Consommer();
			automate.Decalage(s, new GeneratedState2);
			break;
		case VARp:
			break;
		case VIRGULE:
			break;
		default:
			break;
	}
	return false;

}

Symbole* GeneratedState0p::Reduction (vector<Symbole*>& s)
{
    return new Pin(PIN);
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState0p::GeneratedState0p ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState0p>" << endl;

#endif

    } //----- Fin de GeneratedState0p (constructeur de copie)
        

    GeneratedState0p::~GeneratedState0p ( )

    // Algorithme :

    //

    {

#ifdef MAP

        cout << "Appel au destructeur de <GeneratedState0p>" << endl;

#endif

    } //----- Fin de ~GeneratedState0p

    

    

    //------------------------------------------------------------------ PRIVE

    

    //----------------------------------------------------- Méthodes protégées

    

    //------------------------------------------------------- Méthodes privées

