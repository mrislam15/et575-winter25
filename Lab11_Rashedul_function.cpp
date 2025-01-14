/*
MD Rashedul Islam
Jan 14, Built in Functions

*/

#include<cmath>
#include<iostream>
#include<cstdlib>
int getRandomTime();
float calculateFallingDistance(int time);
void displayResult(int time, float distance);
using namespace std; 

//example 1: rounding-up a number
//function that will return a round up of a number
//if a number is greater than or equal to 5, add 1 to the number

double roundnum(double number){
    return floor(number+0.5);
}


//example 2: calculate the hyphothesis of a right triangle 
//function to collect a number between 1 to 100, exclusive 

int collectside(){
    int n;
    do{
        cout<<" Enter a number: ";
        cin>>n;
    }while (!(n>=1 && n<100));    //n<1 || n>=100
    return n; 
    
}
//example 3: calculate the hyptenusa
//function that will calculate and returns the hyponthesis
//formula hypothesis = sqrt of (side1^2 + side2^2)
float hypotenusa (int s1, int s2){
    return(sqrt(pow(s1,2)+pow(s2,2)));
}

//function to print the result
void printresult(int s1, int s2, float hyp){
    cout<<"The hypotenusa of sides "<<s1<<" and "<<s2<<" is "<<hyp<<endl;
}

//example 4: random number
//function that returns to a random numbers between -5 t0 5
int randomnumber(){
    return (-5 + rand()%11);
}


//Exercise-a
const float gravity = 9.8;

// Random number between 1 and 100
int getRandomTime() {
    return rand() % 100 + 1; 
}

// d = 0.5 * gravity * t^2
float calculateFallingDistance(int time) {
    return 0.5 * gravity * pow(time, 2);  
}

void displayResult(int time, float distance) {
    cout << "The falling distance in " << time << " seconds is " << distance << " meters." << endl;
}