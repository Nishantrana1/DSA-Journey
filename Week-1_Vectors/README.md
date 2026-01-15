till now we learn about the Vectors Datatype (Dynamic Array) 
it change size aboutmatically
we don't need to specify it's capacity it arrange it's self time to time with every incersion.


and we read about the vector function

1. size    vec.size()  use to find the size( number of element in the array)
2. push_back     vec.push_back(Value)   use to add element at the end of array
2. pop_back     vec.pop_back()   use to remove the end element form array
3. first      vec.first()     shows the very first element of the array
4. last     vec.last()         shows the last element of the array
5. at       vec.at(i)         use to insert the elemt at index value(i)



and we learn about the Staic and Dynamic memory alloaction in the Vectors


 static means that memory is alloacted at the compile time of the program 
 example  int arr[5]={1,2,3,4,5,5};


 Dynamic means the memory is alloacted at the run time of the program 
 example vector<int> vec;
 vec.push_back(12);



 we learn about the  basic difference between the size and Capacity of the vector

 size means how many number of element are present in the vector

 capacity means how much can be inserted inside it 

 if the size==capacity and we want to insert a new element then we add normal way but capacity double its size;


We Learn about the max sub array of a array 
 
 a subarray is the possible out come of the array 

 the total subarray formaula   = n*(n+1)/2
 example if a array is {1,2,3,4,5} then its sub array is 
 1 12 123 1234 12345 
 2 23 234 2345 
 3 34 345 
 4 45 
 5

 we try give me Kadane's Algorithm 
 i don't fully understand it right now but i start a bit understanding it
 

 we learn about eh kadane algorithm 
 how does it work and why it is different

 first it is used to find the maxsum of an subarray by 0(n) time complexity 
 insteed of using nested loop we use a single loop and use a condition that state that when sum of an subarray goes <0 then reset the currentsum 
 and try with next element don't include that past  elements


 just solve the 3rd problem related to arrays and now moving towords the Strings
 

today we Learn about the pair sum and majority element that is a important step for slow updating.



today we learn about the function of <algorithm> and solve a problem
the function i learn are following 
1. sort(v.begin(),v.end()); for ascending order    
2. sort(v.begin(),v.end(),greater<int>()); descending order
3. *max_element(v.begin(),v.end());  for finding the largest number from an array
4. *max_element(v.begin(),v.end());  for finding the smallest number from the array
5. reverse(v.begin(),v.end()); for reverse the entire array
6. bool found=binary_search(v.begin(),v.end()); for binary search

and i solve a leetcode problem #1431 

in few day i will start string which is one of the very important topic to learn.

