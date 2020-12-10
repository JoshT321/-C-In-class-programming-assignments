#include <stdio.h>
#include <stdlib.h>

#define N 15

int switcher(int *newGrades){
    int *i;
    for(i = newGrades;i< newGrades + N;i++){
        if(*i < 70 && *i > 59){
            *i = *i + 10;
        }
    }
}


int main()
{
   int finalExams[15] = {90,82,65,79,67,82,94,64,88,78,92,61,96,83,74};
   int *newGrades;
   int *i;
   newGrades = finalExams;
   switcher(newGrades);
   for(i = newGrades; i <newGrades + N; i++){
    printf("%d\n",*i);
   }
   return 0;
}
