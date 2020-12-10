/*
 * ICPA #18: The Secure Array
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int petersArray[10] = {100,200,300,400,500,600,700,800,900,1000};
    int petersArraySum = 0;
    int loop = 0;
    int *one = &petersArray[2];
    int *two = &petersArray[5];
    int *three = &petersArray[8];

    printf("Please enter your first number: ");
    scanf("%d", one);
    printf("Please enter your second number: ");
    scanf("%d", two);
    printf("Please enter your third number: ");
    scanf("%d", three);

    printf("Peter's Array:\n");

      for (loop;loop < 10; loop++) {
        printf("%d ",petersArray[loop]);
        petersArraySum += petersArray[loop];
    }

    printf("\n");
    printf("Peter's Array Sum: %d\n\n",petersArraySum);



    return 0;
}
