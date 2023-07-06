class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for(int i = 0; i < grid.size();i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(grid[i][j] == '1') {
                    islands++;
                    recur(grid,i, j);
                }
                //cout << grid[i][j] <<  " ";
            }
        }
        return islands;
    }

    void recur(vector<vector<char>>& grid,int row, int col) {
        if(grid[row][col] == '1') {
            grid[row][col] = '0';
            
            if(row < grid.size() - 1) {
                recur(grid, row+1, col);
            }
            if( col < grid[0].size() -1) {
                recur(grid,row, col+1);    
            } 
            if( row - 1 >= 0) {
                recur(grid,row-1, col);
            } 
            if (col - 1 >= 0) {
                recur(grid, row, col-1);
            }
        }
    }
};
