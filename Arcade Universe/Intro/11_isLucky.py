'''
Ticket numbers usually consist of an even number of digits. A ticket number is considered lucky if the sum of the first half of the digits is equal to the sum of the second half.

Given a ticket number n, determine if it's lucky or not.

Example

For n = 1230, the output should be
solution(n) = true;
For n = 239017, the output should be
solution(n) = false.
Input/Output

[execution time limit] 4 seconds (py3)

[input] integer n

A ticket number represented as a positive integer with an even number of digits.

Guaranteed constraints:
10 ≤ n < 106.

[output] boolean

true if n is a lucky ticket number, false otherwise.
'''


def solution(n):
    digits = [int(digit) for digit in str(n)]
    a = 0
    b = 0
    for i in range(0, int(len(digits)/2)):
        a += digits[i]
        b += digits[i+int(len(digits)/2)]
    if a == b:
        return True
    else:
        return False
