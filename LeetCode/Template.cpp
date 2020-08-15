#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> val;
    vector<int> memo;
    int lim;
    
    int loop(int i, int currTot){
        if(i >= lim){
            printf("%d - %d\n", i, currTot);
            return currTot;
        }else if(memo[i]!=0){
            memo[i] = max(memo[i], currTot + val[i]);
            printf("%d = %d\n", i, memo[i]);
            return memo[i];
        }
        else{
            memo[i] = max(loop(i+1, currTot), loop(i+2, currTot+val[i]));
            printf("%d > %d\n", i, memo[i]);
            return memo[i];
        }
    }
    
    int rob(vector<int>& nums) {
        val = nums;
        lim = nums.size();
        vector<int> temp(nums.size(),0);
        memo = temp;
        
        if(nums.size()==0) return 0;
        else if(nums.size()==1) return nums[0];
        else if(nums.size()==2) return max(nums[0], nums[1]);
        return max(loop(2,nums[0]), loop(3,nums[1]));
    }
};
int main(){
    vector<int> arr;
    int temp;
    Solution s;
    while(scanf("%d", &temp)==1){
        arr.push_back(temp);
    }
    printf("%d", s.rob(arr));
}