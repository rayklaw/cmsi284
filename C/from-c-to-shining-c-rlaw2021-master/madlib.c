#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* madlib(char* template, char* adjective, char* noun, char* verb) {
    long resultSize = strlen(template) + strlen(adjective)+ strlen(noun) + strlen(verb);
    char* result = malloc(resultSize * sizeof(char));
    sprintf(result, template, adjective, noun, verb);
    free(result);
    return result;
}
