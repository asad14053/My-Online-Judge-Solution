#include<bits/stdc++.h>
using namespace std;

int cal(int row, int col)
{
    int col1,col2,row1,row2,ans,temp;
    row1 = (row / 2) + (row % 2);
    row2 = (row / 2);
    col1 = (col / 2) + (col % 2);
    col2 = col / 2;
    ans = row1 * col1 + row2 * col2;

    return ans;
}


int two(int row, int col)
{
    int ans;
    int temp;
    temp = cal(row, col);
    row = max(row, col);
    ans = (row / 4) * 4 + min(2, row % 4) * 2;
    ans = max(ans, temp);
    return ans;

}

int main()
{

    int t;

    int row,col;
    cin>>t;
    for (int cs = 1; cs <= t; cs++)
    {
        cin>>row>>col;

        if(row == 1 or col == 1)
        {

            printf("Case %d: %d\n", cs, max(row, col));
            continue;

        }

        if(row == 2 or col == 2)
        {
            printf("Case %d: %d\n", cs, two(row, col));
            continue;
        }

        if(min(row, col) == 2 and max(row, col) == 3)
        {

            printf("Case %d: 4\n", cs);
            continue;
        }


        printf("Case %d: %d\n", cs, cal(row, col));

    }
    return 0;


}
