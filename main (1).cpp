/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
     /*
     initialize random seed. Do this only once at the beginning of the main-functioN
    */ 
    srand ( time(NULL) ); 

    int randomNumber; // this variable will hold the random number
    /* 
     generate secret number: between 1 and 10. Change the 10 to a different value to    
     generate random numbers up to that maximum value 
    */ 
    randomNumber = rand() % 10 + 1;  
    
    int playerGuess = 0;
    
    cout << "Welcome to Number Generator!" << endl;
    cout << "Enter a number from 1 to 10." << endl;
    cin >> playerGuess;
   
    int diff; //holds value for the difference between playerGuess and randomNumber
    diff = abs(randomNumber - playerGuess);
    
    if (diff == 0)
    {
        cout<<"You guessed correctly! You win!";
    }
    
    else
    {
        cout<<"You were off by "<< diff << ". Sorry, you lose.";
    }
    
    return 0;
}



