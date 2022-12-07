#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)cout<<"LOSS"<<endl;
        if(a<b)cout<<"PROFIT"<<endl;
        else if(a==b)cout<<"NEUTRAL"<<endl;
    }
}

