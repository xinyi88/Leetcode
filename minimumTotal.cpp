 int minimumTotal(vector<vector<int>>& triangle) {
    int row = triangle.size();
	if (row == 1) return triangle[0][0];
	vector<int> res = triangle[row - 1];

	for (int i = row - 2; i > 0; i--)
		for (int k = 1; k <= i + 1; k++)
			res[k - 1] = min(res[k - 1], res[k]) + triangle[i][k - 1];

	return	min(res[0], res[1]) + triangle[0][0];
    }