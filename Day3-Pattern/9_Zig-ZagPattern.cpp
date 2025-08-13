// 19. Zig-Zag Pattern
// markdown
// Copy code
// Input: n = 9
// Output:
//       *       *
//     *   *   *   *
//   *       *       *


#include <iostream>
using namespace std;

int main() {
    int n = 9; // total columns (adjust as needed)

    for (int i = 1; i <= 3; i++) {      // 3 rows
        for (int j = 1; j <= n; j++) {  // columns
            if ((i == 1 && (i + j) % 4 == 0) ||
                (i == 2 && j % 2 == 0) ||
                (i == 3 && (i + j) % 4 == 0)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

