

/*************************************************************************

 GeneratedState12s  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState12s> (fichier GeneratedState12s.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState12s.h"
#include "../pin.h"
#include "../pinlire.h"
#include "../identifiant.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState12s::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState12s::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case FIN:
        automate.Reduction(4);
        break;
    case ECRIRE:
        automate.Reduction(4);
        break;
    case IDENTIFIANT:
        automate.Reduction(4);
        break;
    case LIRE:
        automate.Reduction(4);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState12s::Reduction (vector<Symbole*>& s)
{
    Pin* pin = (Pin*)s[3];
    Identifiant* id = (Identifiant*)s[1];
    pin->AddPinInst(new PinLire(id));
    return pin;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState12s::GeneratedState12s ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState12s>" << endl;

#endif

} //----- Fin de GeneratedState12s (constructeur de copie)


GeneratedState12s::~GeneratedState12s ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState12s>" << endl;

#endif

} //----- Fin de ~GeneratedState12s





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

