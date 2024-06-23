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
    int e = 0;

    printf("Digite a string(max 50 caracteres): "); 
    fgets(string, TamMaxString, stdin);
    
    string[strcspn(string, "\n")] = 0;
    
    
    for(int i = 0; i < TamMaxString; i++){
        if(string[i] != ' '){
            string2[e] = string[i];
            e = e +1;
        }
    }
    
    printf("%s\n", string);
    PRINTF("%s", string2);
    
    return 0;
}