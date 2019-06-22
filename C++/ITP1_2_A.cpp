#include <iostream>
int main()
{
    using namespace std;
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << "a > b" << endl;
    else if (a < b)
        cout << "a < b" << endl;
    else
        cout << "a == b" << endl;
}