/*
MD Rashedul Islam
Lab 10, Function
*/


#include<iostream>
using namespace std;
//example 1:void function
//print 'Hello Function!'

void printHi(){
    cout<<"Hello Function! "<<endl;
}

//example 2: Void function with parameters
void greeting(string name){
    cout<<"Welcome to c++ "<<name<<endl;
}



//example 3: 
int numbertriple(int number){
    return number*3;
}


//example 4: Casting in function
//function to calculate the area of a rectengle and returns the calculated area
//the function will take the sides, length and width as arguments
float area_reatangle(float length, float width){
    float area = length * width;
    return area;  
}

int rectangle(float length, float width){
    float area = length * width;
    return area;
}

//example 5: Temperature Claculator
// The function the celcius  temperature, arguments and convert it into Farenheite
double farenheit(double celsius){
    //formula ---> Farenheit = Celsius * 1.8+32
    return celsius * 1.8 +32;
    //any code lines after the first 'return' will not run
    //a 'return' is the break (termination) of the function
    celsius += 10;
    return celsius;
}

//example 6: Function calling function, composition function
//function to call a number between 1 to 9
int usernumber(){
    int number;
    do{
        cout<<"Enter a number between 1 to 9: ";
        cin>>number;
    }while (!(number >=1 && number<=9));   //while (number<1 ||number>9)
    return number;

}

//Function that takes a number between 1 to 9, and returns
int doublenumber(){
    int n =usernumber();   //composition number
    return 2*n;
}

// example 7: passing a function as an argument
// function that check if a number between 1 to 9 is even or odd
bool iseven(int number){
    if(number%2==0){
        return true;
    }
    else{
        return false;
    }
}

//example 8: Function passing Function
//function to check if a number between 1 to 9 is grater than or equal to 5
string checkgreater5(int number){
    if (number >= 5){
        return "yes";
    }
    else{
        return "no";
    }
}

//example 9: Recursive function
// Recursive is a function that call itself within the same function
void cheers(int n){
    if(n==1){
        cout<<"STOP RECURSIVE FUNCTION"<<endl;

    }
    else{
        cout<<(n*2)<<"\t";
        cheers(n-1); //recursive function
    }
}

/*
function iteratrion       |       int n =         |           if (n==1)         |       cout<<(n*2)         |       cheers(n-1);
------------------------------------------------------------------------------------------------------------------------------------------
            1             |         n = 5         |             False           |       10                  |       (5-1)=4
            2             |         n=4           |             False           |       8                   |       (4-1)=3
            3             |         n=3           |             False           |       6                   |       (3-1)=2
            4             |         n=2           |             False           |       4                   |       (2-1)=1
            5             |         n=1           |             True(Sto pthe Recursive function)
*/


//Example 10: summation using Recursive function
//summation(3) = 3+2+1+0=6
//summation(4) = 4+3+2+1+0=10
int summation(int n){
    if(n>0){
        return (n+summation(n-1));
    }
    else{
        return 0;
    }
}

/*
summation function
itetation       |       int n=          |       if(n>0) return(n+summation(n-1))             |       else
----------------------------------------------------------------------------------------------------------------
        1       |           n=4         |        True, return(4+summation(4-1=3))            |       skip
        2       |           n=3         |        True, 4+ return (3+summation(3-1=2))        |       skip
        3       |           n=2         |        True,4+3+ return (3+summation(2-1=1))       |       skip    
        4       |           n=1         |        True,4+3+2+ return (3+summation(1-1=0))     |       skip 
        5       |           n=0         |        False, STOP RECURSIVE FUNCTION              |       true, return
    
Total summation 4+3+2+1+0=10  

*/

//Example 11: linear recursive function
int linearfunction(int m){
    if(m>10){
        return -6;
    }
    else{
        return (linearfunction (m+2) *(m-4));
    }
}
/*
Function
Literation          |       int m =     |       if(m>10)        |       else, return (linearfunction (m+2) *(m-4)) 
        1           |           m=3     |       False           |              return (linearfunction (3+2=5) *(3-4=-1)) 
        2           |           m=5     |       False           |              return (linearfunction (5+2=7) *(5-4=1)) *-1
        3           |           m=7     |       False           |              return (linearfunction (7+2=9) *(7-4=3)) *1*-1
        4           |           m=9     |       False           |              return (linearfunction (9+2=11) *(9-4=5)) *3*1*-1
        5           |           m=11    |       True return -6 (STOP THE RECURSIVE FUNCTION)

    -1 * 1 * 3 * 5 * -6 =90

*/

//Example 12: Recrusive function as a checkpoint
int getnumber(){
    int n;
    cout<<"Enter a positive number";
    cin>>n;
    if( n<= 0){
        cout<<"Invalid input! ";
        return getnumber();   //recrusive function


    }
    else{
        return n; 
    }
}

//Lab EXERCISE
int collectNumber() {
    int number;
    do {
        cout << "Please enter a number between 1 and 10: ";
        cin >> number;
    } while (number < 1 || number > 10);
    return number;
}

void printNumbersUpToFifteen(int start) {
    for (int i = start; i <= 15; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

int countNotMultiplesOfThree(int start) {
    int count = 0;
    for (int i = start; i <= 15; ++i) {
        if (i % 3 != 0) {
            count++;
        }
    }
    return count;
}

void printResult(int start, int count) {
    cout << "From " << start << " up to 15, there are " << count << " numbers that are not multiplied by 3." << endl;
}