/*
 15 3sum Medium
 Input: {-1 0 1 2 -1 -4}
 Output: (-1 0 1), (-1 -1 2)
 
 Three pointer: one is start, one is end, one is moving in the middle
*/
vector<vector<int>> threeSum(vector<int>& nums) {
	if(nums.size() < 3) return {};
	sort(nums.begin(), nums.end());
  

	vector<vector<int>> res;
	int r, l, m = 0; // left, right, moving point
	while( m < nums.size() && nums[m] < 0 ){
		l = m + 1;
		r = nums.size() - 1;
		while(l < r){
			int sum = nums[l] + nums[r] + nums[m];
			if(sum > 0){
				r--;
				while(r - 1 >= 0 && nums[r] == nums[r - 1]) r--;
			}
			else if(sum < 0){
				l++;
				while( l + 1 < nums.size() && nums[l] == nums[l + 1]) l++;
			}
			else{
				res.push_back({nums[m], nums[l], nums[r]});
				r--;
				while(r - 1 >= 0 && nums[r] == nums[r - 1]) r--;
				l++;
				while( l + 1 < nums.size() && nums[l] == nums[l + 1]) l++;
			}
		}
		m++;
		while( m + 1 < nums.size() && nums[m] == nums[m - 1]) m++;
	}
	
	return res;
}