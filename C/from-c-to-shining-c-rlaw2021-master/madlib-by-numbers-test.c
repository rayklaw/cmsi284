#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#include "madlib-by-numbers.h"

int main() {
    char* template = "0 1 2";
    int wordCount = 3;
    char* words[] = {"haha", "hehe", "hoho"};
    char* message = madlib_by_numbers(template, wordCount, words);
    assert(
           strcmp(message, "haha hehe hoho") == 0
           );
    
    strcpy(message, "");
    template = "0";
    wordCount = 3;
    char* words1[] = {"no"};
    message = madlib_by_numbers(template, wordCount, words1);
    assert(
           strcmp(message, "no") == 0
           );
    
    strcpy(message, "");
    template = "the 0 1 in 2 the and 3 and 0";
    wordCount = 3;
    char* words2[] = {"turnip", "screamed", "hallway"};
    message = madlib_by_numbers(template, wordCount, words2);
    assert(
           strcmp(message, "the turnip screamed in hallway the and 3 and turnip") == 0
           );
    
    strcpy(message, "");
    template = "0 and 1 and 2 and 3 and 4 and 5 and 6 and 7 and 8 and 9";
    wordCount = 10;
    char* words3[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    message = madlib_by_numbers(template, wordCount, words3);
    assert(
           strcmp(message, "zero and one and two and three and four and five and six and seven and eight and nine") == 0
           );
    
    strcpy(message, "");
    template = "0 12";
    wordCount = 3;
    char* words4[] = {"zero", "one", "two"};
    message = madlib_by_numbers(template, wordCount, words4);
    assert(
           strcmp(message, "zero onetwo") == 0
           );
    
    strcpy(message, "");
    template = "0 1 2 3 4 5 6 7 8 9 10";
    wordCount = 11;
    char* words5[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    message = madlib_by_numbers(template, wordCount, words5);
    assert(
           strcmp(message, "") == 0
           );
    
    return 0;
}
