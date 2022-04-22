#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x;
    y=x/10;
    if(x>0)
    {
        cout<<y<<endl;
    }
    else
    {
        if(x%10==0)
        cout<<y<<endl;
        else
        cout<<y-1<<endl;
    }
}