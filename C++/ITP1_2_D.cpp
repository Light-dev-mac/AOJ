#include <iostream>
using namespace std;
int main()
{
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    cout << ((x >= r && x + r <= W && y >= r && y + r <= H) ? "Yes" : "No") << endl;
}