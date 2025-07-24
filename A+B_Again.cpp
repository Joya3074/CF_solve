#include<iostream>
using namespace std;
int main()
{
    int x,a,ld;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>a;
        int sum=0;
        while(a>0)
    {
        ld=a%10;
        sum=sum+ld;
        a=a/10;
    }
    cout<<sum<<endl;
   }
     return 0;
}
