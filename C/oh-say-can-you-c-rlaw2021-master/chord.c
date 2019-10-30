#include <stdio.h>
#include <string.h>

char* keyboard[] = { "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("This program requires exactly one command line argument.\n");
        return 0;
    }
    int contains = 0;
    int index = 0;
    for (int i = 0; i < 12; i++) {
        if (strcmp(keyboard[i], argv[1]) == 0) {
            contains = 1;
            index = i;
        }
        if (contains == 0 && i == 11) {
            printf("No such key: %s\n", argv[1]);
            return 0;
        }
    }
    printf("%s: %s %s %s\n", keyboard[index], keyboard[index], keyboard[index + 4], keyboard[index + 7]);
    printf("%sm: %s %s %s\n", keyboard[index], keyboard[index], keyboard[index + 3], keyboard[index + 7]);
    printf("%s7: %s %s %s %s\n", keyboard[index], keyboard[index], keyboard[index + 4], keyboard[index + 7], keyboard[index + 10]);
    printf("%sdim7: %s %s %s %s\n", keyboard[index], keyboard[index], keyboard[index + 3], keyboard[index + 6], keyboard[index + 9]);
    return 0;
}
