

/*************************************************************************

 GeneratedState13p  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Interface de la classe <GeneratedState13p> (fichier GeneratedState13p.h) ------

#if ! defined ( GENERATEDSTATE13P )

#define GENERATEDSTATE13P



//--------------------------------------------------- Interfaces utilisées

#include <vector>
#include <string>
#include "../etat.h"
#include "../symbole.h"
#include "../automate.h"
#include "all-states.h"
using namespace std;

//------------------------------------------------------------- Constantes



//------------------------------------------------------------------ Types



//------------------------------------------------------------------------

// Rôle de la classe <GeneratedState13p>

//

//

//------------------------------------------------------------------------

class GeneratedState13p : public Etat
 {
    //----------------------------------------------------------------- PUBLIC



public:

    //----------------------------------------------------- Méthodes publiques

    // type Méthode ( liste de paramètres );

    // Mode d'emploi :

    //

    // Contrat :

    //

    bool Transition(Automate & automate, Symbole *s);
    Symbole* Reduction(vector<Symbole*>& s);

    //-------------------------------------------- Constructeurs - destructeur

    GeneratedState13p();

    // Mode d'emploi (constructeur de copie) :

    //

    // Contrat :

    //



    virtual ~GeneratedState13p();

    // Mode d'emploi :

    //

    // Contrat :

    //



    //------------------------------------------------------------------ PRIVE



protected:

    //----------------------------------------------------- Méthodes protégées



private:

    //------------------------------------------------------- Méthodes privées



protected:

    //----------------------------------------------------- Attributs protégés



private:

    //------------------------------------------------------- Attributs privés



    //---------------------------------------------------------- Classes amies



    //-------------------------------------------------------- Classes privées



    //----------------------------------------------------------- Types privés



};



//----------------------------------------- Types dépendants de <GeneratedState13p>



#endif // GENERATEDSTATE13P

