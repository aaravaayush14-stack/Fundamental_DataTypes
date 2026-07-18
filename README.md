The structure of codes will be like: 
I'll type in the main() code under the specific files and just comment them out. If you want to use that code, just copy
it and use it under the main.cpp file.
****************************************************************************************************************************
CHAPTER 4.1 :
1. float/double/long double- Used for floating point precision
2. bool- Used for boolean logic, true/false
3. char/wchar_t/char8_t/char16_t/char32_t- Is used for single character values
4. short int/int/long int/ long long int- Is used for integer
5. std::nullptr_t - Used for null pointer
6. void - Void (No type)

The term “built-in type” is most often used as a synonym for the fundamental data types. Strings are not included in these
as they are included in the "standard library".
Also, the '_t' suffix is just used to tell us that it is a data type.
****************************************************************************************************************************
CHAPTER 4.2 :
In this chapter we talk about the void data type. It is basically the data type which has no value (emptiness! XD). We have
already used functions with void data type in the previous lessons, so understanding it wouldn't be hectic. Also, in the
functions you don't require arguments, you can just simply type out "void function(void)" for the no parameter function or
you can just type in "void function()", which works the same.
It has 3 basic uses:
1. No-value returning function
2. The no parameter function (example above)
3. void pointers (advanced, in future lessons)
****************************************************************************************************************************
CHAPTER 4.3 :
A single object may use 1, 2, 4, 8, or even more consecutive memory addresses. The amount of memory that an object uses is
based on its data type.

1. An object must occupy 'atleast' 1 byte. A byte must be atleast 8 bits.
2. The integral types char, short, int, long, and long long have a minimum size of 8, 16, 16, 32, and 64 bits respectively.
3. char and char8_t are exactly 1 byte (8 bits minimum)

For maximum portability, you shouldn’t assume that objects are larger than the specified minimum size.
Alternatively, if you want to assume that a type has some non-minimum size (e.g. that an int is at least 4 bytes), you
can use static_assert to have the compiler fail a build if it is compiled on an architecture where this assumption is 
not true.
sizeof() of an incomplete type like void, results in a compiler error. sizeof() does not include dynamically allocated
memory used by an object. We discuss dynamic memory allocation in a future lesson.
****************************************************************************************************************************
CHAPTER 4.4 :
Concepts of signed integers:
By default, integers in C++ are signed, which means the number’s sign is stored as part of the value. Therefore, a signed 
integer can hold both positive and negative numbers (and 0). The integers are however, already signed; so you don't actually
need to use the 'signed' keyword with them. 

Concept of Overflow: Say you have a 8-bit integer. It has a range of -128<->127. If you assign a value say '140' to it, 
it would just overflow and the output will be "Undefined behaviour" (Any of the outputs, wrong, right, etc, anything!).
Overflow results in information being lost. 

Concept of integer divisions (eg: 8/5 results in 1; when both 8 and 5 are integers). The fractional part, even if it's 0.9
will just get dropped off. Also, -8/5 would result in -1.6 but .6 is dropped so the answer is -1.
****************************************************************************************************************************
