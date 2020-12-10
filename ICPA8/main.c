#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    char number[100];
    int i = 0;
    int x = 0;

    printf("Enter a message: ");

    while(ch != '\n'){
        ch = getchar();
        number[i] = ch;
        i++;
        }
    number[i+1] = ' ';
    for(x = 0; x <= i+1; x++){
        if (number[x] == '$'){
            while(number[x] != ' '){
                printf("%c", number[x]);
                x++;
            }
            printf("\n");
            }
    }
}
