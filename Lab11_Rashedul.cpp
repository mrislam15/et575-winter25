/*
MD Rashedul Islam
Jan 14, Built in Functions

*/
#include<iostream>
#include<cstdlib>
#include "Lab11_Rashedul_function.cpp"

using namespace std;

int main(){
    srand(time(0));
    int time = getRandomTime();
    float distance = calculateFallingDistance(time); 
    //display decimal places
    cout.setf(ios::fixed);  //set to display decimal places
    cout.precision(2);   //display two decimal places

    cout<<"\n----------------Example 1: using'floor'c++ function---------------------"<<endl;
    cout<<roundnum(2.1)<<endl;
    cout<<roundnum(2.9)<<endl;


    cout<<"\n----------------Example 2: using 'pow' & 'sqrt'c++ function---------------------"<<endl;
    int side1= collectside();
    int side2= collectside();
    //testing
    //cout<<side1<<"\t"<<side2<<endl;
    float hyp = hypotenusa(side1,side2);
    //testing
    //cout<<hyp<<endl;
    printresult(side1, side2, hyp);


    cout<<"\n----------------Example 3: using 'rand'c++ function---------------------"<<endl;
    cout<<" Random\t"<<rand()<<endl;
    cout<<" Random\t"<<rand()<<endl;
    cout<<" Random\t"<<rand()<<endl;

    cout<<"\n----------------Example 4: using a random number between '-5 to 5'--------------------"<<endl;
    cout<<" Random Number \t"<<randomnumber()<<endl;


    cout<<"\n----------------EXERCISE A--------------------"<<endl;
    cout << "The falling distance in " << time << " seconds is " << distance << " meters" << endl;



    return 0;
}