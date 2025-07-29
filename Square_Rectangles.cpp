#include <iostream>
using namespace std;
 int main() 
{
    int t;
    cin >> t;
    while(t--)
 {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
 
        if ((a == c && c == e && e == b + d + f) ||
            (b == d && d == f && f == a + c + e) ||
            (b == a + c && d + f == b) ||
            (a == b + d && c + e == a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
