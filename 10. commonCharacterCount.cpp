int commonCharacterCount(std::string s1, std::string s2) {
    
    int counter = 0;
    std::vector<int> used_indexes;
    
    for (int i = 0; i < s1.size(); i++) {
        for (int j = 0; j < s2.size(); j++) {
            bool k = std::find(used_indexes.begin(), used_indexes.end(), j) == used_indexes.end();
            if (s1[i] == s2[j] && k) {
                counter++;
                used_indexes.push_back(j);
                break;
            }
        }
    }

return counter;

}
