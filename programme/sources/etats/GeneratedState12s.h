

/*************************************************************************

 GeneratedState12s  -  description

 -------------------

 début                : 7/03/2016

 copyright            : (C) 2016 par TFavrot

 *************************************************************************/



//---------- Interface de la classe <GeneratedState12s> (fichier GeneratedState12s.h) ------

#if ! defined ( GENERATEDSTATE12S )

#define GENERATEDSTATE12S



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

// Rôle de la classe <GeneratedState12s>

//

//

//------------------------------------------------------------------------



class GeneratedState12s : public Etat

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

    GeneratedState12s ( const string name );

    // Mode d'emploi (constructeur de copie) :

    //

    // Contrat :

    //

    

    virtual ~GeneratedState12s ( );

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



//----------------------------------------- Types dépendants de <GeneratedState12s>



#endif // GENERATEDSTATE12S

