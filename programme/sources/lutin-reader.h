/*************************************************************************
      LutinReader  -  Analyse, optimise, affiche et execute un fichier Lutin
 -------------------
 début                : 05/03/2016
 copyright            : (C) 2016 par kollivier
 *************************************************************************/

//---------- Interface de la classe <LutinReader> (fichier lutin-reader.h) ------
#if ! defined ( LUTIN_READER_H )
#define LUTIN_READER_H

//--------------------------------------------------- Interfaces utilisées
#include <istream>
#include "symbole.h"
#include "automate.h"
#include "programme.h"

using namespace std;

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------

//------------------------------------------------------------------------

class LutinReader
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
    void Construire();
    // Mode d'emploi :

    void AnalyseStatique();
    // Mode d'emploi :

	void Execution();
    // Mode d'emploi :

	void Affichage();
    // Mode d'emploi :

    void Transformation();
    // Mode d'emploi :

    LutinReader(istream& sources);
    // Mode d'emploi :
    // Construit LutinReader.

    ~LutinReader();
    // Mode d'emploi :

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

private:
//------------------------------------------------------- Méthodes privées

//-------------------------------------------------------- Classes privées

protected:
//----------------------------------------------------- Attributs protégés

private:
//------------------------------------------------------- Attributs privés
    // Le flux d'entrée contenant les sources.
    istream& sources;
    // P

    Programme* programme;
    Automate automate;

    // erreurs statiques
    vector<string> errors;

//---------------------------------------------------------- Classes amies

//----------------------------------------------------------- Types privés

};

//----------------------------------------- Types dépendants de <LutinReader>

#endif // LUTIN_READER_H
