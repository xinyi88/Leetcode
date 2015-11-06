// 231 Power of Two
// Given an integer, write a function to determine if it is a power of two
// binary search
bool isPowerOfTwo(int n) {
	int start = 0, end = n;
	while(start < end){
		int middle = (end - start)/2 + start;
		if(middle * middle == n) return true;
		if(pow(middle, 2) > n) start = middle + 1;
		else end = middle - 1;
	}	
	return false;
	 
	}