#include<iostream>
using namespace std;
int main()
{
    int x,a;
    cin>>a;
    for(x=1;x<=a;x++)
    {
        if(x%2!=0)
        {
            cout<<"I hate ";
        }
        else
        {
            cout<<"I love ";
        }
        if(x==a)
        {
            cout<<"it";
        }
        else
        {
           cout<<"that"<<" ";
        }
    }
    return 0;
}
