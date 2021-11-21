/*
Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

Example

For inputArray = [3, 6, -2, -5, 7, 3], the output should be
adjacentElementsProduct(inputArray) = 21.

7 and 3 produce the largest product.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer inputArray

An array of integers containing at least two elements.

Guaranteed constraints:
2 ≤ inputArray.length ≤ 10,
-1000 ≤ inputArray[i] ≤ 1000.

[output] integer

The largest product of adjacent elements.
*/
#include <vector>
int adjacentElementsProduct(std::vector<int> inputArray)
{
    int max = 0;
    if (inputArray.size() > 1)
    {
        max = inputArray[0] * inputArray[1];
    }
    else
    {
        max = inputArray[0];
    }
    for (int i = 0; i < inputArray.size() - 1; i++)
    {
        int p = inputArray[i] * inputArray[i + 1];
        if (p > max)
        {
            max = p;
        }
    }
    return max;
}
