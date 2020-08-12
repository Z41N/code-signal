std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {

std::vector<std::string> a2;
int x = 0;
for (int i = 0; i < inputArray.size(); i++) {
    if (inputArray[i].size() > x ) {
        x = inputArray[i].size();
    }
}

for (int i = 0; i < inputArray.size(); i++) {
    if (inputArray[i].size() == x)
        a2.push_back(inputArray[i]);
}

return a2;

}
