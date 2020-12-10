#include <stdio.h>
#include <stdlib.h>

int ConvertTemp(){
    char convert;
    float temp;

  printf("Please enter a temperature: ");
  scanf("%f", &temp);
  printf("Would you like to convert to Celcius or to Fahrenheit? (c/f): ");
  scanf(" %c",&convert);

  if (convert == 'c' || convert == 'C'){
    temp = (temp - 32) * 5 / 9;
  }

  if (convert == 'f' || convert == 'F'){
    temp = 1.8 * temp + 32;
  }

  return printf("%f", temp);
  }

int main()
{
ConvertTemp();
}
