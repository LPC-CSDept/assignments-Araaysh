#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> nums;
   nums.push_back(6);
   nums.push_back(2);
   nums.push_back(7);
   nums.push_back(1);   
     
   nums.erase(nums.begin());

   for (int num: nums)
      cout << num << endl;
}