#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 100
int main()
{
    FILE *movieData;
    FILE *movieYear;
    FILE *combinedFile;
    char title[80];
    char year[10];
// I am not sure how to do fopen, so it opens a file on your computer please change accordingly
movieData = fopen("C:\\Users\\Jtyna\\Documents\\C\\lcpa7\\Lecture 07 - Movie Data - Releases.txt", "r");
movieYear = fopen("C:\\Users\\Jtyna\\Documents\\C\\lcpa7\\Lecture 07 - Movie Data - Year.txt", "r");
//checking to see if either file with data is null
if(movieData == NULL || movieYear == NULL){
    printf("Error opening file!\n");
    return (-1);
}
//change here too
combinedFile = fopen("C:\\Users\\Jtyna\\Documents\\C\\lcpa7\\movieInfo.txt", "w");
//checking to see if file was created correctly
if(combinedFile == NULL){
    printf("Error with combined File");
    return (-1);
}
//fgets seems to automatically put a newline even after putting -1, but it doesn't split it like fscanf does, so fgets grabs titles
//so I use fscanf to grab the year and not break up the lines so it looks nice and even.
while ( fgets (title, MAX_LEN, movieData) != NULL ){
        fscanf(movieYear,"%s",&year);
        fprintf (combinedFile,"%s\t%s", year, title);
}


fclose(movieData);
fclose(movieYear);
fclose(combinedFile);

return 0;
}
