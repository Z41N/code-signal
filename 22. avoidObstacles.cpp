int avoidObstacles(std::vector<int> array) {
    
    std::sort(array.begin(), array.end());
    for (int i = 2; i < array.size(); i++) {
        for (int j = 0; j < array.size(); j++) {
            if (array[j] % i == 0)
                break;
            if (array.size() - 1 == j)
                return i;
        }
    }
}
