#include <iostream>
using namespace std;
 
int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long X =(n + a - 1)/a;
    long long Y =(m + a - 1)/a;
    cout <<(X*Y)<< "\n";
    return 0;
}
