

/*************************************************************************

 GeneratedState22  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState22> (fichier GeneratedState22.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState22.h"
#include "../var.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState22::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState22::Transition (Automate & automate, Symbole *s)
{

    // Generated code :
    switch ((int)*s) {
    case POINT_VIRGULE:
        automate.Reduction(1);
        break;
    case VIRGULE:
        automate.Reduction(1);
        break;
    case IDENTIFIANT : //récupération sur erreur
        automate.Reduction(1);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState22::Reduction (vector<Symbole*>& s)
{
    //le vector ne doit contenir qu'un identifiant.
    Var* var = new Var((Identifiant*)s[0]);

    return var;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState22::GeneratedState22 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState22>" << endl;

#endif

} //----- Fin de GeneratedState22 (constructeur de copie)


GeneratedState22::~GeneratedState22 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState22>" << endl;

#endif

} //----- Fin de ~GeneratedState22





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

