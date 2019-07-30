#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n=5; // the number of sets in the set A
    int result = 0; //final result, the cardinality of sum of all subsets of A
    for(int b = 0; b < (1 << n); ++b)
    {
        vector<int> indices;
        for(int k = 0; k < n; ++k)
        {
            if(b & (1 << k))
            {
                indices.push_back(k);
            }
        }
        int cardinality = indices.size();//intersectionCardinality(indices);
        if(indices.size() % 2 == 1) result += cardinality;
        else result -= cardinality;
    }
    cout << result << endl; //printing the final result
}
