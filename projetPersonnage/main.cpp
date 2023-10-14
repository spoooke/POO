#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

int main()
{
    // Création des personnages
    Personnage david("David"), goliath("Goliath"), thirdCharacter("Moise");

    // Au combat !
    for (int round = 1; round <= 3; round++) {
        cout << "Round " << round << endl;
        goliath.attaquer(david);
        david.boirePotionDeVie(20);
        goliath.attaquer(david);
        david.attaquer(goliath);
        goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);

        // Afficher l'état des personnages après chaque round
        cout << "David" << endl;
        david.afficherEtat();
        cout << endl << "Goliath" << endl;
        goliath.afficherEtat();
        cout << endl << "Moise" << endl;
        thirdCharacter.afficherEtat();
    }

    return 0;
}

// g++ -o Projet_Personnage  Main.cpp Personnage.cpp Arme.cpp