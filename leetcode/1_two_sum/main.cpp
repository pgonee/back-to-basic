#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  Solution() {}

  vector<int> twoSum(vector<int> &nums, int target) {
    int startIndex = 0;
    vector<int> v;

    while (startIndex < nums.size() - 1) {
      int a = nums[startIndex];
      for (size_t i = startIndex + 1; i < nums.size(); i++) {
        int b = nums[i];
        if ((a + b) == target) {
          v.push_back(startIndex);
          v.push_back(i);
          goto jump;
        }
      }

      startIndex += 1;
    }

  jump:
    return v;
  }
};

int main() {
  Solution s;
  vector<int> a = {3, 2, 3};

  assert((s.twoSum(a, 6) == vector<int>{0, 2}));
}
