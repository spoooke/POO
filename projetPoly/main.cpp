#include "poly.hpp"
#include <vector>

int main() {
    std::vector<Figure*> figures;

    // Création des objets
    Triangle triangle(3.0, 4.0);
    Carre carre(2.0);
    Rectangle rectangle(3.0, 5.0);
    Cercle cercle(2.0);

    figures.push_back(&triangle);
    figures.push_back(&carre);
    figures.push_back(&rectangle);
    figures.push_back(&cercle);

    for (const auto& figure : figures) {
        figure->afficher();
        std::cout << "Périmètre : " << figure->perimetre() << std::endl;
        std::cout << "Aire : " << figure->aire() << std::endl;
    }

    return 0;
}
