//Two sum using Binary search
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<std::pair<int, int>> indexedNums;
        for (int i=0; i < nums.size(); ++i){
            indexedNums.push_back({nums[i], i});
        }
        sort(indexedNums.begin(), indexedNums.end());
        int left = 0;
        int right = indexedNums.size() - 1;

        while (left < right){
            int currentSum = indexedNums[left].first + indexedNums[right].first;
            if (currentSum == target){
            return {indexedNums[left].second, indexedNums[right].second};
            }

            else if (currentSum < target) {
                left ++;
            }

            else {
                right --;
            }

        }
    return {};
    }

};



// HashMap Approach O(1)

class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map; //number, index

        for(int i =0; i< nums.size(); ++i){  //O(N)
            int complement = target - nums[i];

            if(num_map.count(complement)){ //O(1)
                return {num_map[complement], i};
            }
        //if complemnet not found add the current number and its index to the map
            num_map[nums[i]] = i;

        }
        return {};
    }
};


