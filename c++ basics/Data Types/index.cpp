/* In C++, data types specify the type of data that a variable can hold. Each data type has a specific range of values and operations that can be performed on it. Here are some commonly used data types in C++: 

1.Primitive Data Types:
int: Represents integer values.
float: Represents floating-point numbers with single precision.
double: Represents floating-point numbers with double precision.
char: Represents a single character.
bool: Represents boolean values (true or false).

example shown here
*/

#include<iostream>
int main(){
    int age = 25;
    float temperature = 104.1;
    double pi = 3.14159;
    char grade = 'A' ;//Char as a value o 8 bits i.e 1 byte and it can store only 1 character by default in order to store a complete name or a word we have to use string
    bool status = true;
}

/*
2. Modifier Data Types:
unsigned: Used with integer types to represent non-negative values only.
long: Extends the range of integer types.
short: Reduces the range of integer types.
*/
#include<iostream>
int main(){
    unsigned int count = 10; //stores only positive value why do we need it ? lets say we need to store the age of a person in a variable we can use unsgined int as users age cannot be in negative

    signed int number = 377; //its  the opposite of unsigned int signed only stores positive numbers by default when we initialize an integrer its signed 

    // before knowing about long int , long long int, short int, we need to know the range 

    /*
    the size of integers is compiler dependent we will be using the data of mingw

    convert bits to bytes 1byte = 8bits henmce bits = byte X 8

    int :- consits of 4 bytes i.e 32bits

    long int :- consits of 4 bytes or 8 bytes (depending on system) i.e 32 or 64bits
    
    long long int :- consits of 8 bytes i.e 64bits 

    short int :- consists of 2 bytes i.e 16bits i


    Now lets learn the range of signed and unsigined 

    calculate the range of signed integers

    range of signed int is -2^(bits -1) to 2^(bits-1)-1

    range of unsigned int is 0 to 2^n-1

    lets calculate now 

    SIGNED INTEGRES

    size of signed int = -2^(32-1) to 2^(32-1)-1 = -2147483648 to 2147483647.

    size of signed long int = -2(32-1) to 2^(32-1)-1 = -2147483648 to 2147483647

    size of signed long long int = -2(64-1) to 2^(64-1)-1 =  -9223372036854775808 to 9223372036854775807.

    size of signed short int = -2(16-1) to 2^(16-1)-1 =  -32768 to 32767

    UNSIGNED INTEGRES

    size of unsigned int = 0 to 2^(32)-1 =  0 to 4294967295.

    size of signed long int = 0 to 2^(32)-1 =  0 to 4294967295.

    size of signed long long int = 0 to 2^(64)-1 =  -9223372036854775808 to 9223372036854775807.

    size of signed short int = 0 to 2^(16)-1 =  0 to 65535.
    */ 

   long int someNum = 124558;
   long long int something = 673875;
   short int anotherSmolNumber = 69;

}
