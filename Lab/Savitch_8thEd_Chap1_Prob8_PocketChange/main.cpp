/* 
   File:   main
   Author: Caeleb Moeller
   Created on Jan 5, 2017, 1:40 PM
   Purpose:  Pocket Change
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const char quarter= 25,//Number of cents in coinage
               dime=    10,
               nickel=  5,
               penny=   1;
    char nQrtr, nDimes, nNckls, nPnns;
    unsigned short total;//Total pocket change in cents            
    //Input values
    
    cout<<"This calculates the amount of your pocket change\n"
            "how many Quarters, Dimes, Nickels, and Pennies do\n"
            "you have in your pocket?\n"
            "Type in all on the same line i.e., 3 4 0 2\n"
            "Maximum of any value must be less than 10"<<endl;
    cin>>nQrtr>>nDimes>>nNckls>>nPnns;

    //Process values -> Map inputs to Outputs
    total=  (nQrtr-48)  *quarter +
            (nDimes-48) *dime    +
            (nNckls-48) *nickel  +
            (nPnns-48)  *penny;
    
    
    //Display Output
    cout<<"The coins in your pocket = "<<total<<" cents"<<endl;
    cout<<"The coins in your pocket = $"<<total/100.0f<<endl;
    //Exit Program
    return 0;
}