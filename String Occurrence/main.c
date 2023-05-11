#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 256

int main()
{

    char string_line[MAX_LENGTH + 1];
    char string_word[MAX_LENGTH + 1];
    fgets(string_line, MAX_LENGTH + 1, stdin);
    fgets(string_word, MAX_LENGTH + 1, stdin);
    int line_length = 0, word_length = 0;
    for(int i = 0; string_line[i] != '\0'; ++i){
        line_length = i;
    }
    for(int j = 0; string_word[j] != '\0'; ++j){
        word_length = j;
    }
    int occurences = 0;
    for(int i = 0; i < line_length; ++i){
        int j = 0, flag = 1;
        if(string_line[i] == string_word[j]){
            for(j = 1; j < word_length; ++j){
                if(string_line[i + j] != string_word[j]){
                    flag = 0;
                }
            }
            if(flag){
                occurences++;
                printf("Occurrence at index %d", i);
                printf("\n");
            }
        }
    }
    printf("Total number of occurrences = %d", occurences);

    return 0;
}
