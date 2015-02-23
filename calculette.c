#include <iostream>
#include <cstdint>

using namespace std;
 
int main()
{
	int choix (0);

/// \param Choix pour la multiplication
/// \paramChoix pour l'addition
/// \paramChoix pour la soustraction
/// \param Choix pour la division
/// \param saisie du choix de l'operation

    cout << "Bonjour, quel operation souhaitez vous effectuer ?" << endl << endl;

                    cout << "Taper 1 pour une multiplication" << endl; 
                    cout << "Taper 2 pour une addition"       << endl; 
                    cout << "Taper 3 pour une soustraction"   << endl; 
                    cout << "Taper 4 pour une division"       << endl; 


    cin >> choix;
 
    switch(choix)
    {
/// \param Multiplication
        case 1 : 
            {
/// \param premier nombre
/// \param deuxieme nombre
                cout << "Choisissez 2 nombres a multiplier:" << endl;
                double nombresUtilisateur1(0), nombresUtilisateur2(0);
                cin >> nombresUtilisateur1; 
                cin >> nombresUtilisateur2; 

 
                double resultat(0);
/// \param operation de la multiplication
                resultat = nombresUtilisateur1 * nombresUtilisateur2; 
/// \param resultat de la multiplication
                cout << "le resultat de la multiplication est : " << resultat << endl; 
                break; 
 
            }
 
/// \param Addition
        case 2 : 
            {
/// \param premier nombre
/// \param deuxieme nombre
                cout << "Choisissez 2 nombres a additioner" << endl;
                double nombresUtilisateur1(0), nombresUtilisateur2(0);
                cin >> nombresUtilisateur1;
                cin >> nombresUtilisateur2; 
 
                double resultat(0);
/// \param operation de l'addition
                resultat = nombresUtilisateur1 + nombresUtilisateur2;
/// \param resultat de l'addition
                cout << "le resultat de l'addition est : " << resultat << endl;
                break;
 
            }
 
 
/// \param Soustraction
        case 3 :
            {
/// \param premier nombre
/// \param deuxieme nombre
                cout << "Choisissez 2 nombres a soustraire" << endl;
                double nombresUtilisateur1(0), nombresUtilisateur2(0);
                cin >> nombresUtilisateur1; 
                cin >> nombresUtilisateur2; 
 
                double resultat(0);
/// \param operation de la soustraction
                resultat = nombresUtilisateur1 - nombresUtilisateur2;
/// \param resultat de la soustraction 
                cout << "le resultat de la soustraction est : " << resultat << endl;
                break;
 
            }
 
 /// \param division
        case 4 : 
            {
/// \param premier nombre 
/// \param deuxieme nombre
                cout << "Choisissez 2 nombres a diviser" << endl;
                double nombresUtilisateur1(0), nombresUtilisateur2(0);
                cin >> nombresUtilisateur1; 
                cin >> nombresUtilisateur2; 
 
                double resultat(0);
/// \param operation de la division
                resultat = nombresUtilisateur1 / nombresUtilisateur2;
/// \param resultat de la division 
                cout << "le resultat de la division est : " << resultat << endl;
                break; 
            }
 
    }
 
 
    return 0;
}
