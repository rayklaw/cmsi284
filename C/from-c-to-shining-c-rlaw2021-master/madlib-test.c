#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "madlib.h"

int main() {
    char* template = "%s %s %s";
    char* adj = "yes";
    char* noun = "no";
    char* verb = "maybe";
    char* message = madlib(template, adj, noun, verb);
    assert(
           strcmp(message, "yes no maybe") == 0
           );
    printf("%s\n", madlib("%s %s %s", "yes", "no", "maybe"));
    
    template = "The %s %s %s through the wall";
    adj = "gigantic";
    noun = "mango";
    verb = "bursted";
    message = madlib(template, adj, noun, verb);
    assert(
           strcmp(message, "The gigantic mango bursted through the wall") == 0
           );
    printf("%s\n", madlib("The %s %s %s through the wall", "gigantic", "mango",
                          "bursted"));
}
