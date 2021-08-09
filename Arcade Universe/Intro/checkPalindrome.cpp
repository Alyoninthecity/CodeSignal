/**
Given the string, check if it is a palindrome.

Example

For inputString = "aabaa", the output should be
checkPalindrome(inputString) = true;
For inputString = "abac", the output should be
checkPalindrome(inputString) = false;
For inputString = "a", the output should be
checkPalindrome(inputString) = true.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

A non-empty string consisting of lowercase characters.

Guaranteed constraints:
1 ≤ inputString.length ≤ 105.

[output] boolean

true if inputString is a palindrome, false otherwise.

[C++] Syntax Tips

// Prints help message to the console
// Returns a string
string helloWorld(string name) {
    cout << "This prints to the console when you Run Tests" << endl;
    return "Hello, " + name;
}

*/

bool checkPalindrome(string inputString)
{
    int l = inputString.length();
    for (int i = 0; i < l / 2; i++)
    {
        if ((inputString.at(i)) != (inputString.at(l - 1 - i)))
        {
            return false;
        }
    }
    return true;
}
