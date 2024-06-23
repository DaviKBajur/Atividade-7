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
    char string[TamMaxString];
    int contagem = 0;
    
    
    printf("Digite a string(max 50 caracteres): "); 
    fgets(string, TamMaxString, stdin);


    string[strcspn(string, "\n")] = 0;
    
    for(int i = 0; i < TamMaxString; i++){
        if(string[i] == 'a' || string[i] == 'e' ||string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            contagem = contagem + 1;
        }
        if(string[i] == 'A' || string[i] == 'E' ||string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
            contagem = contagem + 1;
        }
    }
    printf("A string : %s \nTem: ", string);
    PRINTF("%d", contagem);
    printf(" vogais\n");

    return 0;
}