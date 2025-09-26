#include <stdio.h>
int main()
{
// single line comments: compiler will ignore this

/*
this is a multi 
line
comment
*/
// int,float,char
int a1=7;//2 to 4 bytes
unsigned short integer = 8; //2 bytes
long integer1 = 8; //4 bytes
short integer2 = 8; //2 bytes

float b1 = 8.0; //4 bytes - 6 decimal places precision
double myfloat1 = 7.45; // 8 bytes - 15 decimal places precision
long double myfloat2 = 7.453526625; //10 bytes - 19 decimal places precision

char c1 = 't'; //1 byte
printf("hello %c",c1);

printf("the size taken by int is %d\n",sizeof(int));
printf("the size taken by  unsigned int is %d\n",sizeof( unsigned int));
printf("the size taken by float is %d\n",sizeof(float));
printf("the size taken by double is %d\n",sizeof(double));
printf("the size taken by long double is %d\n",sizeof(long double));

printf("\n******rules for creating variables******");
int harryName; // this is variable declaration
harryName = 76; // this is variable intialization
char five = '5'; //this is variable intialization and declaration

const int i = 9;
//i = 10;
harryName = 98;


printf("\n\n******types of operator in c******");

/*
Arithmetic Operators
Relational  Operators
Logical Operators
Assignment Operators
Bitwise Operators
misc operators
*/
// arithmetic operators
int a = 6, b = 7, c = 8;
printf("the sum of a  and b is %d\n",a+b);
printf("the difference of a  and b is %d\n",a-b);
printf("the multiplication of a  and b is %d\n",a*b);
printf("the division of a  and b is %d\n",a/b);
printf("the modulo of a  and b is %d\n",a%b);
printf("the increment of a   is %d\n",++a);
printf("the decrement of a  is %d\n",--b);

// relational operators
int harry = 9 , rohan = 45;
printf("%d\n", harry!=rohan);
printf("%d\n", harry==rohan);
printf("%d\n", harry<rohan);
printf("%d\n", harry>rohan);

// logical operators
int h = 0, j=1;
printf("the logical operator returned %d\n", h&&j);
printf("the logical operator returned %d\n", h||j);
printf("the logical operator returned %d\n", !j);
printf("the logical operator returned %d\n", !h);

// bitwise operators
// A = 60 B=13
//A = 00111100
//B = 00001101
// R = 00001100
int A = 60, B = 14;
printf("bitwise operator returned %d\n", A&B);
printf("bitwise operator returned %d\n", A|B);
printf("bitwise operator returned %d\n", A^B);
printf("bitwise operator returned %d\n", -B);
printf("bitwise operator returned %d\n", A<<B);
printf("bitwise operator returned %d\n", A>>B);


//assignment operators
// =, +=,-=,*=,%=,etc
int ha = 9;
ha +=9;
printf("ha is %d\n",ha);

// misc operators - &,*,?:


printf("\n\n******taking input from user in c******");
int harryInput;
printf("\n please enter the value of harryInput");
// scanf("%d", &harryInput);
// printf("\n you entered %f as harryInput", (float) harryInput);

// int num1, num2;
// scanf("%d",&num1);
// scanf("%d",&num2);
// printf("\n num1/num2 is %f ", (float) num1/num2);


return 0;


}