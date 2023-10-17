#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> track;
        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if (track.find(diff) != track.end()){
                vector<int> v = {i, track[diff]};
                return v;
                //return new vector<int>{i, track[diff]};
            }
            else{
                track[nums[i]] = i;
            }
        }
        vector<int> v = {-1, -1};
        return v;
    }
};

int main(){
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    cout<< "Array : {2, 7, 11, 15}, target: 9" <<endl;
    cout<< "{" << s.twoSum(nums, 9)[0] <<", " << s.twoSum(nums, 9)[1] << "}" << endl;
    return 0;
}