#include<bits/stdc++.h>
using namespace std;
int n; // the number of items in the sequence
int Sequence[32]; // the sequence of integers
int L[32]; // L[] as described in the algorithm
int LIS()   // which runs the LIS algorithm and returns the result
{
    int i, j; // auxilary variables for iteration

    // initialize L[] with 1
    for( i = 0; i < n; i++ )
        L[i] = 1;

    // start from the left most item and itetare right
    for( i = 0; i < n; i++ )
    {
        // for the ith item item find all items that are in right
        for( j = i + 1; j < n; j++ )
        {

            if( Sequence[j] > Sequence[i] )
            {
                // the item is greater than the ith item

                // so, L[j] = L[i] + 1, since jth item can be added after ith
                // item. if L[j] is already greater than or equal to L[i] + 1
                // then ignore it
                if( L[j] < L[i] + 1 )
                    L[j] = L[i] + 1;
            }
        }
    }
    // now find the item whose L[] value is maximum
    int maxLength = 0;
    for( i = 0; i < n; i++ )
    {
        if( maxLength < L[i]  )
            maxLength = L[i];
    }
    // return the result
    return maxLength;
}

int main()
{
    scanf("%d", &n); // how many numbers in the sequence ?
    // take the sequence
    for( int i = 0; i < n; i++ )
        scanf("%d", &Sequence[i]);
    int result = LIS();
    printf("The LIS length is %d\n", result);
    return 0;
}
