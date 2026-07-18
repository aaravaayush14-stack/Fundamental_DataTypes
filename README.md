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
CHAPTER 4.5 :
Unsigned integers are integers that can only hold non-negative whole numbers. We use the 'unsigned' keyword to use unsigned
integers, doubles, etc. Unsigned integers can store more "positive numbers" without taking up extra memory.

Here, overflow doesn't have "Undefined Behaviour", but just divides the number by the (biggest size + 1) and returns the
remainder. Example: An unsigned 8 bit int stores values from 0 to 255 (biggest size). You try to store 275 in it, which is
>255. Therefore divide 275/255 which gives remainder 20, and this 20 is stored in the variable. This is called modulo wrap-around.
If you type in 0; 0 will be stored. If you type in '-1'; 255 will be stored. If you type '-2'; 254 will be stored. And so
on.......

Problems with unsigned integers:
1. First, with signed values, it takes a little work to accidentally overflow the top or bottom of the range because those values are far from 0. With unsigned numbers, it is much easier to overflow the bottom of the range, because the bottom of the range is 0, which is close to where the majority of our values are. (Take an eg: if you subtract 2-3, this gives -1, but all unsigned integers start with 0 to some power of 2 depending on bits ((2^n)-1), so it will modulo warp-around and will give unexpected results.)
2. Second, and more insidiously, unexpected behavior can result when you mix signed and unsigned integers. In C++, if a mathematical operation (e.g. arithmetic or comparison) has one signed integer and one unsigned integer, the signed integer will usually be converted to an unsigned integer. And the result will thus be unsigned. (This is one more place where it would be irritating to get these modulo warp-around values.)

 Avoid mixing signed and unsigned numbers. 
 There might be some places though where these unsigned integers are required:
 1. Unsigned numbers are preferred when dealing with bit manipulation. They are also useful when well-defined wrap-around     behavior is required (useful in some algorithms like encryption and random number generation).
 2. use of unsigned numbers is still unavoidable in some cases, mainly those having to do with array indexing. We’ll talk     more about this in the lessons on arrays and array indexing.
 3. Use in embedded systems like Arduino.
****************************************************************************************************************************
