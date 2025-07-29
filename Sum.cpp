#include<iostream>
using namespace std;
int main()
{
    int x,a,b,c;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>a>>b>>c;
 
        if((a+b==c)||(b+c==a)||(a+c==b))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
