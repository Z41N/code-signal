int arrayChange(std::vector<int> array) {
int answer = 0;

for (int i = 1; i < array.size(); i++) {
	if (array[i] <= array[i-1]) {
		answer += array[i-1] - array[i] + 1;
		array[i] += array[i-1] - array[i] + 1;
	}
}

return answer;
}
