std::vector<int> arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for (int i = 0; i < inputArray.size(); i++) {
        if (inputArray[i] == elemToReplace) {
            std::replace(inputArray.begin(), inputArray.end(), elemToReplace, substitutionElem);
        }
    }
    
    return inputArray;
}
