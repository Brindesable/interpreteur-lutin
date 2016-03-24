

/*************************************************************************

 GeneratedState312p  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState312p> (fichier GeneratedState312p.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState312p.h"
#include "../fabriquesymbole.h"
#include "../symboleterminal.h"

//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState312p::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState312p::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case EGAL:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState312s);
        break;
    case VALEUR:
        //dans ce cas, l'utilisateur a oublié le égal, probablement.
        //On ajoute "artificiellement" le symbole.
        Symbole* egal;
        egal = FabriqueSymbole::CreerSymbole(EGAL, "=");
        automate.AddAvertissement(egal, "=", static_cast<SymboleTerminal*>(s)->Terminal().length(), "operateur");
        automate.Decalage(egal, new GeneratedState312s);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState312p::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState312p::GeneratedState312p ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState312p>" << endl;

#endif

} //----- Fin de GeneratedState312p (constructeur de copie)


GeneratedState312p::~GeneratedState312p ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState312p>" << endl;

#endif

} //----- Fin de ~GeneratedState312p





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

