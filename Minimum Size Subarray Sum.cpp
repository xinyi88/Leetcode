class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
      int res = INT_MAX, start = 0, end = start;
	  int n = nums.size();
	  int sum = 0;
	  while(end < n){
		  sum += nums[end];
		  while( sum >= s){
			  res = min(res, end - start + 1);
			  sum -= nums[start];
			  start++;
		  }
		  end++;
	  }
	  return res == INT_MAX ? 0 : res;
    }
};