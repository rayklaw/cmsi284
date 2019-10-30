#include <stdio.h>
#include <string.h>

char* keyboard[] = { "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
char* intervals[] = {"minor second", "major second", "minor third", "major third", "perfect fourth", "tritone", "perfect fifth", "minor sixth", "major sixth", "minor seventh", "major seventh", "perfect octave"};

int main(int argc, char** argv) {
    if (argc != 3) {
        printf("This program requires exactly two command line arguments.\n");
        return 0;
    }
    int contains = 0;
    int index1 = 0;
    int index2 = 0;
    for (int i = 0; i < 12; i++) {
        if (strcmp(keyboard[i], argv[1] ) == 0) {
            contains = 1;
            index1 = i;
        }
        if (contains == 0 && i == 11) {
            printf("No such key: %s\n", argv[1]);
            return 0;
        }
    }
    contains = 0;
    for (int i = index1 + 1; i < index1 + 13 ; i ++) {
        if (strcmp(keyboard[i], argv[2] ) == 0) {
            contains = 1;
            index2 = i;
        }
        if (contains == 0 && i == index1 + 12) {
            printf("No such key: %s\n", argv[2]);
            return 0;
        }
    }
    int notesBetween = index2 - index1;
    printf("%s to %s is a %s.\n", argv[1], argv[2], intervals[notesBetween - 1]);
    return 0;
}
