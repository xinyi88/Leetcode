/*
 15 3sum Medium
 Input: {-1 0 1 2 -1 -4}
 Output: (-1 0 1), (-1 -1 2)
*/
vector<vector<int>> threeSum(vector<int>& nums) {
	if(nums.size() < 3) return {};
	sort(nums.begin(), nums.end());
  
	vector<int> neg, pos;
	bool flag = false;
	
	for(int i = 0; i < nums.size(); i++){
		if(nums[i] < 0) neg.push_back(-nums[i]);
		else if(nums[i] == 0) flag = true;
        else pos.push_back(nums[i]);		
	}
	
}