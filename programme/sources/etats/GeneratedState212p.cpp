

/*************************************************************************

 GeneratedState212p  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState212p> (fichier GeneratedState212p.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState212p.h"
#include "../var.h"
#include "../identifiant.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState212p::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState212p::Transition (Automate & automate, Symbole *s)
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
			automate.Reduction(3);
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
			automate.Reduction(3);
			break;
		default:
			break;
	}
	return false;

}

Symbole* GeneratedState212p::Reduction (vector<Symbole*>& s)
{
    Var* curr = (Var*)s[2];
    delete s[1];
    Identifiant* id = (Identifiant*)s[0];
    
    curr->AddDeclaration(id);

    return curr;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState212p::GeneratedState212p ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState212p>" << endl;

#endif

    } //----- Fin de GeneratedState212p (constructeur de copie)
        

    GeneratedState212p::~GeneratedState212p ( )

    // Algorithme :

    //

    {

#ifdef MAP

        cout << "Appel au destructeur de <GeneratedState212p>" << endl;

#endif

    } //----- Fin de ~GeneratedState212p

    

    

    //------------------------------------------------------------------ PRIVE

    

    //----------------------------------------------------- Méthodes protégées

    

    //------------------------------------------------------- Méthodes privées

