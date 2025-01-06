/*
MD Rashedul Islam
Lab 5, Operators
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"\v------------- example 1: Modulus operator --------------"<<endl;
    //find the remainder of two numbers
    int n1 = 10;
    int n2 = 3;
    cout<<"The remainder of 10 divided by 3 is = "<< n1 % n2 <<endl;


    cout<<"\v------------- example 2: assignment operator --------------"<<endl;
    //increment operator
    cout<<"Original n1 =\t\t"<<n1<<endl;
    cout<<"n1 increment by 1 =\t"<<n1++<<endl;
    cout<<"after the increment =\t"<<n1<<endl;
    cout<<"Original n2 =\t\t"<<n2<<endl;
    cout<<"n2 increment by 1 =\t"<<++n2<<endl;
    cout<<"after the increment = \t"<<n2<<endl;
    cout<<"subtract 5 form n1 \t"<<(n1 -= 5)<<endl;
    cout<<"n1 after the subtraction =\t"<<n1<<endl;
    cout<<"n1 divided by n2 =\t"<< (n1 /=n2)<<endl;
    cout<<"update value n1 =\t"<<n1<<endl;
    cout<<"n2 modulus 3 = \t\t"<<( n2 %= 3)<<endl;
    cout<<"n2 after modulus =\t"<<n2<<endl;


    cout<<"\v------------- example 3: Comparison operator --------------"<<endl;
    int num1 = 5;
    int num2 = 2;
    int num3 = 5;
    cout<<"is num1 equal to num2? \t"<<(num1 == num2)<<endl;
    cout<<"is num1 equal to num3? \t"<<(num1 == num3)<<endl;
    cout<<"is num1 greater than num2? \t"<<(num1>num2)<<endl;
    cout<<"is num2 less than or equal to num3 \t"<<(num2<=num3)<<endl;
    cout<<"is num1 not equal to num3 =\t"<<(num1 !=num3)<<endl;

    cout<<"\v------------- example 4: Logical operator --------------"<<endl;
    bool check1 = num1>num3 || num1>num3 || num2>num3; //num1>num3=false || num1>num2=true ---> False || True = True
    cout<<"check1 =\t"<<check1<<endl;
    bool check2 = num1>num3 && num1>num3 && num2>num3; //num1>num3=false && num1>num2=true   num2>num3=false ---> False || True ||false = True
    cout<<"check2 =\t"<<check2<<endl;

    bool check3 = !check2; // !(false) = true
    cout<<"check2 = \t"<<check3<<endl;


    cout << "\v------------- example 5: Operations with character values --------------" << endl;
    char charSymbol = '$';
    charSymbol += 2; 
    cout << "The updated symbol = \t" << charSymbol << endl;

    cout << "\v------------- EXERCISE : --------------" << endl;

    // Declare variables
    int n;
    char symbol;

    // Collect a number and a character
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter a character: ";
    cin >> symbol;

    // Perform the operations
    n *= 3; // Triple the number
    int charRemainder = symbol % 60; // Remainder of the character value with 60

    bool isLessThanOrEqual = (n <= symbol);
    bool isNegativeOrNotFive = (n <= -1 || symbol != '5'); 
    bool isInRange = (symbol >= '0' && symbol <= '2'); 

    cout << "\tTriple the number\t\t\t" << n << endl;
    cout << "\tRemainder of the character\t\t" << charRemainder << endl;
    cout << "\tIs the number <= character value?\t" << isLessThanOrEqual << endl;
    cout << "\tIs the number <= -1 or character value != '5'?\t" << isNegativeOrNotFive << endl;
    cout << "\tIs the character value between '0' and '2'?\t" << isInRange << endl;
    return 0;




}