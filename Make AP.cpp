#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,a,b;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        if((a+b)%2==0)cout<<((a+b)/2)<<endl;
        else cout<<-1<<endl;
    }
}
