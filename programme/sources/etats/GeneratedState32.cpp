

/*************************************************************************

 GeneratedState32  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState32> (fichier GeneratedState32.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState32.h"
#include "../symboleterminal.h"
#include "../fabriquesymbole.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState32::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState32::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case EGAL:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState32p);
        break;

    case VALEUR:
        //dans ce cas, l'utilisateur a oublié le égal, probablement.
        //On ajoute "artificiellement" le symbole.
        Symbole* egal;
        egal = FabriqueSymbole::CreerSymbole(EGAL, "=");
        automate.AddAvertissement(egal);
        automate.Decalage(egal, new GeneratedState32p);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState32::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState32::GeneratedState32 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState32>" << endl;

#endif

} //----- Fin de GeneratedState32 (constructeur de copie)


GeneratedState32::~GeneratedState32 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState32>" << endl;

#endif

} //----- Fin de ~GeneratedState32





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

