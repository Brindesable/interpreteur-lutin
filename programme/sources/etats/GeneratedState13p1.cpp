

/*************************************************************************

 GeneratedState13p1  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState13p1> (fichier GeneratedState13p1.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState13p1.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState13p1::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState13p1::Transition (Automate & automate, Symbole *s)
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
        automate.Decalage(s, new GeneratedState13p11);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState13p1::Reduction (vector<Symbole*>& s)
{
    // This state does not require any reductions. :-)
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState13p1::GeneratedState13p1 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState13p1>" << endl;

#endif

} //----- Fin de GeneratedState13p1 (constructeur de copie)


GeneratedState13p1::~GeneratedState13p1 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState13p1>" << endl;

#endif

} //----- Fin de ~GeneratedState13p1





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

