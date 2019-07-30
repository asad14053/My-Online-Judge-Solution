#include<bits/stdc++.h>
using namespace std;
int LisSequence[32]; // for storing the sequence
void findSequence( int maxLength )   // finds a valid sequence
{
    int i, j; // variable used for iteration
    // at first find the position of the item whose L[] is maximum
    i = 0;
    for( j = 1; j < n; j++ )
    {
        if( L[j] > L[i] )
            i = j;
    }
    // initialize the position in LisSequence where the items can be added.
    // observe that the data are saving from right to left!
    int top = L[i] - 1;
    // insert the item in i-th position to LisSequence
    LisSequence[top] = Sequence[i];
    top--; // is decreasing such that a new item can be added in a new place
    // now find the other valid numbers to form the sequence
    for( j = i - 1; j >= 0; j-- )
    {
        if( Sequence[j] < Sequence[i] && L[j] == L[i] - 1 )
        {
            // we have found a valid item so, we will save it
            i = j; // as in our algorithm
            LisSequence[top] = Sequence[i]; // stored
            top--; // decreased for new items
        }
    }
    // so, we have got the sequence, now we want to print it
    printf("LIS is");
    for( i = 0; i < maxLength; i++ )
    {
        printf(" %d", LisSequence[i]);
    }
    puts("");
}

int main()
{
    takeInput();
    int result = LIS();
    printf("The LIS length is %d\n", result);
    findSequence( result );
    return 0;
}
