//3. Write a program to search an element in an array using Linear Search.
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define N 100000
int linser(int *arr,int a)
{
    for(int i=0; i<N;i++)
    if(arr[i]==a)
    return i;
    
    return -1;

}
void main()
{
    printf("\e[1;1H\e[2J");
    clock_t t; 
    int arr[N];
    //srand(time(NULL)); 
    for (int i = 0; i < N; i++) 
    arr[i] = rand()%100000; 
    t = clock(); 
    int v=linser(arr,0);

    t = clock() - t; 
    double time_taken = ((double)t); // in seconds 
  
    printf("linear search took %f clocks to execute \n", time_taken); 
    if(v==-1)
    printf("Element not found");
    else
    printf("Element found at %d",v);
    getch();
    printf("\e[1;1H\e[2J");
}
