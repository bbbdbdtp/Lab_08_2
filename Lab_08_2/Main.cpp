#include <iostream>
#include <string>
using namespace std;

string Find(const string s) {
    size_t start = 0;
    while ((start = s.find_first_not_of(' ', start)) != string::npos) {
        size_t end = s.find(' ', start);
        if (end == string::npos)
            end = s.length();
        string word = s.substr(start, end - start);
        if (!word.empty() && word[0] == 'a')
            return word;
        start = end;
    }
    return "";
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    string firstWord = Find(str);
    if (!firstWord.empty())
        cout << "First word starting with 'a': " << firstWord << endl;
    else
        cout << "No word starting with 'a' found." << endl;
    return 0;
}
