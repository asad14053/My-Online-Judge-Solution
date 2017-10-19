
    int n;
    string a="ogo",b,cs="";
    while(cin>>n>>b)
    {  cs="";
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]=='o')
            {// bug(i);
                if(b[i+1]=='g' and b[i+2]=='o')
                    c++,i+=2,cs+="***";
                else cs+=b[i];

            }
            else if(b[i]=='g')
            {
                if(b[i+1]=='o' and b[i-1]=='o')
                    c++,i+=1;
                    else cs+=b[i];
            }
            else cs+=b[i];
        }
        cout<<cs<<endl;
    }

return 0;
}


///  7 aogogob   8 aogoogob


