int adjacentElementsProduct(std::vector<int> inputArray) {

int max_sum = -999;
int current_sum;

for (int i=0; i < inputArray.size()-1; i++) {
    current_sum = inputArray[i] * inputArray[i+1];
    if (current_sum > max_sum)
        max_sum = current_sum;
}

return max_sum;

}
