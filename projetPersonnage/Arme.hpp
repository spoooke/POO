// Arme.hpp
#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme
{
public:
    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher();
    int getDegats() const;
    std::string getNom() const; // Ajout de la méthode getNom.
private:
    std::string m_nom;
    int m_degats;
};

#endif
