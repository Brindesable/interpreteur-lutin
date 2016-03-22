

/*************************************************************************

 GeneratedState0  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Réalisation de la classe <GeneratedState0> (fichier GeneratedState0.cpp) --



//---------------------------------------------------------------- INCLUDE



//-------------------------------------------------------- Include système

using namespace std;

#include <iostream>



//------------------------------------------------------ Include personnel

#include "GeneratedState0.h"
#include "GeneratedState0p.h"
#include "../pdecl.h"




//------------------------------------------------------------- Constantes



//---------------------------------------------------- Variables de classe



//----------------------------------------------------------- Types privés





//----------------------------------------------------------------- PUBLIC

//-------------------------------------------------------- Fonctions amies



//----------------------------------------------------- Méthodes publiques

// type GeneratedState0::Méthode ( liste de paramètres )

// Algorithme :

//

//{

//} //----- Fin de Méthode


bool GeneratedState0::Transition (Automate & automate, Symbole *s)
{
    // Generated code :
    switch ((int)*s) {
    case CONST:
        automate.Reduction(0);
        break;
    case ECRIRE:
         automate.Reduction(0);
        break;
    case IDENTIFIANT:
         automate.Reduction(0);
        break;
    case LIRE:
         automate.Reduction(0);
        break;
    case PDECL:
        automate.Decalage(s, new GeneratedState0p);
        break;
    case VAR:
        automate.Reduction(0);
        break;
    case PROGRAMME:
        automate.Consommer();
        Programme* progSymbole;
        progSymbole = static_cast<Programme*>(s);
        automate.Accepter(progSymbole);
        break;
    default:
        automate.SetErreur();
        break;
    }
    return false;

}

Symbole* GeneratedState0::Reduction (vector<Symbole*>& s)
{
    return new Pdecl(PDECL);
}


//-------------------------------------------- Constructeurs - destructeur

GeneratedState0::GeneratedState0 ()

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au constructeur de <GeneratedState0>" << endl;

#endif

} //----- Fin de GeneratedState0 (constructeur de copie)


GeneratedState0::~GeneratedState0 ( )

// Algorithme :

//

{

#ifdef MAP

    cout << "Appel au destructeur de <GeneratedState0>" << endl;

#endif

} //----- Fin de ~GeneratedState0





//------------------------------------------------------------------ PRIVE



//----------------------------------------------------- Méthodes protégées



//------------------------------------------------------- Méthodes privées

