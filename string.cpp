#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;
    return 0;
}

// s1.append(s2) -- this appends s2 at the end of s1
// str[index] -- this returns the character at the given index
// str.clear() -- clears the string
// str2.compare(str1) -- compares two strings and returns int value
// str.empty() -- checks if the string is empty
// str.erase(start_index, no_of_char) -- erases specified characters
// str.find(substring) -- checks whether present and returns index
// str.insert(index, substring)-- inserts substring a
// str.length() or str.size() -- length of string
// str.substr(start_index, no_of_char) -- substring from given string
// int n = stoi(str) -- string to integer
// string str = to_string(int_n) -- integer to string
// sort(str.begin(), str.end()) -- sorts a string
// first import#include <algorithm>
