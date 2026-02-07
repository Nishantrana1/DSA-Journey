Day 1


what is recursion>
well in simple word when a fucntion call itsself directly or indirectly to perform task same as loop 

to calculate the time complexity of recursion we need to do is 
There are two ways

1. Recurrence Relation
2. TC= total number of recursion call * Work done in every call.

For the space complexity There are always two methods

1. SC= depth of the Rec tree * mem in each cell
2. SC= hight of the call stack * memory in each cell.

Day 2 and today we study about the stack call that teaches how the stack call work in a recurstion function

Day 4
today i learn about the fabonacci series of number and solve a leetcode question (509)

if(n==0||n==1){
        return n;
    }
    return fab(n-1)+fab(n-2);

    we use this code for this

    for calcuation the time complexity we use simple formula

TC= number of call * work done in each call

if n=4
first pass the base case if(n==0||n==1)
direct call to n=3 and n=2

for n=3 to give call to n=2 and n=1

and for n=2 it give call to n=1 and n=0

 at end which hit base case that will return the case case n value and goes backtracking

 it end with nth term value .
 

 day 5 

 today we did this question in which we enter the value of n and then it will print all the binary number of n lenght

 void generateBinary(int index, int n, string &curr) {
    if (index == n) {
        cout << curr << endl;
        return;
    }

    curr.push_back('0');
    generateBinary(index + 1, n, curr);
    curr.pop_back();

    curr.push_back('1');
    generateBinary(index + 1, n, curr);
    curr.pop_back();
}


This program generates all binary strings of a fixed length using recursion and backtracking. Think of the string as being built **one position at a time from left to right**. At each position (`index`), the function has only two choices: put `0` or put `1`. The function `generateBinary` keeps a string `curr` that represents the part of the binary string we have built so far. When `index` becomes equal to `n`, it means the string has reached the required length, so the program prints `curr` and returns.

The idea of backtracking comes from how choices are made and undone. First, the function adds `'0'` to the string and calls itself to fill the next position. When that recursive call finishes, the last character is removed using `pop_back()`. This step is important because it **undoes the previous choice**, allowing the function to try a different option. After removing `'0'`, the function adds `'1'` and again moves forward recursively. This same process repeats for every position in the string.

By always making a choice, going deeper, and then undoing that choice, the function explores **all possible combinations** of `0` and `1`. Because each position has exactly two choices and the recursion stops exactly when the string length becomes `n`, every valid binary string of length `n` is generated once. In short, the program systematically tries every possible path, and backtracking ensures no choice affects the next one permanently.




