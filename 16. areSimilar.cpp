bool areSimilar(std::vector<int> a, std::vector<int> b) {
int counter = 0;

for (int i = 0; i < a.size(); i++) {
	if (a[i] != b[i])
		counter++;
}

if (counter > 2)
	return false;

std::sort(a.begin(), a.end());
std::sort(b.begin(), b.end());


for (int i = 0; i < a.size(); i++) {
	if (a[i] != b[i])
		return false;
}

return true;
}
