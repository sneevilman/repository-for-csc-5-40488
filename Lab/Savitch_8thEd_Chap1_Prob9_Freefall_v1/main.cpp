/* 
   File:   main
   Author: Caeleb Moeller
   Created on Jan 5, 2017, 1:15 PM
   Purpose:  Free Fall
 */

//System Libraries
#include <iostream>   //Input/Output objects
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
    
    //Input values
   cout<<"This problem solves the distance traveled\n"
           "in free-fall under earth gravity\n"
           "Input the time during Free-Fall in seconds"<<endl;
   cin>>time;
   
    //Process values -> Map inputs to Outputs
   distnce=GRAVITY*time*time/2;
   
    //Display Output
   cout<<"The distance fallen = "<<distnce<<" ft"<<endl;
    //Exit Program
    return 0;
}