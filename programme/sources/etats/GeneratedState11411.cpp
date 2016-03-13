

/*************************************************************************

 GeneratedState11411  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState11411> (fichier GeneratedState11411.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState11411.h"
#include "../expressionparenthese.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState11411::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState11411::Transition (Automate & automate, Symbole *s)
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
			automate.Reduction(3);
			break;
		case DIVISE:
			automate.Reduction(3);
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

Symbole* GeneratedState11411::Reduction (vector<Symbole*>& s)
{
    Expression* expression = static_cast<Expression*>(s[1]);
    
    ExpressionParenthese* expressionParenthese = new ExpressionParenthese(expression);
    expressionParenthese->SetSymboleType(FACTEUR);
    return expressionParenthese;
}

//-------------------------------------------- Constructeurs - destructeur

GeneratedState11411::GeneratedState11411 ()
{
    
} //----- Fin de GeneratedState11411
        

GeneratedState11411::~GeneratedState11411 ( )
{
    
} //----- Fin de ~GeneratedState11411

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées

