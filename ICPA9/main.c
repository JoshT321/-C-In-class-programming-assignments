#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iceCream[2][4] = {{11,15,22,7},{12,9,16,21}};
    int add[3];
    int x = 0;
    int compare = 0;
    char letter;

    for (x; x < 4; x++){
       add[x] = iceCream[0][x] + iceCream[1][x];
       if(add[x] > compare){
        compare = add[x];
        if(x == 0){
            letter = 'A';
        }
        if (x == 1){
            letter = 'B';
        }
        if (x == 2){
            letter = 'C';
        }
        else if (x == 3){
            letter = 'D';
        }
       }
    }
    printf("The most sales were $%i which was made on corner %c", compare, letter);
    return 0;
}
