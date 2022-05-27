#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define d 100000
void print_arr(int *arr, int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int dig_at(int num, int i){
    return (num/(int)pow(10,i))%10;
}
void counting_sort(int *arr, int n, int i){
    int *arr_dup = (int *)malloc(sizeof(int) * (n+1));
    int *temp = (int *)malloc(sizeof(int) * 10);
    for(int j=0;j<10;j++){
        temp[j]=0;
    }
    for(int j=0;j<n;j++){
        temp[dig_at(arr[j],i)]+=1;
    }
    for(int j=1;j<10;j++){
        temp[j]+=temp[j-1];
    }
    
    print_arr(temp,10);
    for(int j=n-1;j>=0;j--){
        int num3=arr[j];
        int num2=dig_at(num3,i);
        int num=temp[num2];
        arr_dup[num]=arr[j];
        temp[dig_at(arr[j],i)]-=1;
    }
    for (int j = 0;j<n;j++)
    {
        arr[j] = arr_dup[j+1];
    }print_arr(arr_dup,n);
    free(temp);
    free(arr_dup);
}
void main()
{
    printf("\e[1;1H\e[2J");
    int arr[]={2,5,3,0,2,3,0,3};
    print_arr(arr,8);
    counting_sort(arr,8,0);
    print_arr(arr,8);
    printf("%d",dig_at(0,0));

}
