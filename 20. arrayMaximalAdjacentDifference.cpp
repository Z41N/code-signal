int arrayMaximalAdjacentDifference(std::vector<int> array) {
    
    int mad = 0;
    
    for (int i = 0; i < array.size()-1; i++) 
    {
        if (abs(array[i] - array[i+1]) > mad)
            mad = abs(array[i] - array[i+1]);
    }
    
    return mad;
}
