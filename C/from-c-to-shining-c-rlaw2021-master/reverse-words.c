#include <string.h>
#include <stdio.h>
#include <ctype.h>

#include "reverse-range-in-place.h"

void reverse_words(char* string) {
    int stringLength = strlen(string);
    reverse_range_in_place(string, 0, stringLength - 1);
    int index = 0;
    for (int i = 0; i < stringLength; i++) {
        if (string[i] == ' ') {
            reverse_range_in_place(string, index, i - 1);
            index = i + 1;
        } 
    }
    reverse_range_in_place(string, index, stringLength - 1);
}
