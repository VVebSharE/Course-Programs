//Represent a deck of playing cards using arrays.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main10()
{
    system("cls");
    char *card[13];
    char *quad[4];
    card[0]="Ace";
    card[1]="Two";
    card[2]="Three";
    card[3]="Four";
    card[4]="Five";
    card[5]="Six";
    card[6]="Seven";
    card[7]="Eight";
    card[8]="Nine";
    card[9]="Ten";
    card[10]="King";
    card[11]="Queen";
    card[12]="Joker";
    quad[0]="Diamond";
    quad[1]="Club";
    quad[2]="Spade";
    quad[3]="Hearts";
    printf("Here is deck of 52 cards\n");
    for(int i=0;i<4;i++)
    {for(int j=0;j<13;j++)
    printf("%s of %s\n",card[j],quad[i]);
    printf("\n");}
    getch();
    system("cls");
    return 0;
}