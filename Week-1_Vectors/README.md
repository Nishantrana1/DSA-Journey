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
 