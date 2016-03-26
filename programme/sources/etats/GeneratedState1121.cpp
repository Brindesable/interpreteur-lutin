

/*************************************************************************

 GeneratedState1121  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState1121> (fichier GeneratedState1121.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState1121.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState1121::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState1121::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case OUVRE_PAR:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState114);
        break;
    case FACTEUR:
        automate.Decalage(s, new GeneratedState11211);
        break;
    case IDENTIFIANT:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState115);
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

Symbole* GeneratedState1121::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState1121::GeneratedState1121 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState1121>" << endl;

#endif

} //----- Fin de GeneratedState1121 (constructeur de copie)


GeneratedState1121::~GeneratedState1121 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState1121>" << endl;

#endif

} //----- Fin de ~GeneratedState1121





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

