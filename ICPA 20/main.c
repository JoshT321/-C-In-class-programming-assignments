#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char *makeCounter(int *countHolder, char *downCount, char *upCount, bool flag){
    int i = 10;
    int j = 0;
    if(flag == true){
        downCount = "Count Down";
            for(i; i >= 0; i--){
            countHolder[i] = i;
        }
        return downCount;
    }
    if(flag == false){
        upCount = "Count Up";
        for(j; j <= 10; j++){
            countHolder[j] = j;
        }
        return upCount;
    }
}

int main()
{
int counter[11] = {0,0,0,0,0,0,0,0,0,0};
int *countHolder;
char down[15];
char up[15];
char *downCount;
char *upCount;
bool upOrDown;
int zeroOrOne;
int i = 10;
int j = 0;


countHolder = counter;
downCount = down;
upCount = up;

printf("Would you like to count up or count down? 0 for up and 1 for down\n");
scanf("%d", &zeroOrOne);
if(zeroOrOne == 0){
    upOrDown = false;
    upCount = makeCounter(countHolder,downCount,upCount,upOrDown);
    for(j; j <= 10; j++){
    printf("%d\n", counter[j]);
    }
printf("%s", upCount);
}

else{
    upOrDown = true;
    downCount = makeCounter(countHolder,downCount,upCount,upOrDown);
    for(i; i >= 0; i--){
    printf("%d\n", counter[i]);
    }
printf("%s", downCount);
}


return 0;
}
