

/*************************************************************************

 GeneratedState1112  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState1112> (fichier GeneratedState1112.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState1112.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState1112::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState1112::Transition (Automate & automate, Symbole *s)
{
	// Generated code :
	switch ((int)*s) {
		case MOINS:
			break;
		case OUVRE_PAR:
			automate.Decalage(s, new GeneratedState114);
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
			automate.Decalage(s, new GeneratedState113);
			break;
		case POINT_VIRGULE:
			break;
		case IDENTIFIANT:
            automate.Consommer();
			automate.Decalage(s, new GeneratedState115);
			break;
		case LIRE:
			break;
		case PDECL:
			break;
		case PIN:
			break;
		case TERME:
			automate.Decalage(s, new GeneratedState11121);
			break;
		case VALEUR:
            automate.Consommer();
			automate.Decalage(s, new GeneratedState116);
			break;
		case VAR:
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

Symbole* GeneratedState1112::Reduction (vector<Symbole*>& s)
{
// This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState1112::GeneratedState1112 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState1112>" << endl;

#endif

    } //----- Fin de GeneratedState1112 (constructeur de copie)
        

    GeneratedState1112::~GeneratedState1112 ( )

    // Algorithme :

    //

    {

#ifdef MAP

        cout << "Appel au destructeur de <GeneratedState1112>" << endl;

#endif

    } //----- Fin de ~GeneratedState1112

    

    

    //------------------------------------------------------------------ PRIVE

    

    //----------------------------------------------------- Méthodes protégées

    

    //------------------------------------------------------- Méthodes privées

