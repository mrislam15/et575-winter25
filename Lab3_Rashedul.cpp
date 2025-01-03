/*
MD Rashedul Islam
Jan 3, numerical variables
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\v------------- Example 1: integer variables ------------"<<endl;
    //declare identifier, variable's name
    int height;
    int width;
    int area;
    cout<<"Initial value area = "<<area<<endl;
    //assign values to each variable
    height = 3;
    width = 2.5;
    area = height*width;
    cout<<"calculated area = "<<area<<endl;


    cout<<"\v------------- Example 2: short variables ------------"<<endl;
    //declear valiables with initial values
    short perimeter(0); // short perimeter = 0;
    //calculated the perimeter of the rectengle
    perimeter = height*2 + width*2; //perimeter = 3*2 +2*2 = 6+4 =10
    cout<<"The calculated perimeter is "<<perimeter<<endl;



    cout<<"\v------------- Example 3: float variables ------------"<<endl;
    // float and double reads the decimal /fraction portion of a number
    // height of free fall formula  = 0.5*gravity*time*time
    // declare identifier
    float gravity = 9.8, time = 2.1, h(0);
    //calculate the height
    h = 0.5*gravity*time*time;
    // console result
    cout<<"The height of a falling object is  "<<h<<"meters "<<endl;


     cout<<"\v------------- Example 4: constant variables ------------"<<endl;
     // calculate the price of a cake using inches squared. Each inches squared costs $0.35
     // declare identifier
     const double BASEPRICE = 0.35;
     const double PI = 3.314159;
     double areacake = 0, totalprice = 0, redius = 0;
     // collect the redius from the user/console (keyword)
     cout<<"Enter the redius of the cake: ";
     cin>>redius;
     //calculate the area of the cake  = pi*redius*redius
     areacake = PI*redius*redius;
     //calculate the total price of a cake
     totalprice = areacake * BASEPRICE;
     //prompt the result
     cout<<"A cake of "<<redius<<"inches costs $"<<totalprice<<endl;



     cout<<"\v------------- Example 5: Circle Area and Sphere Volume (LAB-3) ------------"<<endl;
    // declare variables
    int inputRadius;
    float circleArea, sphereVolume;
    // Prompt the user to enter the radius
    cout<<"Enter the radius for the calculations: ";
    cin>>inputRadius;
    // Calculate the area of the circle using the formula: area = PI * radius * radius
    circleArea = PI * inputRadius * inputRadius;
    // Calculate the volume of the sphere using the formula: volume = (4/3) * PI * radius * radius * radius
    sphereVolume = (4.0/3.0) * PI * inputRadius * inputRadius * inputRadius;
    // Prompt the results
    cout<<"The area of the circle is "<<circleArea<<" square units "<<endl;
    cout<<"The volume of the sphere is "<<sphereVolume<<" cubic units "<<endl;



    return 0;


}
