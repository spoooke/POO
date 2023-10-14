#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>

class Fraction {
private:
    int m_numerateur;
    int m_denominateur;

public:
    Fraction(int num = 0, int den = 1);

    friend std::ostream& operator<<(std::ostream& flux, const Fraction& fraction);

    Fraction operator*(const Fraction& autre) const;

    bool operator==(const Fraction& autre) const;

    bool estEgal(const Fraction& autre) const;
};

#endif
