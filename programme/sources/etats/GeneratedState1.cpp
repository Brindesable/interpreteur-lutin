

/*************************************************************************

 GeneratedState1  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState1> (fichier GeneratedState1.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState1.h"
#include "../pdecl.h"
#include "../pin.h"
#include "../programme.h"



//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState1::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState1::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case FIN:
        automate.Reduction(2);
        break;
    case ECRIRE:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState11);
        break;

    case IDENTIFIANT:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState13);
        break;
    case LIRE:
        automate.Consommer();
        automate.Decalage(s, new GeneratedState12);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState1::Reduction (vector<Symbole*>& s)
{
    Pin* pin = (Pin*) s[0];
    Pdecl* pdecl = (Pdecl*) s[1];

    return new Programme(pdecl, pin);
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState1::GeneratedState1 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState1>" << endl;

#endif

} //----- Fin de GeneratedState1 (constructeur de copie)


GeneratedState1::~GeneratedState1 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState1>" << endl;

#endif

} //----- Fin de ~GeneratedState1





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

