#include <stdio.h>
#include <stdbool.h>

// Structure 
struct Moteur {
    bool Demarrer;
    bool Utiliser;
};

// Fonction  d�marrer 
void demarrerMoteur(struct Moteur* moteur) {
    if (moteur->Demarrer) {
        moteur->Utiliser = true;
        printf("Le moteur a �t� d�marr�.\n");
    }
    else {
        printf("Le moteur est d�j� d�marr�.\n");
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
            printf("Le moteur est d�j� en utilisation.\n");
        }
    }
    else {
        printf("Le moteur n'est pas d�marr�. Veuillez le d�marrer d'abord.\n");
    }
}

// Fonction  arr�ter 
void arreterMoteur(struct Moteur* moteur) {
    if (moteur->Demarrer) {
        if (moteur->Utiliser) {
            moteur->Utiliser = false;
            printf("Le moteur a �t� arr�t�.\n");
        }
        else {
            printf("Le moteur est d�j� arr�t�.\n");
        }
    }
    else {
        printf("Le moteur n'est pas d�marr�.\n");
    }
}

int main() {
    struct Moteur monMoteur;
    monMoteur.Utiliser = false;
    monMoteur.Utiliser = false;

    int choix;
    while (1) {
        printf("\nMenu :\n");
        printf("1. D�marrer le moteur\n");
        printf("2. Utiliser le moteur\n");
        printf("3. Arr�ter le moteur\n");
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
            printf("Choix non valide. Veuillez r�essayer.\n");
        }
    }

    return 0;
}
