// 18. Hollow Diamond Pattern
// Input: n = 5
// Output:
//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter n";
//     cin>>n;
//     for(int i=0;i<5;i++)
//     {
//         for(int sp=0;sp<n-i;sp++)
//         {
//             cout<<" ";
//         }
//         for(int j=0;j<((2*i)+1);j++)
//         {
//             if(j==0 || j==(((2*i)+1)-1))
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>0;i--)
//     {
//         for(int sp=0;sp<n-i;sp++)
//         {
//             cout<<" ";
//         }
//         for(int j=((2*i)+1);j>0;j--)
//         {
//              if(j==1 || j==(((2*i)+1)-1))
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Upper Half
    for (int i = 0; i < n; i++) {
        // spaces
        for (int sp = 0; sp < n - i - 1; sp++) {
            cout << " ";
        }
        // hollow stars
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    // Lower Half
    for (int i = n - 1; i >= 0; i--) {
        // spaces
        for (int sp = 0; sp < n - i - 1; sp++) {
            cout << " ";
        }
        // hollow stars
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
