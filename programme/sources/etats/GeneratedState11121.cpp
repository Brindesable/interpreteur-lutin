

/*************************************************************************

 GeneratedState11121  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState11121> (fichier GeneratedState11121.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState11121.h"
#include "../terme.h"
#include "../expressionplus.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState11121::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState11121::Transition (Automate & automate, Symbole *s)
{
	// Generated code :
	switch ((int)*s) {
		case MOINS:
			automate.Reduction(3);
			break;
		case OUVRE_PAR:
			break;
		case FERME_PAR:
			automate.Reduction(3);
			break;
		case MULTIPLIE:
            automate.Consommer();
			automate.Decalage(s, new GeneratedState1121);
			break;
		case DIVISE:
            automate.Consommer();
			automate.Decalage(s, new GeneratedState1122);
			break;
		case PLUS:
			automate.Reduction(3);
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
			break;
		default:
			break;
	}
	return false;

}

Symbole* GeneratedState11121::Reduction (vector<Symbole*>& s)
{
    Terme* terme = (Terme*)s[0];
    Expression* expression = (Expression*)s[2];

    return new ExpressionPlus(expression, terme);
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState11121::GeneratedState11121 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState11121>" << endl;

#endif

    } //----- Fin de GeneratedState11121 (constructeur de copie)
        

    GeneratedState11121::~GeneratedState11121 ( )

    // Algorithme :

    //

    {

#ifdef MAP

        cout << "Appel au destructeur de <GeneratedState11121>" << endl;

#endif

    } //----- Fin de ~GeneratedState11121

    

    

    //------------------------------------------------------------------ PRIVE

    

    //----------------------------------------------------- Méthodes protégées

    

    //------------------------------------------------------- Méthodes privées

