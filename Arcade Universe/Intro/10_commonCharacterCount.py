'''
Given two strings, find the number of common characters between them.

Example

For s1 = "aabcc" and s2 = "adcaa", the output should be
solution(s1, s2) = 3.

Strings have 3 common characters - 2 "a"s and 1 "c".

Input/Output

[execution time limit] 4 seconds (py3)

[input] string s1

A string consisting of lowercase English letters.

Guaranteed constraints:
1 ≤ s1.length < 15.

[input] string s2

A string consisting of lowercase English letters.

Guaranteed constraints:
1 ≤ s2.length < 15.

[output] integer
'''


def solution(s1, s2):
    a1 = [0]*26
    a2 = [0]*26
    result = 0
    for letter in s1:
        a1[ord(letter)-ord('a')] += 1
    for letter in s2:
        a2[ord(letter)-ord('a')] += 1
    for i in range(0, 26):
        if(a1[i] != 0 and a2[i] != 0):
            result += min(a1[i], a2[i])
    return result
