
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        int x;
        x=pow(2,b);
        while(a--)
        {
            x=x/2;
        }
        cout<<x<<endl;
    }
}
