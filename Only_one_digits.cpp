#include<iostream>
using namespace std;
int main()
{
    int x,a,ld;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>a;
        int n=9;
        while(a>0)
    {
        ld=a%10;
       if(ld<n)
       {
           n=ld;
       }
        a=a/10;
    }
    cout<<n<<endl;
   }
     return 0;
}

