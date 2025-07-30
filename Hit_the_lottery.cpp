#include<iostream>
using namespace std;
int main()
{
    long n,i,sum=0;
    cin>>n;
    int x[]= {100,20,10,5,1};
    for(i=0;i<5;i++)
    {
        sum=sum+n/x[i];
        n=n%x[i];
    }
    cout<<sum;
    return 0;
}
