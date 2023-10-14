#include "Personnage.hpp"
#include <iostream>

using namespace std;

Personnage::Personnage(const std::string& nom) : m_nom(nom), m_vie(100), m_mana(100)
{
}

Personnage::Personnage(const std::string& nom, string nomArme, int degatsArme) : m_nom(nom), m_vie(100), m_mana(100), m_arme(nomArme, degatsArme)
{
}

Personnage::~Personnage()
{
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_arme.getDegats());
    cout << m_nom << " attaque " << cible.m_nom << " avec " << m_arme.getNom() << " et inflige " << m_arme.getDegats() << " points de dégâts." << endl;
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100)
    {
        m_vie = 100;
    }
    cout << m_nom << " boit une potion qui lui redonne " << quantitePotion << " points de vie." << endl;
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
    cout << m_nom << " change d'arme pour " << nomNouvelleArme << " (Dégâts : " << degatsNouvelleArme << ")." << endl;
}

bool Personnage::estVivant()
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Personnage::afficherEtat()
{
    cout << m_nom << endl;
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme.afficher();
}

std::string Personnage::getNom() const
{
    return m_nom;
}
