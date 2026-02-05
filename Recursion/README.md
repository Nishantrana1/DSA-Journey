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


