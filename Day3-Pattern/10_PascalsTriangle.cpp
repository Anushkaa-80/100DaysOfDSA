// 20. Pascal’s Triangle
// makefile
// Copy code
// Input: n = 5
// Output:
//         1
//       1   1
//     1   2   1
//   1   3   3   1
// 1   4   6   4   1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
       
        for(int sp = 0; sp < n - i - 1; sp++) {
            cout << "  "; 
        }

        int val = 1;
        for(int j = 0; j <= i; j++) {
            cout << val << "   "; 

            val = val * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
