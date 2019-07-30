#include<bits/stdc++.h>
using namespace std;
int main()
{
    stringstream ss (stringstream::in | stringstream::out);
    string str;
    int temp;
    while(getline(cin,str))
    {
        set<int> Set1,Set2,inter;
        ss.clear();
        ss<<str;
        while(ss>>temp)
            Set1.insert(temp);
        getline(cin,str);
        ss.clear();
        ss<<str;
        while(ss>>temp)
            Set2.insert(temp);
        set_intersection(Set1.begin(),Set1.end(),Set2.begin(),Set2.end(),insert_iterator< set <int> >(inter,inter.begin()));
        if (Set1 == Set2)
            printf("A equals B\n");
        else if (Set1 == inter)
            printf("A is a proper subset of B\n");
        else if (Set2 == inter)
            printf("B is a proper subset of A\n");
        else if (inter.size() == 0)
            printf("A and B are disjoint\n");
        else
            printf("I'm confused!\n");
    }
    return 0;
}
