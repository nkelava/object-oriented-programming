#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string longest_substrings(const string, const string);

template<typename S, typename T>
void print(const S str, const T var) {
	cout << str << var << endl;
}

int main()
{
	string str = "SubRemainsSubstring", str2 = "Substring";
	/*string str = "abab", str2 = "cdcdcd";*/
	/*string str = "SubRemainsSubstring", str2 = "";*/

	print("String 1: ", str);
	print("String 2: ", str2);

	auto longest = longest_substrings;

	print("\nLongest substring: ", longest(str, str2));

	return 0;
}


string longest_substrings(const string str1, const string str2)
{
	if (str1.empty() || str2.empty()) return "There is no common substring.";

	string longest = "";

	// The idea is to go through string 1, build substrings gradually and check whether they appear in the other string
	// if one does, check whether it is longer than the previous substring; if none is found, longest stays empty
	//e.g. string -> s, st, str, stri, strin, string, t, tr, tri, ... 
	int str1Len = str1.length();
	for (int i = 0; i < str1Len; i++) {
		int firstPos = str2.find(str1[i], 0);

		while (firstPos != string::npos) {
			string temp = "";
			temp += str1[i];
			int str2Len = str2.length();

			for (int j = firstPos + 1; j < str2Len; j++) {
				temp += str2[j];
				int secPos = str1.find(temp, 0);

				if (secPos != string::npos) { 
					if (temp.length() > longest.length()) {
						longest = temp;
					}
					continue;
				}
				//break to avoid needless further substrings (if there is no abd, there won't be abdc either)
				break;
			}
			firstPos = str2.find(str1[i], firstPos + 1);
		}
	}
	return (longest.length() != 0) ? longest : "There is no common substring.";
}