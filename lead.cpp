#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, plus, minus, a, b, c, d, e, top(-2501);
    string handle, leader;
    cin >> n;
    while (n--)
    {
        cin >> handle >> plus >> minus >> a >> b >> c >> d >> e;
        int points = plus * 100 - minus * 50 + a + b + c + d + e;
        if (points > top)
        {
            leader = handle;
            top = points;
        }
    }
    cout << leader;
    return 0;
}