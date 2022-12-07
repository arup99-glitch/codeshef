#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ar[a];
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
        }
            long long int s=0;
            int ct=0;
            for(int i=0;i<a;i++)
            {
                if(b-ar[i]>c){
                    s+=b;
                    ct+=c;
                }
                else
                    s+=ar[i];
            }
            cout<<s-ct<<endl;
        }
    }

