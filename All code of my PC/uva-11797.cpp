#include <iostream>
#include <queue>
using namespace std;

int getValue(string name)
{
    if(name=="Ja")
    {
        return 0;
    }
    else if(name=="Sam")
    {
        return 1;
    }
    else if(name=="Sha")
    {
        return 2;
    }
    else if(name=="Sid")
    {
        return 3;
    }
    else if(name=="Tan")
    {
        return 4;
    }
    return -1;
}


int main()
{
    int tc;
    cin >> tc;
    for(int d=1; d<=tc; d++)
    {
        int N,M, k;
        int di[6];
        string curr;
        string temp;
        string name;
        queue<string> l[6];
        for(int i=0; i<5; i++)
        {
            while(!l[i].empty())
            {
                l[i].pop();
            }
            di[i]=0;
        }
        cin >> M >> N >> curr;

        for(int i=0; i<5; i++)
        {
            cin >> k;
            while(k--)
            {
                cin >> name;
                l[i].push(name);
            }
        }

        int time=0;

        if(time+M<N)
        {
            di[getValue(curr)]+=M;
            time=time+M;
        }
        else
        {
            int tempInt = N-time;
            if(tempInt>0)
            {
                di[getValue(curr)]+=tempInt;
            }
            time=N;
        }

        while(time<N)
        {
            temp=curr;
            curr=l[getValue(curr)].front();
            l[getValue(temp)].pop();
            l[getValue(temp)].push(curr);
            if (time+2+M<N)
            {
                di[getValue(curr)]+=M;
                time=time+2+M;
            }
            else
            {
                int tempInt = N-time-2;
                if(tempInt>0)
                {
                    di[getValue(curr)]+=tempInt;
                }
                time=N;
            }
        }

        cout << "Case " << d << ":" << endl;
        cout << "Ja " << di[0] << endl;
        cout << "Sam " << di[1] << endl;
        cout << "Sha " << di[2] << endl;
        cout << "Sid " << di[3] << endl;
        cout << "Tan " << di[4] << endl;

    }
    return 0;
}
