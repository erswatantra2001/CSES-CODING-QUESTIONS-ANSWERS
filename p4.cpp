// increasing array in c++

#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin >>n;

    long long arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    long long store = 0;
    long long ans = 0;

    for(int i = 0;i < n-1;i++){
        if(arr[i] > arr[i+1]){
            store = (arr[i] - arr[i+1]);
            arr[i+1] = arr[i+1] + store;
            ans = ans + store;
            store = 0;
        }
    }

    cout << ans << endl;
    return 0;
}
