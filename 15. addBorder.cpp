std::vector<std::string> addBorder(std::vector<std::string> array) {

std::vector<std::string> answer;
std::string asterisks;

for (int i = 0; i < array.size(); i++) {
    array[i].insert(0, "*");
    array[i].append("*");
    answer.push_back(array[i]);
}

for (int i = 0; i < array[0].size(); i++) {
    asterisks += "*";
}

answer.insert(answer.begin(), asterisks);
answer.push_back(asterisks);

return answer;


}
