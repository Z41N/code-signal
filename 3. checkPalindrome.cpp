bool checkPalindrome(std::string array) {

std::string rarray;

for (int i = array.size()-1; i >= 0; i--) {
    rarray.push_back(array[i]);
}

return rarray == array;

}
