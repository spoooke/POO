#include "poly.hpp"
#include <iostream>
#include <cmath>

// Implémentation des constructeurs
Triangle::Triangle(double base, double hauteur) : m_base(base), m_hauteur(hauteur) {}
Carre::Carre(double cote) : m_cote(cote) {}
Rectangle::Rectangle(double longueur, double largeur) : m_longueur(longueur), m_largeur(largeur) {}
Cercle::Cercle(double rayon) : m_rayon(rayon) {}

// Implémentation des méthodes
void Triangle::afficher() const {
    std::cout << "Je suis un triangle." << std::endl;
}

double Triangle::perimetre() const {
    return m_base + (2 * sqrt((m_hauteur * m_hauteur) + (0.25 * m_base * m_base)));
}

double Triangle::aire() const {
    return (0.5 * m_base * m_hauteur);
}

void Carre::afficher() const {
    std::cout << "Je suis un carré." << std::endl;
}

double Carre::perimetre() const {
    return 4 * m_cote;
}

double Carre::aire() const {
    return m_cote * m_cote;
}

void Rectangle::afficher() const {
    std::cout << "Je suis un rectangle." << std::endl;
}

double Rectangle::perimetre() const {
    return 2 * (m_longueur + m_largeur);
}

double Rectangle::aire() const {
    return m_longueur * m_largeur;
}

void Cercle::afficher() const {
    std::cout << "Je suis un cercle." << std::endl;
}

double Cercle::perimetre() const {
    return 2 * M_PI * m_rayon;
}

double Cercle::aire() const {
    return M_PI * m_rayon * m_rayon;
}
