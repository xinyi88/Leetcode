class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // merge nums2 to nums1 as one sorted array
		if(n == 0) return;
		if(m == 0) nums1 = nums2;
		vector<int> res;
		if(nums2[n-1] < nums1[0]){
			res = nums2 + nums1;
		}
		if(nums1[m-1] < nums2[0]){
			res = nums1 + nums2;
		}
		// suppose it is in an ascending order.
		
		int i = 0, j = 0;
		while( i < m && j < n){
			if(nums1[i] < nums2[j]){
				res.push_back(nums1[i]);
				i++;
			}
			else if(nums1[i] > nums2[j]){
				res.push_back( nums2[j]);
				j++;
			}
			else{
				res.push_back(nums1[i]);
				res.push_back(nums2[j]);
				i++;
				j++;
			}
		}
		while( i < m ){
			res.push_back(nums1[i]);
			i++;
		}
		while( j < n ){
			res.push_back(nums2[j]);
			j++;
		}
		nums1 = res;
    }
};