#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
    int maxOccurElement(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int freq=1, ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                freq++;
            }else{
                freq=1;
                ans=nums[i];
            }
            if(freq>n/2){
                ans=nums[i];
                return ans;
            }
        }return ans;
    }
};

int main(){
    Solution obj;
    vector <int> nums={5,4,3,3,5,5,5};
    int result= obj.maxOccurElement(nums);
    cout<<"The required Element is:"<< result<< endl;
    return 0;
}
