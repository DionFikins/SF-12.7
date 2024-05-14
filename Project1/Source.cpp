#include <iostream>

using namespace std;

bool IsKPeriodic(string& text, int K) {
	if (K <= 0)
		return false;

	if (text.length() % K != 0)
		return false;

	for (int i = K; i < text.length(); i++)
		if (text[i] != text[i % K])
			return false;

	return true;
}

int main() {
	string text = "abcabcabcabc";
	int K = 3;

	if (IsKPeriodic(text, K))
		cout << "true: " << K << endl;
	else
		cout << "false: " << K << endl;

	return 0;
}