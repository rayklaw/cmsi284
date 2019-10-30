#include <assert.h>
#include <string.h>
#include <stdio.h>

#include "reverse-words.h"
#include "reverse-range-in-place.h"

int main() {
    char* string = "yes no maybe";
    reverse_words(string);
    assert(
        strcmp(string, "maybe no yes") == 0
    );
    
    string = "Hello, my friends!";
    reverse_words(string);
    assert(
           strcmp(string, "friends! my Hello,") == 0
    );
    
    string = "   ! ";
    reverse_words(string);
    assert(
           strcmp(string, " !   ") == 0
           );
    
    string = "123!321";
    reverse_words(string);
    assert(
           strcmp(string, "123!321") == 0
           );
    
    string = "   send      help";
    reverse_words(string);
    assert(
           strcmp(string, "help      send   ") == 0
           );
    
    string = "";
    reverse_words(string);
    assert(
           strcmp(string, "") == 0
           );

    return 0;
}
