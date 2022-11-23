#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k>>x;
        if(x%k==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
