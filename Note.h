#ifndef NOTE_H
#define NOTE_H

#include <Arduino.h>

struct Note {
    uint16_t start;      // Temps de début en ms
    uint8_t digit;       // Digit activé (de 0 à 5 par exemple)
    uint8_t state;       // 1 = ON, 0 = OFF
    uint16_t frequency;  // Fréquence de la note (optionnel)
};

struct Melody {
    const char* name;       // Nom de la mélodie
    const Note* notes;      // Tableau des notes de la mélodie
    int length;             // Nombre de notes dans la mélodie
    uint8_t categoryIndex;  // Index de la catégorie (1-based)
};

#endif
