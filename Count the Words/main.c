#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 256

int main()
{

    char string_line[MAX_LENGTH + 1];
    fgets(string_line, MAX_LENGTH + 1, stdin);
    int line_length = 0;
    for(int i = 0; string_line[i] != '\0'; ++i){
        line_length = i;
    }
    int number_of_words = 0, flag = 0;
    for(int i = 0; i < line_length; ++i){
        if(string_line[i] != 32 && string_line[i] != '\t' && flag == 0){
            number_of_words++;
            flag = 1;
        }else if(string_line[i] == 32 && flag == 1 || string_line[i] == '\t' && flag == 1){
            flag = 0;
        }
    }
    printf("%d words", number_of_words);

    return 0;
}
