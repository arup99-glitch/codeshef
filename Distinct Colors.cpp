#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a;

    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);

        }
        cout<<*max_element(v.begin(),v.end())<<endl;


    }

}
