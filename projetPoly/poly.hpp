#ifndef POLY_HPP
#define POLY_HPP

#include <iostream>
#include <vector>

class Figure {
public:
    virtual void afficher() const = 0;
    virtual double perimetre() const = 0;
    virtual double aire() const = 0;
    virtual ~Figure() = default;  // Destructeur virtuel
};

class Triangle : public Figure {
private:
    double m_base;
    double m_hauteur;

public:
    Triangle(double base, double hauteur);
    void afficher() const override;
    double perimetre() const override;
    double aire() const override;
};

class Carre : public Figure {
private:
    double m_cote;

public:
    Carre(double cote);
    void afficher() const override;
    double perimetre() const override;
    double aire() const override;
};

class Rectangle : public Figure {
private:
    double m_longueur;
    double m_largeur;

public:
    Rectangle(double longueur, double largeur);
    void afficher() const override;
    double perimetre() const override;
    double aire() const override;
};

class Cercle : public Figure {
private:
    double m_rayon;

public:
    Cercle(double rayon);
    void afficher() const override;
    double perimetre() const override;
    double aire() const override;
};

#endif
