/*
 3sum closet
 Input: {-1, 2, 1, -4}, target = 1
 Output: 2 = -1 + 2 + 1;
*/
int threeSumClosest(vector<int>& nums, int target){
	
	sort(nums.begin(), nums.end());
	int res_p = INT_MAX, res_n = INT_MIN;
	int r,l,m = 0; // left, right, moving pointer
	while(m < nums.size()){
		r = m + 1;
		l = nums.size() - 1;
		while(r < l){
			int sum = nums[r] + nums[l] + nums[m] - target;
			if(sum > 0){
				l--;
				res_p = min(res_p, sum);
			}
			if(sum < 0) {
				r++;
				res_n = max(res_n, sum);
			}
			if(sum == 0) return target;
		}
		m++;
	}
	if(res_p == INT_MAX) return target + res_n;
	if(res_n == INT_MIN) return target + res_p;

	if(res_p > -res_n ) return target + res_n;
	else return target + res_p;
}