

/*************************************************************************

 GeneratedState13p11  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState13p11> (fichier GeneratedState13p11.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState13p11.h"
#include "../pin.h"
#include "../identifiant.h"
#include "../valeur.h"
#include "../pinaffecter.h"


//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState13p11::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState13p11::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case FIN:
        automate.Reduction(5);
        break;
    case ECRIRE:
        automate.Reduction(5);
        break;
    case IDENTIFIANT:
        automate.Reduction(5);
        break;
    case LIRE:
        automate.Reduction(5);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState13p11::Reduction (vector<Symbole*>& s)
{
    Pin* pin = static_cast<Pin*>(s[4]);
    Identifiant* identifiant = static_cast<Identifiant*>(s[3]);
    delete s[2];
    Expression* expression = static_cast<Expression*>(s[1]);
    delete s[0];
    
    PinAffecter* pinAffecter = new PinAffecter(identifiant, expression);
    pin->AddPinInst(pinAffecter);

    return pin;
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState13p11::GeneratedState13p11 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState13p11>" << endl;

#endif

} //----- Fin de GeneratedState13p11 (constructeur de copie)


GeneratedState13p11::~GeneratedState13p11 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState13p11>" << endl;

#endif

} //----- Fin de ~GeneratedState13p11





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

