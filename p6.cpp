// number spiral

#include<iostream>
using namespace std;

void solve(long long r, long long c){

    if(r == c){
        cout << r*r - (r-1) << endl;
    }
    else{

        long long val = max(r,c);   // here val is a diagonal value

        val = val*val - (val-1);


        if(c > r){
            if(c%2 != 0){
                val += (c-r);
            }
            else{
                val -= (c-r);
            }
        }

        else if(r > c){
            if(r%2 == 0){
                val += (r-c);
            }
            else{
                val -= (r-c);
            }
        }
        cout << val << endl; 
    }
}

int main()
{
    long long r,c,t;
    cin >> t;

    while(t--){
        
        cin >> r >> c;

        solve(r,c);
    }
    return 0;
}