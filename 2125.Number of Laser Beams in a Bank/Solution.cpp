// January 3rd, 2024 Question
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
class Solution {
public:
    int numberOfBeams(std::vector<std::string>& bank) {
        int m = bank.size();
        if (m == 1) return 0;
        int sum = 0, i = 0, j = 1;
        while (j < m){
            int iCount = std::count(bank[i].begin(), bank[i].end(), '1');
            int jCount = std::count(bank[j].begin(), bank[j].end(), '1');
            if (jCount == 0){
                j++;
                continue;
            }
            sum += iCount * jCount;
            i = j;
            j++;
        }
        return sum;
    }
};

int main(){
    Solution s = Solution();
    std::vector<std::string> test1 = {"011001","000000","010100","001000"};
    std::vector<std::string> test2 = {"000","111","000"};

    std::cout << s.numberOfBeams(test1) << std::endl;
    std::cout << s.numberOfBeams(test2) << std::endl;
}
