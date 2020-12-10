#include <stdio.h>
#include <stdlib.h>

void Palindrome(){
    char butt = true;
    char pali[1000];
    int isItPali = 1;
    printf("Please enter a number to see if its a palindrome: ");
    scanf("%s", pali);
    int backwards = strlen(pali)-1;
    int forwards = 0;

    while(backwards > forwards){
        if (pali[forwards] != pali[backwards]){
            butt = false;
        }
        forwards++;
        backwards--;
    }
    if(butt){
        printf("%s is a palindrome", pali);
    }
    else
        printf("Not a palindrome");

}

int main()
{
Palindrome();
return 0;
}
