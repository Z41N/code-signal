std::vector<int> alternatingSums(std::vector<int> a) {
    int group1 = 0;
    int group2 = 0;
    std::vector<int> answer;
    
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0)
            group1 += a[i];
        if (i % 2 != 0)
            group2 += a[i];
    }
    
    answer.push_back(group1);
    answer.push_back(group2);
    
    return answer;
    
}
