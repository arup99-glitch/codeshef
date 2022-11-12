#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,d,h,c,m,n;
    cin>>t;
    while(t--)
    {
        cin>>t>>d>>h>>c;
        if(t==d)cout<<"YES"<<endl;
        else if(t>d && (t-d) <=c)
        cout<<"YES"<<endl;
            else if(t<d && (d-t)<=h)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
