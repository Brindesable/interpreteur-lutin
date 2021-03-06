

/*************************************************************************

 GeneratedState11  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState11> (fichier GeneratedState11.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState11.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState11::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState11::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case OUVRE_PAR:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState114);
        break;

    case EXPRESSION:
        automate.Decalage(s, new GeneratedState111);
        break;

    case FACTEUR:
        automate.Decalage(s, new GeneratedState113);
        break;

    case IDENTIFIANT:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState115);
        break;

    case TERME:
        automate.Decalage(s, new GeneratedState112);
        break;
    case VALEUR:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState116);
        break;

    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState11::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState11::GeneratedState11 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState11>" << endl;

#endif

} //----- Fin de GeneratedState11 (constructeur de copie)


GeneratedState11::~GeneratedState11 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState11>" << endl;

#endif

} //----- Fin de ~GeneratedState11





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

