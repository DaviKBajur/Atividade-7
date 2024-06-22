#include <stdio.h>

#define TamMaxString 50


int main()
{
    char string[TamMaxString];
    int contagem = 0;
    
    fgets(string, TamMaxString, stdin);
    
    for(int i = 0; i < TamMaxString; i++){
        if(string[i] == ' '){
            contagem = contagem + 1;
        }
    }
    printf("%s \n", string);
    printf("%d", contagem);
    
    return 0;
}