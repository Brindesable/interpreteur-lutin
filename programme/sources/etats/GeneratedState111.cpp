

/*************************************************************************

 GeneratedState111  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState111> (fichier GeneratedState111.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState111.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState111::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState111::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case MOINS:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState1113);
        break;
    case PLUS:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState1112);
        break;

    case POINT_VIRGULE:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState1111);
        break;

    default:

        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState111::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState111::GeneratedState111 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState111>" << endl;

#endif

} //----- Fin de GeneratedState111 (constructeur de copie)


GeneratedState111::~GeneratedState111 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState111>" << endl;

#endif

} //----- Fin de ~GeneratedState111





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

