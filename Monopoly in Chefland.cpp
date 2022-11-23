#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    int a[3];
    while(t--){
    for(int i=0;i<3;i++)
    {
        cin>>a[i];


    }
    sort(a,a+3);
     if(a[0]+a[1]<a[2])cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
}
}
