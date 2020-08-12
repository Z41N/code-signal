bool almostIncreasingSequence(std::vector<int> sequence) {
    
    for (int i = 0; i < sequence.size()-1; i++) {
        if (sequence[i] >= sequence[i+1]) {
            if (sequence[i-1] < sequence[i+1])
                sequence.erase(sequence.begin() + i);
            else
                sequence.erase(sequence.begin() + (i+1));
                break;
        }
    }
    
    for (int i = 0; i < sequence.size()-1; i++) {
        if (sequence[i] >= sequence[i+1])
            return false;
    }
    
    return true;
    
}
