'''
Given a string, find out if its characters can be rearranged to form a palindrome.

Example

For inputString = "aabb", the output should be
solution(inputString) = true.

We can rearrange "aabb" to make "abba", which is a palindrome.

Input/Output

[execution time limit] 4 seconds (py3)

[input] string inputString

A string consisting of lowercase English letters.

Guaranteed constraints:
1 ≤ inputString.length ≤ 50.

[output] boolean

true if the characters of the inputString can be rearranged to form a palindrome, false otherwise.
'''
def solution(inputString):
    alph = [0]*26
    odd = 0
    for i in range(0,len(inputString)):
        alph[ord(inputString[i])-ord('a')]+=1
    for i in range(0,len(alph)):
        if(alph[i]%2 != 0):
            odd+=1
            if(odd>1):
                return False
    return True
