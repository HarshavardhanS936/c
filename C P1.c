#include<stdio.h>
#include<stdlib.h>
#define DATA_SIZE 1000
int main()
{
    char data[DATA_SIZE];
    FILE * fPtr;
    fPtr=fopen("file.txt","w");
    if(fPtr == NULL)
    {
        printf("Unable to create");
        exit(EXIT_FAILURE);
    }
    printf("Enter the content to store");
    fgets(data,DATA_SIZE,stdin);
    fputs(data,fPtr);
    fclose(fPtr);
    printf("File created");;
    return 0 ;
}