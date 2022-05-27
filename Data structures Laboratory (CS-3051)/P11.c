/*11.Write a program for implementation of a file and performing operations such as insert, delete
and update a record in a file.*/
//implicit delete i don't know for now, not want to forcely delete something 
#include<stdio.h>
#include<conio.h>
void main()
{
    printf("\e[1;1H\e[2J");
    int n=0;
    FILE *fptr;
    fptr= fopen("P11.txt","a+");
    if(fptr==NULL){
        printf("error in file opening");
        return;
    }
    printf("reading from file:\n");
    if(fscanf(fptr,"%d",&n)==EOF)
        printf("File is empty");
    else
        printf("%d \n",n);
    while (fscanf(fptr,"%d",&n)!=EOF)
    {
        printf("%d \n",n);
    }
    fprintf(fptr," %d",++n);
    fclose(fptr);
    
    // printf("\e[1;1H\e[2J");
}
