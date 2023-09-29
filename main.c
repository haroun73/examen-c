#include <stdio.h>
#include <stdbool.h>

// Structure 
struct Moteur {
    bool Demarrer;
    bool Utiliser;
};

// Fonction  démarrer 
void demarrerMoteur(struct Moteur* moteur) {
    if (moteur->Demarrer) {
        moteur->Utiliser = true;
        printf("Le moteur a été démarré.\n");
    }
    else {
        printf("Le moteur est déjà démarré.\n");
    }
}

// Fonction utiliser
void utiliserMoteur(struct Moteur* moteur) {
    if (moteur->Demarrer) {
        if (moteur->Utiliser) {
            moteur->Utiliser = true;
            printf("Le moteur est en utilisation.\n");
        }
        else {
            printf("Le moteur est déjà en utilisation.\n");
        }
    }
    else {
        printf("Le moteur n'est pas démarré. Veuillez le démarrer d'abord.\n");
    }
}

// Fonction  arrêter 
void arreterMoteur(struct Moteur* moteur) {
    if (moteur->Demarrer) {
        if (moteur->Utiliser) {
            moteur->Utiliser = false;
            printf("Le moteur a été arrêté.\n");
        }
        else {
            printf("Le moteur est déjà arrêté.\n");
        }
    }
    else {
        printf("Le moteur n'est pas démarré.\n");
    }
}

int main() {
    struct Moteur monMoteur;
    monMoteur.Utiliser = false;
    monMoteur.Utiliser = false;

    int choix;
    while (1) {
        printf("\nMenu :\n");
        printf("1. Démarrer le moteur\n");
        printf("2. Utiliser le moteur\n");
        printf("3. Arrêter le moteur\n");
        printf("4. Quitter l'application\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
        case 1:
            demarrerMoteur(&monMoteur);
            break;
        case 2:
            utiliserMoteur(&monMoteur);
            break;
        case 3:
            arreterMoteur(&monMoteur);
            break;
        case 4:
            printf("Quitter l'application.\n");
            return 0;
        default:
            printf("Choix non valide. Veuillez réessayer.\n");
        }
    }

    return 0;
}
