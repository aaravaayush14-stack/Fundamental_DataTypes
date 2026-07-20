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
CHAPTER 4.6 :
Usually the width of a data type like int might not be fixed. For example: int could be 16 bits on 1 computer architecture while 32 bits on some other. In most cases, we only instantiate a small number of int variables at a time, and these are typically destroyed at the end of the function in which they are created. In such cases, wasting 2 bytes of memory per variable isn’t a concern. However, on bigger systems and programs, using millions of int values could significantly alter the program's memory usage.

Concept of Fixed_Width integers: You have to use "# include <cstdint>" to include these fixed width integers. You can use a fixed_width integer whenever you want to use integers of fixed size.
WARNING! The 8-bit fixed-width integer types are often treated like chars instead of integer values (and this may vary per system). The 16-bit and wider integral types are not subject to this issue.

Downsides of using fixed width integers:
1. The fixed-width integers are not guaranteed to be defined on all architectures. Your program will fail to compile on any such architecture that does not support a fixed-width integer that your program is using. This is unlikely to be a problem though unless your program needs to be portable to some exotic mainframe or embedded architectures.
2. If you use a fixed-width integer, it may be slower than a wider type on some architectures. For example, if you need an integer that is guaranteed to be 32-bits, you might decide to use std::int32_t, but your CPU might actually be faster at processing 64-bit integers.
Although these are very minor downsides and shouldn't bother you much.

Learn the concept of fast and least integral types.
std::int_fast#_t gives the signed int of atleast '#' size which is "fast"!
std::int_fast#_t gives the signed int of atleast '#' bits which is "least size"!

Downsides: First, not many programmers actually use them, and a lack of familiarity can lead to errors. Then the fast types can also lead to memory wastage, as their actual size may be significantly larger than indicated by their name.
Avoid the fast and least integral types because they may exhibit different behaviors on architectures where they resolve to different sizes.

std::size_t is an alias for an implementation-defined unsigned integral type. It is used within the standard library to represent the byte-size or length of objects. You have to include <cstddef> header on top of your file to use it.
The size of std::size_t imposes a strict mathematical upper limit on an object’s size. In practice, the largest creatable object may be smaller than this amount (perhaps significantly so).
****************************************************************************************************************************
LESSON 4.7 :
Scientific notation is a useful shorthand for writing lengthy numbers in a concise manner. Scientific notation is a useful shorthand for writing lengthy numbers in a concise manner. The more digits in the significand, the more precise a number is.
****************************************************************************************************************************
LESSON 4.8 :
Floating point data types: float (4 bytes), double (8 bytes), long double (8,12 or 16 bytes).
If you use 5.0 (It is most likely a double), if you use 5.0f (It definitely means float), and if you use 5.00f (for 2 decimal places precision). The precision of a floating point type defines how many significant digits it can represent without information loss.
A floating point type can only precisely represent a certain number of significant digits. Using a value with more significant digits than the minimum may result in the value being stored inexactly.

When outputting floating point numbers, std::cout has a default precision of 6 -- that is, it assumes all floating point variables are only significant to 6 digits (the minimum precision of a float), and hence it will truncate anything after that.

We can override the default precision that std::cout shows by using an output manipulator function named std::setprecision(). Output manipulators alter how data is output, and are defined in the <iomanip> header.

Output manipulators (and input manipulators) are sticky -- meaning if you set them, they will remain set.
The one exception is std::setw. Some IO operations reset std::setw, so std::setw should be used every time it is needed.
The precision is impacted for float in the std::setprecision(). Examples will be discussed in the code. It also causes errors for too many significant digits.

Floating point comparisions can be quite risky, specially in financial data as it doesn't store the exact value what is intended, due to rounding errors.
inf means infinity and NaN means 'Not a Number'. Avoid division by 0.0, even if your compiler supports it.
****************************************************************************************************************************
