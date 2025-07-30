#include<iostream>
using namespace std;
int main ()
{
    int x,i;
    cin>>x;
    int a[x];
   for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<x;i++)
        {
          if(1900<=a[i])
        {
            cout<<"Division 1"<<endl;
        }
        else if(1600<=a[i] && a[i]<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(1400<=a[i] && a[i]<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if(a[i]<=1399)
        {
            cout<<"Division 4"<<endl;
        }
        }
        return 0;
    }
