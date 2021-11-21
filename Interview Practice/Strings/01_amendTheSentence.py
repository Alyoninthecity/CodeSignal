'''
You have been given a string s, which is supposed to be a sentence. However, someone forgot to put spaces between the different words, and for some reason they capitalized the first letter of every word. Return the sentence after making the following amendments:

Put a single space between the words.
Convert the uppercase letters to lowercase.
Example

For s = "CodesignalIsAwesome", the output should be
solution(s) = "codesignal is awesome";
For s = "Hello", the output should be
solution(s) = "hello".
Input/Output

[execution time limit] 4 seconds (py3)

[input] string s

A string containing uppercase and lowercase English letters.

Guaranteed constraints:
3 ≤ s.length ≤ 100.

[output] string

The amended sentence.
'''


def solution(s):
    res = ""
    for i in range(0, len(s)):
        if(s[i].isupper() and i != 0):
            res += ' '+s[i].lower()
        elif(s[i].isupper()):
            res += s[i].lower()
        else:
            res += s[i]
    return res
