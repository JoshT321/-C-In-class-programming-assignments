#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    FILE *usDates;
    FILE *euroDates;
    char month[50];
    char day[5];
    char year[10];
    int num1 = 0;
    int num2 = 0;
    int rewinder = 0;


    char* Dates = "usDates.txt";
    FILE* usDates = fopen(Dates, "w");
    char* eDates = "EuroDates.txt";
    FILE* euroDates = fopen(eDates, "w");

    if(argc != 2){
        printf("Could not find file.");
        return 1;
    }

    if ((fp = fopen(argv[1], "r"))== NULL){
        printf("%s can't be opened", argv[1]);
        return 1;
    }
while(rewinder != 2){
    while((fscanf(fp,"%s%s%s",month,day,year))!= EOF){
            num1 = atoi(day)% 100;
            num2 = atoi(year)% 100;
           if(strcmp(month, "January") == 0){
                if(rewinder == 0){
                fprintf(usDates, "1/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/1/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "February") == 0){
                if(rewinder == 0){
                fprintf(usDates, "2/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/2/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "March") == 0){
                if(rewinder == 0){
                fprintf(usDates, "3/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/3/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "April") == 0){
                if(rewinder == 0){
                fprintf(usDates, "4/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/4/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "May") == 0){
                if(rewinder == 0){
                fprintf(usDates, "5/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/5/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "June") == 0){
                if(rewinder == 0){
                fprintf(usDates, "6/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/6/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "July") == 0){
                if(rewinder == 0){
                fprintf(usDates, "7/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/7/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "August") == 0){
                if(rewinder == 0){
                fprintf(usDates, "8/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/8/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "September") == 0){
                if(rewinder == 0){
                fprintf(usDates, "9/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/9/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "October") == 0){
                if(rewinder == 0){
                fprintf(usDates, "10/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/10/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "November") == 0){
                if(rewinder == 0){
                fprintf(usDates, "11/%d/%d\n", num1,num2);
                }
                if(rewinder == 1){
                    fprintf(euroDates, "%d/11/%d\n", num1,num2);
                 }
            }
            if(strcmp(month, "December") == 0){
                if(rewinder == 0){
                fprintf(usDates, "12/%d/%d\n", num1,num2);
            }
            if(rewinder == 1){
                    fprintf(euroDates, "%d/12/%d\n", num1,num2);
                 }
            }
        }
    rewind(fp);
    rewinder++;
}
    fclose(fp);
    fclose(usDates);
    fclose(euroDates);
    return 0;
}
