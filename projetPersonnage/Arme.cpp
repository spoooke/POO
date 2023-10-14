// Arme.cpp
#include "Arme.hpp"

Arme::Arme() : m_nom("Epée rouillée"), m_degats(10)
{
}

Arme::Arme(std::string nom, int degats) : m_nom(nom), m_degats(degats)
{
}

void Arme::changer(std::string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}

void Arme::afficher()
{
    std::cout << "Arme : " << m_nom << " (Dégâts : " << m_degats << ")" << std::endl;
}

int Arme::getDegats() const
{
    return m_degats;
}

std::string Arme::getNom() const
{
    return m_nom;
}
