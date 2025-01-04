#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;


int main() 
{
         string value;

    cout << "---------------------Let's play a game, Guess the number---------------------------"
         << "\n----press y to continue and any other key to exit: ";

    cin >> value;

         if (value == "y")                                  // To determine if you want to play or not.
         {
           cout << "----Good. Let's continue----"<< endl;
         }
         else{
            cout << "Goodbye." << endl;
            return 0;
         }
        
    cout << "--------You will have a total of 7 chances to guess right--------";  
         
           int ChancesLeft = 7;
           int InputValue;

    cout << "\n--------The number is from 1 - 20--------"; // To show the range of the correct number.

           srand(time(0));
           int randomNumber = 1 + (rand() % 20);
        
   for (int i = 1; i <= 7; i++)                           // Depicts the limited loop properly.
   {
    cout << "\n---> Enter your value: ";
    
    cin >> InputValue;

      if(InputValue == randomNumber )                    // If the correct number is guessed.
           {
             cout << "You are Amazing!!!"<< endl;
             break;
           }
      else                                              // If the number is more or less than the expected value. 
           {
            if(InputValue < randomNumber )
            {
              cout << "Try a higher number.";
            }
            else{
              cout << "Try a smaller number.";
            }
             
           }

         ChancesLeft--;                                // For the loop of the chances left.

             cout << "\nOops, you have '" << ChancesLeft << "' chance(s) left";
         
      if (ChancesLeft == 0)                            // If there are no chances left.
         {
           cout << "You have no chances left."
                << "\nThe random number is " << randomNumber 
                << "\n Thanks for playing.";
                break;
         }
   }
     
      
     
    return 0;   
         
}//