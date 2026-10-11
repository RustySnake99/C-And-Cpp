#include<iostream>
#include<string>

using namespace std;

bool is_palindrome(string s) {
    int l = s.size();
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - i - 1]) return false;
    }
    return true;
}

int main(int argc, char const *argv[]) {
    string str;

    cout << "Enter the string to check: ";
    getline(cin, str);

    (is_palindrome(str)) ? cout << "Entered string is palindrome" : cout << "Entered string is not palindrome.";
    
    return 0;
}
