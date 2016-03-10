

/*************************************************************************

 GeneratedState13p11  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState13p11> (fichier GeneratedState13p11.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState13p11.h"
#include "../pin.h"
#include "../identifiant.h"
#include "../valeur.h"
#include "../pinaffecter.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState13p11::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState13p11::Transition (Automate & automate, Symbole *s)
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
			automate.Reduction(5);
			break;
		case CONST:
			break;
		case CONSTp:
			break;
		case EXPRESSION:
			break;
		case ECRIRE:
			automate.Reduction(5);
			break;
		case FACTEUR:
			break;
		case POINT_VIRGULE:
			break;
		case IDENTIFIANT:
			automate.Reduction(5);
			break;
		case LIRE:
			automate.Reduction(5);
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

Symbole* GeneratedState13p11::Reduction (vector<Symbole*>& s)
{
    Pin* pin = (Pin*)s[4];
    PinAffecter* pinAffecter = new PinAffecter((Identifiant*)s[3],(Expression*)s[1]);
    pin->AddPinInst(pinAffecter);

    return pin;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState13p11::GeneratedState13p11 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState13p11>" << endl;

#endif

    } //----- Fin de GeneratedState13p11 (constructeur de copie)
        

    GeneratedState13p11::~GeneratedState13p11 ( )

    // Algorithme :

    //

    {

#ifdef MAP

        cout << "Appel au destructeur de <GeneratedState13p11>" << endl;

#endif

    } //----- Fin de ~GeneratedState13p11

    

    

    //------------------------------------------------------------------ PRIVE

    

    //----------------------------------------------------- Méthodes protégées

    

    //------------------------------------------------------- Méthodes privées

