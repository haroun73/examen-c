#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

class MachineALaver {
public:
    MachineALaver(const std::string& samsung) : modele(samsung), enMarche(false) {}

    void demarrer() {
        if (enMarche) {
            std::cout << modele << " demarre.\n";
            enMarche = true;
        }
        else {
            std::cout << modele << " est déja en marche.\n";
        }
    }

    void arreter() {
        if (enMarche) {
            std::cout << modele << " s'arrete.\n";
            enMarche = false;
        }
        else {
            std::cout << modele << " est déja arr�t�e.\n";
        }
    }

    bool estEnMarche() const {
        return enMarche;
    }

private:
    std::string modele;
    bool enMarche;
};

class ApplicationMachineALaver {
public:
    void lancer() {
        std::cout << "Bienvenue dans l'application pour utilisrer une  machine a laver!\n";

        MachineALaver machine("Machine A");
        MachineALaver autreMachine("Machine B");

        while (true) {
            afficherMenu();
            int choix;
            std::cin >> choix;

            switch (choix) {
            case 1:
                machine.demarrer();
                break;
            case 2:
                machine.arreter();
                break;
            case 3:
                autreMachine.demarrer();
                break;
            case 4:
                autreMachine.arreter();
                break;
            case 5:
                quitter();
                return;
            default:
                std::cout << "Choix invalide. Reessayez.\n";
            }
        }
    }

private:
    void afficherMenu() {
        std::cout << "\nMenu :\n";
        std::cout << "1. Demarrer Machine A\n";
        std::cout << "2. Arreter Machine A\n";
        std::cout << "3. Demarrer Machine B\n";
        std::cout << "4. Arreter Machine B\n";
        std::cout << "5. Quitter\n";
        std::cout << "Choisissez une option : ";
    }

    void quitter() {
        std::cout << "Fermeture de l'application.\n";
    }
};

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    ApplicationMachineALaver app;
    app.lancer();

    return 0;
}
