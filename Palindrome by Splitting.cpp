#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l=0,m=n-1,c=0;
        while(l<m)
        {
            if(a[l]==a[m])
            {
                l++;
                m--;
            }
            else if(a[l]>a[m])
            {
                a[l]=a[l]-a[m];
                m--;
                c++;
            }
            else{
                a[m]=a[m]-a[l];
                l++;
                c++;
            }
        }
        cout<<c<<endl;
    }
}
