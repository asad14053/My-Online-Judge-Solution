 #include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

void combinationUtil(int arr[], int data[], int start, int end, int index, int r)
{

    if (index == r)
    {
        for (int i=0; i<r; i++)
            printf("%d " ,data[i]);
        printf("\n");
        return;
    }

    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
        while (arr[i] == arr[i+1])
            i++;
    }
}
void printCombination(int arr[], int n, int r)
{
    int data[r];
    qsort (arr, n, sizeof(int), compare);
    combinationUtil(arr, data, 0, n-1, 0, r);
}
int main()
{
    int arr[] = {1,2,3};
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    printCombination(arr, n, r);
}

