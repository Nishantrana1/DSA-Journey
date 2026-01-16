this folder contain only about the strings.

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

