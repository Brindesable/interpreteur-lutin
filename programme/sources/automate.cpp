/*************************************************************************

						automate  -  description
						-----------------------
			début   : 01/03/2016
		copyright   : (C) 2016 par Team-Papassau - H4101

*************************************************************************/
​
//---------- Réalisation de la classe <automate> (fichier automate.h) --
​
//---------------------------------------------------------------- INCLUDE
​
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
​
//------------------------------------------------------ Include personnel
#include "automate.h"
​
//------------------------------------------------------------- Constantes
​
//---------------------------------------------------- Variables de classe
​
//----------------------------------------------------------- Types privés
​
​
//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies
​
//----------------------------------------------------- Méthodes publiques
// type automate::Méthode ( liste de paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
​
​
//------------------------------------------------- Surcharge d'opérateurs
Automate &Automate::operator = (const Automate &unAutomate)
// Algorithme :
//
{
} //----- Fin de operator =
​
​
//-------------------------------------------- Constructeurs - destructeur
Automate::Automate (const Automate &unAutomate)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <automate>" << endl;
#endif
} //----- Fin de automate (constructeur de copie)

​

Automate::Automate ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <automate>" << endl;
#endif
} //----- Fin de automate


Automate::~Automate ()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <automate>" << endl;
#endif
} //----- Fin de ~automate


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- Méthodes protégées

  //------------------------------------------------------- Méthodes privées