#include <stdio.h>
#include <stdlib.h>

int main(){

    int moneyWithdrawl;

    printf("Enter a dollar amount: ");
    scanf("%d", &moneyWithdrawl);

    if(moneyWithdrawl > 199){
       moneyWithdrawl = moneyWithdrawl - 100;
        printf("$100 bill \n");
    }
    if(moneyWithdrawl > 99){
       moneyWithdrawl =  moneyWithdrawl - 100;
        printf("$100 bill \n");
    }
    if(moneyWithdrawl > 49){
        moneyWithdrawl = moneyWithdrawl - 50;
        printf("$50 bill \n");
    }
    if(moneyWithdrawl > 19){
        moneyWithdrawl = moneyWithdrawl - 20;
        printf("$20 bill \n");
    }
     if(moneyWithdrawl > 19){
        moneyWithdrawl = moneyWithdrawl - 20;
        printf("$20 bill \n");
    }
     if(moneyWithdrawl > 9){
        moneyWithdrawl = moneyWithdrawl - 10;
        printf("$10 bill \n");
    }
    if(moneyWithdrawl > 4){
        moneyWithdrawl = moneyWithdrawl - 5;
        printf("$5 bill \n");
    }
    if(moneyWithdrawl > 0){
        moneyWithdrawl = moneyWithdrawl - 1;
        printf("$1 bill \n");
    }
    if(moneyWithdrawl > 0){
        moneyWithdrawl = moneyWithdrawl - 1;
        printf("$1 bill \n");
    }
    if(moneyWithdrawl > 0){
        moneyWithdrawl = moneyWithdrawl - 1;
        printf("$1 bill \n");
    }
    if(moneyWithdrawl > 0){
        moneyWithdrawl = moneyWithdrawl - 1;
        printf("$1 bill \n");
    }

    return 0;
}
