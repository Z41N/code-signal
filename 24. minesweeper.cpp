std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> grid) {
    int n = grid.size();
    int m = grid[0].size();
    int fx[] = {-1,-1,-1,0,1,1,1,0};
    int fy[] = {-1,0,1,1,1,0,-1,-1};
    vector<vector<int> > ret(n, vector<int>(m, 0));
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
        {
            int sum = 0;
            for(int k = 0; k<8; k++)
            {
                int x = i + fx[k];
                int y = j + fy[k];
                if(x < n && x > -1 && y < m && y > -1 && grid[x][y]==true) sum++;
            }
            ret[i][j] = sum;
        }
    return ret;
}
