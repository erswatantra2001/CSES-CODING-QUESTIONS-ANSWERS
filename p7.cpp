// Two knights

#include<iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    for(int k = 1;k <=n ;k++){
        long long a1 = k*k;   // jahan jahan pe hum apne pahale knight ko place kar sakte hai
        long long a2 = a1*(a1-1)/2;  // jahan jahan hum apne 2nd wale knight ko nahi rakh sakte

        if(k > 2){
            a2 = a2 - 4 * (k-1) * (k-2);  // baaki bachi hui number of ways to place the 2nd knight
        }
    cout << a2 << endl;
    }


    return 0;
}