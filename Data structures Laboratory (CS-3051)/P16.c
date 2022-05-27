// 16.Sorting: Bubble sort, Merge sort, Insertion sort, Selection sort, Radix Sort, Quick Sort?
// make radix sort do better
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 100000
#define d 5
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
    printf("\n");
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
int shift(int *arr, int start, int end) // retrun last element
{
    int last = arr[end];
    for (int i = end; i > start; i--)
    {
        arr[i] = arr[i - 1];
    }
    return last;
}
void merge(int *arr, const int start, const int end)
{
    int *arr_dup = (int *)malloc(sizeof(int) * (end - start));
    int i = start, j = (start + end) / 2, k = 0;
    for (; i < ((start + end) / 2) && j < end; k++)
    {
        if (arr[i] < arr[j])
        {
            arr_dup[k] = arr[i];
            i++;
        }
        else
        {
            arr_dup[k] = arr[j];
            j++;
        }
    }
    while (i < (start + end) / 2)
    {
        arr_dup[k] = arr[i];
        i++;
        k++;
    }
    while (j < end)
    {
        arr_dup[k] = arr[j];
        j++;
        k++;
    }
    for (int n = 0, m = start; n < (end - start); n++, m++)
    {
        arr[m] = arr_dup[n];
    }
    free(arr_dup);
}
void Merge_sort(int *arr, int start, int end)
{
    if (start < end - 1)
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
int dig_at(int num, int i)
{
    return (num / (int)pow(10, i)) % 10;
}
void counting_sort(int *arr, int n, int i)
{
    int *arr_dup = (int *)malloc(sizeof(int) * (n + 1));
    int *temp = (int *)malloc(sizeof(int) * 10);
    for (int j = 0; j < 10; j++)
    {
        temp[j] = 0;
    }
    for (int j = 0; j < n; j++)
    {
        temp[dig_at(arr[j], i)] += 1;
    }
    for (int j = 1; j < 10; j++)
    {
        temp[j] += temp[j - 1];
    }
    for (int j = n - 1; j >= 0; j--)
    {
        int num3 = arr[j];
        int num2 = dig_at(num3, i);
        int num = temp[num2];
        arr_dup[num] = arr[j];
        temp[dig_at(arr[j], i)] -= 1;
    }
    for (int j = 0; j < n; j++)
    {
        arr[j] = arr_dup[j + 1];
    }
    free(temp);
    free(arr_dup);
}
void radix_sort(int *arr, int n)//Just copied from book into to algo Coremen.....
{
    for (int i = 0; i < d; i++)
    {
        counting_sort(arr, n, i);
    }
}
void Quick_sort(int *arr, int start, int end)
{
    if (start < end - 1)
    {
        int pivot = start, pivot_val = arr[start];
        for (int i = start + 1; i < end; i++)
        {
            if (pivot_val > arr[i])
            {
                swap(arr, pivot, i);
                swap(arr, i, pivot + 1);
                pivot += 1;
            }
        }
        Quick_sort(arr, start, pivot);
        Quick_sort(arr, pivot + 1, end);
    }
}
void quick_sort(int *arr, int n)
{
    Quick_sort(arr, 0, n);
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
    printf(" %d", check(arr, sortedArr, N));

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
    printf(" %d", check(arr, sortedArr, N));

    for (int i = 0; i < N; i++)
    {
        arr[i] = dupArr[i];
    }

    begin = clock();
    radix_sort(arr, N);
    end = clock();
    // calculate time
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC * 1000;
    printf("\nTime taken by radix_sort - %f ms", time_spent);
    printf(" %d", check(arr, sortedArr, N));

    return 0;
}