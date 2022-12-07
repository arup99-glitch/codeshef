
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
     string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>t;

       cin>>s;

    string c=s;
    int ct=0;
    sort(s.begin(),s.end());
    if(c==s){
    for(int i=0;i<t;i++)
    {
        if(s[i]==s[i+1])ct++;

    }
    cout<<ct<<endl;
    }
    else{
            for(int i=0;i<t;i++)
    {
        if(s[i]==s[i+1])ct++;

    }
    cout<<ct-1<<endl;
    }
    }


}
