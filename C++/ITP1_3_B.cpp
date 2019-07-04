#include <iostream>
using namespace std;
int main()
{
    int num;
    int i = 1;
    while (cin >> num && num != 0)
    {
        cout << "Case " << i << ": " << num << endl;
        i++;
    }
}
