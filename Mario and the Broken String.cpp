#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,x;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        x=n/2;

        cin>>s;
        for(i=0,j=x;i<x,j<n;i++,j++)
        {
            if(s[i]!=s[j])
            {
                cout<<"NO"<<endl;
                break;
            }
            if(s[i]==s[j])
            {
                cout<<"YES"<<endl;
                break;
            }
        }

    }

}
