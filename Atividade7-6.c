#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TamMaxString 1000

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

int main()
{
    char string[TamMaxString], string2[TamMaxString];
    int tamanhostring;

    printf("Digite a string(max 50 caracteres): "); 
    fgets(string, TamMaxString, stdin);
    
    string[strcspn(string, "\n")] = 0;

    for(int i =0; i< TamMaxString; i++){
        string[i] = tolower(string[i]);
    }
    
    

    int i = 0, c = 0; 
    for(; i < strlen(string); i++)
    {
    if (isalnum(string[i]))
    {
        string2[c] = string[i];
        c++;
    }
    }string2[c] = '\0';

    tamanhostring = strlen(string2);
    
    int e = tamanhostring;

    printf("%d\n", tamanhostring);




    for(int i = 0; i < tamanhostring; i++){
            string[e-1] = string2[i];
            e = e -1;
    }
    
    for(int i = 0; i < tamanhostring; i++){
        if(string2[i] != string[i]){
            printf("%s\n", string2);
            printf("%s\n", string);
            printf("não\n");
            return 0;
        }
    }
    
    
    printf("%s\n", string2);
    printf("%s\n", string);
    printf("sim\n");
    
    return 0;
}