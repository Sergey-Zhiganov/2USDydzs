#include <iostream>
#include <string>
#include <algorithm>
#include <random>
using namespace std;

int main()
{
    char a;
    string b;
    cout << "Select one of the functions:\n1. The word is displayed backwards.\n2. Print a word without vowels.\n3. Print a word without consonants.\n4. Randomly scatter the letters of a given word.\nSelect: ";
    cin >> a;
    if (a != '1' && a != '2' && a != '3' && a != '4') {
        return 0;
    }
    cout << "Enter the word: ";
    cin >> b;
    switch (a)
    {
        case '1': {
            reverse(b.begin(), b.end());
            cout << "Result: " << b;
            return 0;
        };
        case '2': {
            string result;
            for (char ch : b)
            {
                if (tolower(ch) != 'a' && tolower(ch) != 'e' && tolower(ch) != 'i' && tolower(ch) != 'o' && tolower(ch) != 'u') {
                    result += ch;
                }
            }
            b = result;
        };
        case '3': {
            string result;
            for (char ch : b) {
                if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u' || !isalpha(ch)) {
                    result += ch;
                }
            }
            b = result;
        };
        case '4': {
            random_device rd;
            mt19937 generator(rd());
            shuffle(b.begin(), b.end(), generator);
        }
    }
    cout << "Result: " << b;
    return 0;
}
