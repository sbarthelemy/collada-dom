#include <cstdarg>
#include <dae/daeUtils.h>

using namespace std;

string cdom::replace(const string& s, const string& replace, const string& replaceWith) {
	if (replace.empty())
		return s;

	string result;
	size_t pos1 = 0, pos2 = s.find(replace);
	while (pos2 != string::npos) {
		result += s.substr(pos1, pos2-pos1);
		result += replaceWith;
		pos1 = pos2 + replace.length();
		pos2 = s.find(replace, pos1);
	}

	result += s.substr(pos1, s.length()-pos1);
	return result;
}

void cdom::tokenize(const string& s,
                    const string& separators,
                    /* out */ list<string>& tokens,
                    bool separatorsInResult) {
	size_t currentIndex = 0, nextTokenIndex = 0;
	while (currentIndex < s.length() &&
					 (nextTokenIndex = s.find_first_of(separators, currentIndex)) != string::npos) {
		if ((nextTokenIndex - currentIndex) > 0)
			tokens.push_back(s.substr(currentIndex, nextTokenIndex-currentIndex));
		if (separatorsInResult)
			tokens.push_back(string(1, s[nextTokenIndex]));
		currentIndex = nextTokenIndex+1;
	}

	if (currentIndex < s.length())
		tokens.push_back(s.substr(currentIndex, s.length()-currentIndex));
}

list<string> cdom::tokenize(const string& s,
                            const string& separators,
                            bool separatorsInResult) {
	list<string> result;
	tokenize(s, separators, result, separatorsInResult);
	return result;
}

vector<string> cdom::makeStringArray(const char* s, ...) {
	va_list args;
	va_start(args, s);
	vector<string> result;
	while (s) {
		result.push_back(s);
		s = va_arg(args, const char*);
	}
	va_end(args);
	return result;
}

list<string> cdom::makeStringList(const char* s, ...) {
	va_list args;
	va_start(args, s);
	list<string> result;
	while (s) {
		result.push_back(s);
		s = va_arg(args, const char*);
	}
	va_end(args);
	return result;
}
