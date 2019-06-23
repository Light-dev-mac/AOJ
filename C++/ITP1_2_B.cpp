#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= 0 && a < b & b < c && c <= 100)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}