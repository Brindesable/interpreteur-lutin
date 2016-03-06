/*************************************************************************
	  Main
 -------------------
 début                : 05/03/2016
 copyright            : (C) 2016 par kollivier
 *************************************************************************/

//---------- Réalisation du main (fichier main.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;
//------------------------------------------------------ Include personnel
#include "lutin-reader.h"
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

int main(int argc, char *argv[])
{
	bool paramP(false), paramA(false), paramE(false), paramO(false);
	string fileName("");
	ifstream fileReader;

	if(argc == 1)
	{	// Si il n'y a aucun argument
		cerr << "Erreur, veuillez specifier des arguments" << endl
			<< "  Utilisation :" << endl
			<< "    ../lut [-p] [-a] [-e] [-o] source.lt" << endl
			<< "      [-p] affiche le code source reconnu" << endl
			<< "      [-a] analyse le programme de maniere statique" << endl
			<< "      [-e] execute interactivement le programme" << endl
			<< "      [-o] optimise les expressions et instructions" << endl;

		exit (EXIT_FAILURE);
	}
	else
	{	for(int i = 1 ; i < argc; i++)
		{	if(argv[i][0] == '-')
			{   // Si la parametre est un argument
				if(argv[i][1] == 'p' && strlen(argv[i]) == 2)
				{   paramP = true;
				}
				else if(argv[i][1] == 'a' && strlen(argv[i]) == 2)
				{   paramA = true;
				}
				else if(argv[i][1] == 'e' && strlen(argv[i]) == 2)
				{   paramE = true;
				}
				else if(argv[i][1] == 'o' && strlen(argv[i]) == 2)
				{   paramO = true;
				}
				else
				{   cerr << "Erreur, parametre inconnu : " << argv[i] << endl;
					exit (EXIT_FAILURE);
				}
			}
			else
			{	if(fileName.size() == 0)
				{	fileName = argv[i];
				}
				else
				{	cerr << "Erreur, fichier renseigne plus d'une fois" << endl;
                    exit (EXIT_FAILURE);
				}
			}
		}
	}

	fileReader.open(fileName.c_str());
	if (fileReader.is_open())
	{	// SI le fichier existe

		LutinReader lutinReader(fileReader);
		lutinReader.Construire();

		if(paramA)
		{	lutinReader.AnalyseStatique();
		}
		if(paramO)
		{	lutinReader.Transformation();
		}
		if(paramP)
		{	lutinReader.Affichage();
		}
		if(paramE)
		{	lutinReader.Execution();
		}

		fileReader.close();
	}
	else
	{	cerr << "Erreur a l'ouverture du fichier " << fileName << endl;
		exit (EXIT_FAILURE);
	}

	return 0;
}
