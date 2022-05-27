//4. Write programs to search an element in the array using Binary Search.
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define N 100000
int binser(int *arr,int a)
{
    int i=0, j=N-1;
    for(int x=0; i<=j && x<100;x++)
    {
        if(arr[(i+j)/2]==a)
        return (i+j)/2;
        else if(arr[(i+j)/2]>a)
        j=(i+j)/2-1;
        else
        i=(i+j)/2+1;
    }
    return -1;

}
int compare(const void * a, const void * b) 
{ 
    return ( *(int*)a - *(int*)b ); 
} 
void main()
{
    printf("\e[1;1H\e[2J");
    clock_t t,t1,t2; 
    int arr[N];
    //srand(time(NULL)); 
    for (int i = 0; i < N; i++) 
    arr[i] = rand()%100000; 
    
    t = clock(); 
    qsort(arr, N, sizeof(int), compare); 
    t1=clock();
    int v=binser(arr,100000);
    
    t2 = clock(); 
    t1=t1-t;
    t2=t2-t;
    double time_taken = ((double)t2),time=((double)t1); // in seconds 
  
    printf("linear search took %f clocks to execute out of which %f used in qsort \n", time_taken,time); 
    if(v==-1)
    printf("Element not found");
    else
    printf("Element found at %d",v);
    getch();
    printf("\e[1;1H\e[2J");
}
