

/*************************************************************************

 GeneratedState32t  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Interface de la classe <GeneratedState32t> (fichier GeneratedState32t.h) ------

#if ! defined ( GENERATEDSTATE32T )

#define GENERATEDSTATE32T



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

// Rôle de la classe <GeneratedState32t>

//

//

//------------------------------------------------------------------------

class GeneratedState32t : public Etat
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

    GeneratedState32t();

    // Mode d'emploi (constructeur de copie) :

    //

    // Contrat :

    //



    virtual ~GeneratedState32t();

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



//----------------------------------------- Types dépendants de <GeneratedState32t>



#endif // GENERATEDSTATE32T

