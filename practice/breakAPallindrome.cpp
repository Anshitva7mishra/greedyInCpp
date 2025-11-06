#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string breakAPallindrome(string palindrome)
{
    int n = palindrome.size();
    if (n == 1)
        return "";
    for (int i = 0; i < n / 2; i++)
    {
        if (palindrome[i] != 'a'){
            palindrome[i] = 'a';
            return palindrome;
        }
    }
    palindrome[n - 1] = 'b';
    return palindrome;
}
int main()
{
    string s;
    cout << "Enter pallindrome string: ";
    cin >> s;
    cout << "The answer is: " << breakAPallindrome(s);
}
