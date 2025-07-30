#include<iostream>
using namespace std;
int main()
{
 int x,y,z,tot;
 cin>>x>>y>>z;
 tot= max(x,max(y,z))-min(x,min(y,z));
 cout<<tot;
 return 0;
}
