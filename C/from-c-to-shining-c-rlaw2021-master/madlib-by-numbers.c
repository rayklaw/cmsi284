#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* madlib_by_numbers(char* template, int word_count, char* words[]) {
    if (word_count > 10) {
        return "";
    }
    long charCount = 0;
    for (int i = 0; i < strlen(template); i++) {
        if (isdigit(template[i]) && template[i] - '0' < word_count) {
            charCount += strlen(words[template[i] - '0']);
        } else {
            charCount ++;
        }
    }
    char* result = malloc(charCount * sizeof(char));
    int counter = 0;
    for (int i = 0; i < strlen(template); i++) {
        if (isdigit(template[i]) && template[i] - '0' < word_count && !isalpha(template[i]) && !isspace(template[i])) {
            strcat(&result[counter], words[template[i] - '0']);
            counter += strlen(words[template[i] - '0']);
        } else {
            result[counter] = template[i];
            counter ++;
        }
    }
    free(result);
    return result;
}
