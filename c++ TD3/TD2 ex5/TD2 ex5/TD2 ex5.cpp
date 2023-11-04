#include <iostream>
using namespace std;

class Test {
public:
    static int tableau[];
public:
    static int division(int indice, int diviseur) {
        if (indice < 0 || indice >= 10) {
            throw out_of_range("Indice hors limites");
        }
        if (diviseur == 0) {
            throw runtime_error("Division par z�ro");
        }
        return tableau[indice] / diviseur;
    }
};

int Test::tableau[] = { 17, 12, 15, 38, 29, 157, 89, -22, 0, 5 };

int main() {
    int x, y;
    cout << "Entrez l'indice de l'entier � diviser : " << endl;
    cin >> x;
    cout << "Entrez le diviseur : " << endl;
    cin >> y;

    try {
        int resultat = Test::division(x, y);
        cout << "Le r�sultat de la division est : " << resultat << endl;
    }
    catch (const out_of_range& e) {
        cerr << "Erreur : " << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

    return 0;
}
