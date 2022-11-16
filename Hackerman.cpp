#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x= a+b;
        int y = x/2;
        bool flag=0;
        for(int i=2;i<=y;i++)
        {
            if(x%2==0){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
}

