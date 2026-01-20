today we learn about the STL complete

first we learn about the List 
what is list
list is nothing but a doubly linked list which is not stored in contignous memory location. means that every value is stored different part of memory and connected using the point.
every node in list is consist of 3 components
 [value | prev | next]

it allow us to perform task from both side of list
 we can push_back
 we can push_front
 we can pop_back
 we can pop_front

 every action is possible from both side
 but there is one limmitation in it that is it can do random access.

 like in vector we can do  v[i]; or v.at[i].
 it list it is not possible due to pointer


 2nd we learn about the deque
 what is a deque
  
a deque is absolute same as list but only difference is that Implemented as multiple contiguous blocks

Similar to a vector but optimized at both ends

it is very good in every single peramerter 
 
 we can perform any action from both side of the deque 
 allow random access
 only middle inserction takes time.
 