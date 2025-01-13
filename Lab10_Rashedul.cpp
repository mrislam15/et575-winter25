/*
MD Rashedul Islam
Lab 10, Introducation to Function
*/

#include<iostream>
#include"Lab10_Rashedul_function.cpp"
using namespace std;

int main(){
    cout<<"\n-------------Example:1 Void function--------------"<<endl;
    printHi();
    printHi();
    printHi();


    cout<<"\n-------------Example:2 Void function with parameters--------------"<<endl;
    string n = "Martha";
    greeting("peter");
    greeting("Anna");
    greeting(n);

    cout<<"\n-------------Example:3 Function that returns value --------------"<<endl;
    int num = numbertriple(5);
    cout<<num<<endl;
    num +=2;
    cout<<num<<endl;

    cout<<"\n-------------Example:4 Calculate the area of the rectangle --------------"<<endl;
    int l = 3; 
    int w = 2.8; //cast the 2.8 into 2
    float a = area_reatangle(3.8,w);
    cout<<" The calculated area is "<<a<<endl;

    //return integer
    int r=rectangle(3.8,w);
    cout<<" The calculated area is "<<r<<endl;


    cout<<"\n-------------Example:5 Temperature Calculator --------------"<<endl;
    double f =farenheit(2.5);
    cout<<" The calculated Farenheit is \t"<<f<<endl;


    cout<<"\n-------------Example:6 Composition Function --------------"<<endl;
    //testing
    //cout<<usernumber()<<endl;
    int number = doublenumber();
    cout<<"The double number is: \t"<<number<<endl;



    cout<<"\n-------------Example:7 passing a function as an argument --------------"<<endl;
    bool even = iseven(usernumber());
    cout<<"Is it an even number?\t"<<even<<endl;

    cout<<"\n-------------Example:8 Function calling function --------------"<<endl;
    int x = usernumber();
    cout<<"IS "<<x<<" greater than or equal to 5? "<<checkgreater5(x)<<endl;


    cout<<"\n-------------Example:9 Recursive Function --------------"<<endl;
    cheers(5);      //the first time the function is callec

    cout<<"\n-------------Example:10 Summation using  Recursive Function --------------"<<endl;
    int sum = summation(4);
    cout<<"The total summation is \t"<<sum<<endl;


    cout<<"\n-------------Example:11 linear  Recursive Function --------------"<<endl;
    int linear = linearfunction(3);
    cout<<"The total linear function is "<<linear<<endl;


    cout<<"\n-------------Example:12 Recrusive function as a checkpoint --------------"<<endl;
    int getnum = getnumber();
    cout<<" The enterd number is \t"<<getnum<<endl;



    cout<<"\n-------------EXERCISE:  --------------"<<endl;
    int start = collectNumber();
    printNumbersUpToFifteen(start);
    int count = countNotMultiplesOfThree(start);
    printResult(start, count);


    return 0;
}