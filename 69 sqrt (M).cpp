int mySqrt(int x){
	int start = 0, end = x; 
	while (start < end){
		int middle = (end - start) / 2 + start;
		if (middle * middle == x) return middle;
		if (pow(middle,2) <= x) start = middle + 1;
		else end = middle - 1;		
	}
	return start * start > x ? start -1: start;
}
