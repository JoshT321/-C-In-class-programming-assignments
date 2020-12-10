/*
 * ICPA #17: the Gas Station
 */

#include <stdio.h>

 int tank1 = 100;
 int tank2 = 75;
 int tank3 = 50;
 int tank4 = 150;

 int carArrived(FILE *carData) {

     int tankNum;

     if (fscanf(carData,"%d",&tankNum) != EOF)
        return(tankNum);
     else {
        printf("Data all done\n");
        return(-1);
     }
 }

void refillRequest(int tankNum) {
    if(tankNum == 1){
        tank1 = 100;
    }
    if(tankNum == 2){
        tank2 = 75;
    }
    if(tankNum == 3){
        tank3 = 50;
    }
    if(tankNum == 4){
        tank4 = 150;
    }
}

void pump(int pumpNumber){

if(pumpNumber == 1){
        printf("Customer arrived at pump 1\n");
        tank1 -= 10;
        if (tank1 <= 20){
            refillRequest(pumpNumber);
        }
    }
    else if(pumpNumber == 2){
        printf("Customer arrived at pump 2\n");
        tank2 -= 10;
        if (tank2 <= 20){
            refillRequest(pumpNumber);
        }
    }
    else if(pumpNumber == 3){
        printf("Customer arrived at pump 3\n");
        tank3 -= 10;
        if (tank3 <= 20){
            refillRequest(pumpNumber);
        }
    }
    else if(pumpNumber == 4){
        printf("Customer arrived at pump 4\n");
        tank4 -= 10;
        if (tank4 <= 20){
            refillRequest(pumpNumber);
        }
    }
    if(pumpNumber != -1){
    printf("Tank status:\n 1: %d\n 2: %d\n 3: %d\n 4: %d\n\n", tank1,tank2,tank3,tank4);
    }
}


int main()
{
    FILE *dataFile;
    int pumpNumber = 0;

    dataFile=fopen("Lecture 17 - ICPA #17 Data.txt", "r");

    if ( dataFile == NULL )
    {
        printf( "Could not open file test.c" ) ;
        return 1;
    }
    for(;;){
    pumpNumber = carArrived(dataFile);
    pump(pumpNumber);
    if(pumpNumber == -1){
        break;
            }
    }

    fclose(dataFile);
    return 0;
}
