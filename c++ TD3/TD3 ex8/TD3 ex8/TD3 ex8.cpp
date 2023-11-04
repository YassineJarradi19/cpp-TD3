#include <iostream>

template <typename T>
T carre(const T& value) {
    return value * value;
}

int main() {
    int entier = 5;
    double reel = 3.5;
    float flottant = 2.5f;

    int carreEntier = carre(entier);
    double carreReel = carre(reel);
    float carreFlottant = carre(flottant);

    std::cout << "Carr� de " << entier << " : " << carreEntier << std::endl;
    std::cout << "Carr� de " << reel << " : " << carreReel << std::endl;
    std::cout << "Carr� de " << flottant << " : " << carreFlottant << std::endl;

    return 0;
}
