#include <stdio.h>
#include <string.h>

#define TamMaxString 50

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
    
    tamanhostring = strlen(string);
    
    int e = tamanhostring;

    printf("%d\n", tamanhostring);

    for(int i = 0; i < tamanhostring; i++){
            string2[e-1] = string[i];
            e = e -1;
    }
    
    for(int i = 0; i < tamanhostring; i++){
        if(string[i] != string2[i]){
            PRINTF("não\n");
            return 0;
        }
    }
    
    
    printf("%s\n", string);
    printf("%s\n", string2);
    PRINTF("sim\n");
    
    return 0;
}