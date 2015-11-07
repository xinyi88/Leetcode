/*
 Input: numbers = {2, 7, 11, 15}, target = 9
 Output: index1 = 1, index2 = 2

 Give a empty hash table.  Add an element if hash table can not find one equal
 to target - this element. If found one, then output the result.   
*/
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash;
	vector<int> res(2, 0);
	for (int i = 0; i < nums.size(); i++){
		if (hash.find(target - nums[i]) != hash.end()){
			res[0] = hash[target - nums[i]];
			res[1] = i + 1;
		}
		hash[nums[i]] = i + 1;
	}
	return res;
    }
