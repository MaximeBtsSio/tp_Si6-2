#include <iostream>
 
using namespace std;
 
int main()
{
 
    cout << "Bonjour, quel operation souhaitez vous effectuer ?" << endl << endl;
 
                    cout << "Taper 1 pour une multiplication" << endl; // \ Choix pour la multiplication
                    cout << "Taper 2 pour une addition"       << endl; // \ Choix pour l'addition
                    cout << "Taper 3 pour une soustraction"   << endl; // \ Choix pour la soustraction
                    cout << "Taper 4 pour une division"       << endl; // \ Choix pour la division
    int choix (0);
    cin >> choix; //saisie du choix de l'operation
 
    switch(choix)
    {
        case 1 : // Multiplication
            {
                cout << "Choisissez 2 nombres a multiplier:" << endl;
                double nombresUtilisateur1(0), nombresUtilisateur2(0);
                cin >> nombresUtilisateur1; // premier nombre
                cin >> nombresUtilisateur2; // deuxieme nombre
 
                double resultat(0);
                resultat = nombresUtilisateur1 * nombresUtilisateur2; //operation de la multiplication
 
                cout << "le resultat de la multiplication est : " << resultat << endl; //resultat de la multiplication
                break;
 
            }
 
 
        case 2 : //Addition
            {
                cout << "Choisissez 2 nombres a additioner" << endl;
                double nombresUtilisateur1(0), nombresUtilisateur2(0);
                cin >> nombresUtilisateur1; // premier nombre
                cin >> nombresUtilisateur2; // deuxieme nombre
 
                double resultat(0);
                resultat = nombresUtilisateur1 + nombresUtilisateur2;//operation de l'addition
 
                cout << "le resultat de l'addition est : " << resultat << endl;//resultat de l'addition
                break;
 
            }
 
 
 
        case 3 ://Soustraction
            {
                cout << "Choisissez 2 nombres a soustraire" << endl;
                double nombresUtilisateur1(0), nombresUtilisateur2(0);
                cin >> nombresUtilisateur1; // premier nombre
                cin >> nombresUtilisateur2; // deuxieme nombre
 
                double resultat(0);
                resultat = nombresUtilisateur1 - nombresUtilisateur2;//operation de la soustraction
 
                cout << "le resultat de la soustraction est : " << resultat << endl;//resultat de la soustraction
                break;
 
            }
 
 
        case 4 : //division
            {
 
                cout << "Choisissez 2 nombres a diviser" << endl;
                double nombresUtilisateur1(0), nombresUtilisateur2(0);
                cin >> nombresUtilisateur1; // premier nombre
                cin >> nombresUtilisateur2; // deuxieme nombre
 
                double resultat(0);
                resultat = nombresUtilisateur1 / nombresUtilisateur2;//operation de la division
 
                cout << "le resultat de la division est : " << resultat << endl;//resultat de la division
                break;
            }
 
    }
 
 
    return 0;
}
