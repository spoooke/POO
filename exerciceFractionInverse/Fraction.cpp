#include "Fraction.hpp"

Fraction::Fraction(int num, int den) : m_numerateur(num), m_denominateur(den) {
    // Simplifier la fraction ici si nécessaire
}

std::ostream& operator<<(std::ostream& flux, const Fraction& fraction) {
    if (fraction.m_denominateur == 1) {
        flux << fraction.m_numerateur;
    } else {
        flux << fraction.m_numerateur << "/" << fraction.m_denominateur;
    }
    return flux;
}

Fraction Fraction::operator*(const Fraction& autre) const {
    Fraction resultat;
    resultat.m_numerateur = m_numerateur * autre.m_numerateur;
    resultat.m_denominateur = m_denominateur * autre.m_denominateur;
    return resultat;
}

bool Fraction::operator==(const Fraction& autre) const {
    return estEgal(autre);
}

bool Fraction::estEgal(const Fraction& autre) const {
    return m_numerateur == autre.m_numerateur && m_denominateur == autre.m_denominateur;
}
