#include<bits/stdc++.h>
using namespace std;
void fib(int n)
{
    int f[n+1];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<n;i++)
    {
        f[i]=f[i-1]+f[i-2];
        cout<<f[i]<<" ";
    }
}
int main()
{
    cout<<0<<" "<<1<<" ";
    fib(8);
    
}