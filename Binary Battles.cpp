#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x,y,c;
        cin>>n>>x>>y;
        c=log2(n);
        cout<<c*x+(c-1)*y<<endl;
    }

}
