/**
Below we will define an n-interesting polygon. Your task is to find the area of a polygon for a given n.

A 1-interesting polygon is just a square with a side of length 1. An n-interesting polygon is obtained by taking the n - 1-interesting polygon and appending 1-interesting polygons to its rim, side by side. You can see the 1-, 2-, 3- and 4-interesting polygons in the picture below.



Example

For n = 2, the output should be
shapeArea(n) = 5;
For n = 3, the output should be
shapeArea(n) = 13.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

Guaranteed constraints:
1 ≤ n < 104.

[output] integer

The area of the n-interesting polygon.

*/

//BruteForce Solution
int shapeArea(int n)
{
    int s = 1;
    int r = 1;
    int t = 0;
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            t = s + 2;
            r = r + r;
            r = r + t;
        }
        else
        {
            s = s + 2;
            r = r + s;
        }
    }
    return r;
}

//Mathematical Concepts
int shapeArea(int n)
{
    return n * n + (n - 1) * (n - 1);
}