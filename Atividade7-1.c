#include <stdio.h>

#define TamMaxString 50


int main()
{
    char string[TamMaxString];
    int contagem = 0;

    printf("Digite a string(max 50 caracteres): "); 
    fgets(string, TamMaxString, stdin);
    
    for(int i = 0; i < TamMaxString; i++){
        if(string[i] == ' '){
            contagem = contagem + 1;
        }
    }
    printf("%s \n", string);
    PRINTF("%d", contagem);
    
    return 0;
}
