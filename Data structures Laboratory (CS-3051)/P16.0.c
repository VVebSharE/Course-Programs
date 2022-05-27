// 16.Sorting: Bubble sort, Merge sort, Insertion sort, Selection sort, Radix Sort, Quick Sort?
//try to make merge sort and quick sort better in time complexity
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000
int check(int *arr1, int *arr2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}
void print_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr, j, j - 1);
            }
        }
    }
}
int shift(int *arr,int start,int end)//retrun last element
{
    int last=arr[end];
    for(int i=end;i>start;i--){
        arr[i]=arr[i-1];
    }
    return last;
}
void merge(int *arr, int start, int end)//calling shift to make merge sort space complexity minimal
{
    int mid=(start+end)/2;
    for (int i = start, j = (start+end)/2; i < mid && j<end;)
    {
        if(arr[i]>arr[j]){
            arr[i]=shift(arr,i,j);
            i=i+1;
            j=j+1;
            mid=mid+1;
        }
        else{
            i=i+1;
        }
    }
}
void Merge_sort(int *arr, int start, int end)
{
    if (start >= end-1)
    {
        return;
    }
    else
    {
        Merge_sort(arr, start, (start + end) / 2);
        Merge_sort(arr, (start + end) / 2, end);
        merge(arr, start, end);
    }
}
void merge_sort(int *arr, int n) // way of defalut parameters function
{
    Merge_sort(arr, 0, n);
}
void insertion_sort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr, j, j - 1);
            }
            else
            {
                break;
            }
        }
    }
}
void selection_sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int max_at = 0;
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j] > arr[max_at])
            {
                max_at = j;
            }
        }
        swap(arr, n - i - 1, max_at);
    }
}
void radix_sort();
void Quick_sort(int *arr,int start,int end){
    if(start<end-1){
        int pivot=start;
        for(int i=start+1;i<end;i++){
            if(arr[pivot]>arr[i]){
                arr[pivot]=shift(arr,pivot,i);
                pivot+=1;
            }
        }
        Quick_sort(arr,start,pivot);
        Quick_sort(arr,pivot+1,end);
    }
}
void quick_sort(int *arr,int n){
    Quick_sort(arr,0,n);
}

// A comparator function used by qsort
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int arr[N], dupArr[N], sortedArr[N];

    // seed for random input
    srand(time(NULL));

    // to measure time taken
    clock_t begin, end;
    double time_spent;

    // generate random input
    for (int i = 0; i < N; i++)
        dupArr[i] = arr[i] = rand() % 100000;

    begin = clock();
    qsort(arr, N, sizeof(int), compare);
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC * 1000;
    printf("\nTime taken by C qsort() - %f ms", time_spent);


    for (int i = 0; i < N; i++)
    {
        sortedArr[i] = arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        arr[i] = dupArr[i];
    }

    begin = clock();
    bubble_sort(arr, N);
    end = clock();
    // calculate time
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC * 1000;
    printf("\nTime taken by bubble_sort - %f ms", time_spent);
    printf(" %d", check(arr, sortedArr, N));

    for (int i = 0; i < N; i++)
    {
        arr[i] = dupArr[i];
    }

    begin = clock();
    insertion_sort(arr, N);
    end = clock();
    // calculate time
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC * 1000;
    printf("\nTime taken by insertion_sort - %f ms", time_spent);
    printf(" %d", check(arr, sortedArr, N));

    for (int i = 0; i < N; i++)
    {
        arr[i] = dupArr[i];
    }

    begin = clock();
    selection_sort(arr, N);
    end = clock();
    // calculate time
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC * 1000;
    printf("\nTime taken by selection_sort - %f ms", time_spent);
    printf(" %d", check(arr, sortedArr, N));

    for (int i = 0; i < N; i++)
    {
        arr[i] = dupArr[i];
    }

    begin = clock();
    merge_sort(arr, N);
    end = clock();
    // calculate time
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC * 1000;
    printf("\nTime taken by merge_sort - %f ms", time_spent);
    printf(" %d",check(arr,sortedArr,N));


     for (int i = 0; i < N; i++)
    {
        arr[i] = dupArr[i];
    }

    begin = clock();
    quick_sort(arr, N);
    end = clock();
    // calculate time
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC * 1000;
    printf("\nTime taken by quick_sort - %f ms", time_spent);
    printf(" %d",check(arr,sortedArr,N));

    return 0;
}