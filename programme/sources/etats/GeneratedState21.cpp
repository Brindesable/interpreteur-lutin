

/*************************************************************************

 GeneratedState21  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState21> (fichier GeneratedState21.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState21.h"
#include "../fabriquesymbole.h"
#include "../symboleterminal.h"
#include "../identifiant.h"

//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState21::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState21::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case POINT_VIRGULE:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState211);
        break;
    case VIRGULE:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState212);
        break;
    case IDENTIFIANT:
        //On ajoute "artificiellement" le symbole.
        Symbole* virgule;
        virgule = FabriqueSymbole::CreerSymbole(VIRGULE, ",");
        automate.AddAvertissement(virgule, ",", static_cast<Identifiant*>(s)->tailleNom(), "symbole");
        automate.Decalage(virgule, new GeneratedState212);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState21::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState21::GeneratedState21 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState21>" << endl;

#endif

} //----- Fin de GeneratedState21 (constructeur de copie)


GeneratedState21::~GeneratedState21 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState21>" << endl;

#endif

} //----- Fin de ~GeneratedState21





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

