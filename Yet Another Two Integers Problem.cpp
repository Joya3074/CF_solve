#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    long long d=abs(a-b);
	    cout<<(d+9)/10<<endl;
	}
}
