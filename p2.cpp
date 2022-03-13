// missing numbers

#include <iostream>
using namespace std;
int main()
{

    long long n;
    cin >> n;
    long long sum = 0;

    for (int i = 1; i < n; i++)
    {
        long long a;
        cin >> a;
        sum = sum + a;
    }
    cout << (n * (n + 1) / 2 - sum) << endl;
    return 0;
}