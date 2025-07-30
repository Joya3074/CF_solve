#include<iostream>
using namespace std;
int main()
{
int m,n,i,j;
    int count = 0;
    cin>>n>>m;
    for(i = 0 ; i <= n ;i++)
   {
        for (j = 0; j <= m; j++)
        {
                if ((i*i) + j == n && i + j*j == m)
                {
                    count++;
                }
        }
    }
 cout<<count<<endl;
return 0;
}
