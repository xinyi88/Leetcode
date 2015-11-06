// 231 Power of Two
// Given an integer, write a function to determine if it is a power of two
// 1, 2, 4, 8,
bool isPowerOfTwo(int n) {
		if(n <= 0) return false;
		if(n == 1)return true;
		
		int tmp = n;
		int n_bit = 1;
		while(tmp){
			n_bit = n_bit << 1;
			if(n_bit == n) return true;
			tmp /= 2;
		}
		return false;
	}