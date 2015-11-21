class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        // Dynamic Programming
		 // Dynamic Programming
		int row = grid.size();
		int col = grid[0].size();
		if(row == 1 && col == 1) return grid[0][0];
		
		vector<vector<int>> res(row, vector<int>(col,0));
		res[0][0] = grid[0][0];
		for(int i = 1; i < row; i++) res[i][0] = grid[i][0] + res[i-1][0] ;
		for(int j = 1; j < col; j++) res[0][j] = grid[0][j] + res[0][j-1];
		
		for(int i = 1; i < row; i++)
			for(int j = 1; j < col; j++){
				res[i][j] = min(res[i-1][j] + grid[i][j], res[i][j-1] + grid[i][j]);
		}
		return res[row-1][col-1];
    }
};