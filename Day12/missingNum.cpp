#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int N = nums.size();
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < N; i++) {
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ (i + 1);
    }
    return xor1 ^ xor2;
}

int main() {
    vector<int> nums = {3, 0, 1};  // Example input, missing number is 2
    cout << "The missing number is: " << missingNumber(nums) << endl;
    return 0;
}
