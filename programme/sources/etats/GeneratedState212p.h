

/*************************************************************************

 GeneratedState212p  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Interface de la classe <GeneratedState212p> (fichier GeneratedState212p.h) ------

#if ! defined ( GENERATEDSTATE212P )

#define GENERATEDSTATE212P



//--------------------------------------------------- Interfaces utilisées

#include <vector>
#include <string>
#include "../etat.h"
#include "../symbole.h"
#include "../automate.h"
using namespace std;

//------------------------------------------------------------- Constantes



//------------------------------------------------------------------ Types



//------------------------------------------------------------------------

// Rôle de la classe <GeneratedState212p>

//

//

//------------------------------------------------------------------------



class GeneratedState212p : public Etat

{

    //----------------------------------------------------------------- PUBLIC

    

public:

    //----------------------------------------------------- Méthodes publiques

    // type Méthode ( liste de paramètres );

    // Mode d'emploi :

    //

    // Contrat :

    //

    bool Transition (Automate & automate, Symbole *s);
    Symbole* Reduction (vector<Symbole*> s) = 0;

    //-------------------------------------------- Constructeurs - destructeur

    GeneratedState212p ( const string name );

    // Mode d'emploi (constructeur de copie) :

    //

    // Contrat :

    //

    

    virtual ~GeneratedState212p ( );

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



//----------------------------------------- Types dépendants de <GeneratedState212p>



#endif // GENERATEDSTATE212P

