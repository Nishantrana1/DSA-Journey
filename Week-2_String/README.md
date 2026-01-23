this folder contain only about the strings.
Day 1:-
first we learnd about the character array 
what is a character array
just like normal array , character array is used to store the character in a array but these can be use as variable

every character array shout end with \0 if it is done in manual 
example char str ={'a','b','c'}; this is a normal character array with not ending with \0 so the compiler don't know where the string is ended

char str ={'a','b','c','\0'}; this is correct version when cout hit \0 they know it is end of string

and for input of a string in character array we uses cin.getline(char,len,end!);
without this normal cin only take character before the space but it can take any of this.

now morst important part the String that requried #include <string>
 
 these string are dynamic in nature which means it can change it's value in run time .
 | Feature         | `char[]` | `std::string` |
| --------------- | -------- | ------------- |
| Memory          | Manual   | Automatic     |
| Null terminator | Required | Internal      |
| Resizable       | ❌        | ✅             |
| Length          | ❌        | ✅             |
| Safe            | ❌        | ✅             |
| Easy to use     | ❌        | ✅             |
| Modern C++      | ❌        | ✅             |


this is a baisc difference table between them.

there are multiple funtion of it 
and for input we use getline

example.    getline(cin,string_name);


Day 2:-
 today we learn about the function of strings and solve a leetcode problem(344);

 Funtions of strings are following:

1.  s.size(); 
    s.length(); // both used to find the size of string

2.  s[i]
    s.at[i] //use to access a character in string;

3.  s3=s1+s2; // use to merge two string or we can say that cancatenation

4. a.append(value); // insert charcter in the end of string.

5. s.insert(postion,element); // insert character at a index value;

6. s.clear() // use to clear the entire string.

7. s.empty() // it check if the string is empty or not . 0=empty , 1=nonempty.

8. s.erase(postion,lenght); // it remove multiple charcater from the postion we provide.

9. s.pop_back(); // remove the last element of the character.

10. s1.compare(s2); // it compare two strings 
                    0= both are same, <0 means s1<s2, >0 means s1>s2.

11. s.substring(postion,length); remember the last digit of lenght is not include if it end on a character which means it will not include.

12. s.find("text") // used to find the text and it sill print the index value of it's first occurence.


 in the day 2 end just solve leetcode problem(125) and learn about some code.
 today i done chacking palandrome code.
 

Day 3 
just create a remove occurence code in which a big string is given and a small string is given we mush remove all the occurence from the big string and return what left behind.

just solve a leetcode problem 1910
and try to solve 217 number problem but failed due to time expiry , it need optimized code which require hashmaping (i don't know hahahaha);

but i learn something creazy today

there are some creazy datatype that used for specific purposes
1. size_t n=s.size(); // it can store big value and index value and only postive value good for address, index, size etx
2. auto n=10; //compiler mind it detect automatically what is best for this variable;
3. string:npos; // don't kknow much about this but it's meaning is "not found"


Day 4 update.

////

day 4 complete with 1 dsa leetcode problem(151)

in this problem i learn a lot of thing 
first i learn about how we can use multiple loop and still key linear time complexty
second we learn about how to reverse a string but the individual word is still same 
example s="hello word"
in reverse sting we get = "dorw olleh"
but in this we get "word hello"

how we achive this OK first we done is reverse the full sting 

we get "dorw olleh"

after that we run a loop until we get first space and store all the value in a new string

new string = "dorw" after that we reverse this new string again 

new string = "word"
and at the end we add all this answer in a new string word by word

but all this is happened in a single loop 
but we use a nested loop inside this with same variable that main loop used


day 5 update 
today i solve problem (443)
 
 this problem is string compression 
 means we have to reduce a string in a way that it cover less space in memory

 how can we do this there are multiple way to do this

 first is 

 if a character is repecting multiple time then we store that character and the number of time it is repeting

 example  vector<char> chars={'a','a','a','b','b'};
 in this a is 3 times and b is 2 time so we can write 

 a 3 b 2  this 
 so it is compressed form 

 