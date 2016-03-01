/*************************************************************************

						automate  -  description
						-----------------------
			début   : 01/03/2016
		copyright   : (C) 2016 par Team-Papassau - H4101

*************************************************************************/
​
//---------- Interface de la classe <automate> (fichier automate.cpp) ------
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H
​
//--------------------------------------------------- Interfaces utilisées
#include <stack>
using namespace std;
​
//------------------------------------------------------------- Constantes
​
//------------------------------------------------------------------ Types

class Symbole;
class Etat;
​
//------------------------------------------------------------------------
// Rôle de la classe <automate>
//
//
//------------------------------------------------------------------------
​
class Automate :
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
	void Lecture();
	// Mode d'emploi : Méthode initiant l'analyse du programme.
	//
	// Contrat :
	//




	//------------------------------------------------- Surcharge d'opérateurs
	Automate &operator = (const Automate &unAutomate);
	// Mode d'emploi :
	//
	// Contrat :
	//


	//-------------------------------------------- Constructeurs - destructeur
	Automate (const Automate &unAutomate);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Automate ();
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

	stack<Symbole> pileSymboles;	// Pile des symboles
	stack<Etat> pileEtats;			// Pile des Etats



private:
	//------------------------------------------------------- Attributs privés

	//---------------------------------------------------------- Classes amies

	//-------------------------------------------------------- Classes privées

	//----------------------------------------------------------- Types privés

};
​
//----------------------------------------- Types dépendants de <automate>
​
#endif // AUTOMATE_H