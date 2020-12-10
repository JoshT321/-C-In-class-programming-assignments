#include <stdio.h>
#include <stdlib.h>
struct courseInfo {
    int classNumber;
    char className[150];
    int credits;
    char teacherName[100];
    };

int main(){
    struct courseInfo course[100];
    char courses;
    int add = 1;
    int index = 0;
    int i = 0;

    while (add == 1) {
        printf("do you want to add or stop adding course info? (a/s): ");
        scanf(" %c",&courses);

     if (courses == 'a') {
        printf("Enter the class number: ");
        scanf("%i",&course[index].classNumber);
        printf("Enter the class name: ");
        scanf("%s",course[index].className);
        printf("Enter the number of credits: ");
        scanf("%d",&course[index].credits);
        printf("Enter the teacher name: ");
        scanf("%s",course[index].teacherName);

        index++;
        }

    if(courses == 's'){
        add = 0;
        printf("Here are all the loaded courses: ");
        for(i; i < index; i++){
        printf("\nCourse %i: \n", i + 1);
        printf("Class number: %i\n",course[i].classNumber);
        printf("Class name: %s\n",course[i].className);
        printf("Credits: %i\n",course[i].credits);
        printf("Teacher name: %s\n",course[i].teacherName);
            }
        }
    }
}
