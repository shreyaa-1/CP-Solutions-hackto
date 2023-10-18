#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a=1,b=1,c=n-1;
        if(n==1)
        {
            cout<<-1<<endl;
        }
        else if(n>1000000)
        {
            a=1000000;
            b=n/1000000;
            c=n%1000000;
            if(c==0)
            {
                b--;
                c=1000000;
            }
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }



    }
}

