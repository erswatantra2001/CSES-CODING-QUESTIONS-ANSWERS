// // Two sets

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     long long int count = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         count = count + i;
//     }

//     if (count % 2 == 1)
//     {
//         cout << "NO" << endl;
//     }
//     else
//     {
//         vector<long long int> v1, v2;
//         count = count / 2;
//         while (n)
//         {
//             if (count - n >= 0)
//             {
//                 v1.push_back(n);
//                 count = count - n;
//             }
//             else
//             {
//                 v2.push_back(n);
//             }
//         }
//         cout << "YES" << endl;
//         cout << v1.size() << endl;
//         for (int i = 0; i < v1.size(); i++)
//         {
//             cout << v1[i] << " ";
//         }
//         cout << v2.size() << endl;
//         for (int i = 0; i < v2.size(); i++)
//         {
//             cout << v2[i] << " ";
//         }
//     }

//             return 0;
//         }

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    if (sum % 2 == 1)
    {
        cout << "NO";
    }
    else
    {
        vector<long long int> arr1, arr2;
        sum /= 2LL;
        while (n)
        {
            if (sum - n >= 0)
            {
                arr1.push_back(n);
                sum -= n;
            }
            else
            {
                arr2.push_back(n);
            }
            n--;
        }
        cout << "YES" << endl
             << arr1.size() << endl;
        for (int i = 0; i < arr1.size(); i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl
             << arr2.size() << endl;
        for (int i = 0; i < arr2.size(); i++)
        {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}