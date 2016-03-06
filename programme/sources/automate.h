/*************************************************************************

						automate  -  description
						-----------------------
			début   : 01/03/2016
		copyright   : (C) 2016 par Team-Papassau - H4101

*************************************************************************/

//---------- Interface de la classe <automate> (fichier automate.cpp) ------
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

//--------------------------------------------------- Interfaces utilisées
#include <stack>
#include <vector>
#include "symbole.h"
#include "lexer.h"
using namespace std;

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

class Etat;

//------------------------------------------------------------------------
// Rôle de la classe <automate>
//
//
//------------------------------------------------------------------------

class Automate
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- Méthodes publiques
	// type Méthode ( liste de paramètres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	// Type de la méthode à confirmer
	Symbole* Lecture();
	// Mode d'emploi : Méthode initiant l'analyse du programme.
	//
	// Contrat :
	//

	//------------------------------------------------- Surcharge d'opérateurs


	//-------------------------------------------- Constructeurs - destructeur
	Automate (istream& s);
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Automate ();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- Méthodes protégées

private:
	//------------------------------------------------------- Méthodes privées

protected:
	//----------------------------------------------------- Attributs protégés

	//Le flux d'entrée contenant les sources.
    istream& sources;
	stack<Symbole> pileSymboles;	// Pile des symboles
	//stack<Etat> pileEtats;			// Pile des Etats
	Lexer lexer;

private:
	//------------------------------------------------------- Attributs privés

	//---------------------------------------------------------- Classes amies

	//-------------------------------------------------------- Classes privées

	//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <automate>

#endif // AUTOMATE_H