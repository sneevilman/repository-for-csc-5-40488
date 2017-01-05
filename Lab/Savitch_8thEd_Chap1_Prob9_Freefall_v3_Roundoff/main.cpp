/* 
   File:   main
   Author: Caeleb Moeller
   Created on Jan 5, 2017, 1:15 PM
   Purpose:  Free Fall
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float GRAVITY = 3.2174e1f;//Earth sea-level gravity in ft/sec^2
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float time,     //Time in seconds
         distnce;//Distance in feet
    int rndOff; //what decimal place to round off to
    
    //Input values
   cout<<"This problem solves the distance traveled\n"
           "in free-fall under earth gravity\n"
           "Input the time during Free-Fall in seconds"<<endl;
   cin>>time;
   cout<<"How many decimal places? 0,1,2, or 3 for the answer"<<endl;
   cin>>rndOff;
   
    //Process values -> Map inputs to Outputs
   distnce=GRAVITY*time*time/2;
   int id=distnce*pow(10, rndOff);//rounding to rndOff decimals
   distnce=id/pow(10,rndOff);
    //Display Output
   cout<<"The distance fallen = "<<distnce<<" ft"<<endl;
    //Exit Program
    return 0;
}