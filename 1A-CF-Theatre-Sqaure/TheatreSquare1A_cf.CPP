#include <iostream>
using namespace std;

int main() {
    // n = length of the Theatre Square
    // m = width of the Theatre Square
    // a = side length of each square flagstone
    long long n, m, a;
    cin >> n >> m >> a;

    // We need to find how many flagstones are required
    // along the length and along the width.
    //
    // Since we cannot break a flagstone, we use ceiling division:
    //
    // ceil(n / a) = (n + a - 1) / a
    // ceil(m / a) = (m + a - 1) / a

    long long length = (n + a - 1) / a;
    long long width = (m + a - 1) / a;

    // Total flagstones = flagstones along length
    //                   × flagstones along width
    long long answer = length * width;

    cout << answer << endl;

    return 0;
}