std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> m) {
    vector<vector<int>> a(m.size()-2,vector<int>(m[0].size()-2));
    for(int i = 0; i < a.size(); ++i)
        for(int j = 0; j < a[0].size(); ++j)
        {
            for(int r = 0; r < 3; ++r)
                for(int c = 0; c < 3; ++c)
                    a[i][j] += m[i+r][j+c];
            a[i][j] /= 9;
        }
    return a;
}
