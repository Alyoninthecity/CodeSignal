/**
Given a string s consisting of small English letters, find and return the first instance of a non-repeating character in it. If there is no such character, return '_'.

Example

For s = "abacabad", the output should be
firstNotRepeatingCharacter(s) = 'c'.

There are 2 non-repeating characters in the string: 'c' and 'd'. Return c since it appears in the string first.

For s = "abacabaabacaba", the output should be
firstNotRepeatingCharacter(s) = '_'.

There are no characters in this string that do not repeat.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string s

A string that contains only lowercase English letters.

Guaranteed constraints:
1 ≤ s.length ≤ 105.

[output] char

The first non-repeating character in s, or '_' if there are no characters that do not repeat.

*/
#include <string>
char solution(std::string s)
{
    int c[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        c[s[i] - 'a']++;
    }

    for (int j = 0; j < s.length(); j++)
    {
        if (c[(s[j] - 'a')] == 1)
        {
            return s[j];
        }
    }
    return '_';
}
