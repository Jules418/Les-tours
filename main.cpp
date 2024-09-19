#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;


vector<string> split(string& s, const string delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        tokens.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    tokens.push_back(s);

    return tokens;
}

vector<int> getArg(int argc, char **argv) {
	vector<int> arg;
	if (argc == 2) {
		string s(argv[1]);
		vector<string> splitted_arg = split(s, " ");
		for (auto it : splitted_arg) {
			arg.push_back(std::atoi(it.c_str()));
		}
	}
	else {
		for (int i = 1; i < argc; i++) {
			arg.push_back(std::atoi(argv[i]));
		}
	}
	return arg;
}

void solve(vector<int>arg) {
	
}

int main(int argc, char **argv) {
	if (argc == 1)
		return 1;
	vector<int> arg = getArg(argc, argv);
	if (arg.size() % 4 != 0)
		return 1;
	
	
}