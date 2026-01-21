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
 

 day 2 with Stl and today we learn about the map

 what is map
 map is a stl datatype that store data in a index based table where it store it's key and that keypoint to a value

 like  map<string,int> m; in this string is key type and int is value type like  "phone" 100 

 a simple map is sorted it's self which means all the items in the map arranged my character in alphabets
 the  map only store one key for one value if same key appear again then it over write the existing value


 second we study about the multimap that fix the overwrite problem.
 it can store multiple same key values

 3rd we study about the unordered_map these are just like map but it store value as these are given 
 it don't have inbuild sort method
  so inserting a newelement take only O(1) because it just insert at the end of table 
  but in case of map it take 0(logn) because it has natural sort so it add and then sort again soo
  there is nothing we can dooo..............



  Day 3 guys

today we learn about somethings 
fist we learn about the Sets
what is set ?
set is container data structure that store only unique value, it has auto sorted propertly because i uses auto balance tree.
set are imutable so you can't not change it's value.
it take O(logn) for searching and inserting element due to it's sorting properties

else everything is just like map all the fucntion are same as map.

second we study about the unordered_set
same as set but it is unordered which simply means it store value as it comes.
 no sorting nature.
 and it is effective for insercting , serach and delection of element 
 it store elemnet in hash table.
 it take O(1) time for every action.
 