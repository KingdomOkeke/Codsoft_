#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    cout << "                    *****  Welcome to My Arithmetic Calculator  *****                           " ;
    
         
         
    cout << "\n***  You have to enter two numbers and select the type of operation you want to carry out  ***" << endl;
      
    char Choice = 'y';
    while (Choice == 'y'|| Choice == 'Y'){                 // To determine what happens when you choose to continue the program. 

      double Entry1, Entry2, Result ;
      char op;
      

      cout << "\nEnter a number: "; 
      cin >>  Entry1;

      cout << "\nEnter arithmetic operator (+, -, *, /): ";
      cin >> op;

      cout << "\nEnter a second number: ";
      cin >> Entry2;

      
        if(op == '+')                                      // To determine what each arithmetic operator does.
        {
        Result = Entry1 + Entry2 ;   
        cout << Entry1 << " + " << Entry2 << " = " << Result;

        }
        
         else if(op == '-')
        {
            Result = Entry1 - Entry2 ;
            cout << Entry1 << " - " << Entry2 << " = " << Result;
           
        }

         else if(op == '*')
        {
            Result = Entry1 * Entry2 ;
            cout << Entry1 << " * " << Entry2 << " = " << Result;
           
        }

         else if(op == '/')
        { 
            if(Entry2 != 0)
            { 
              Result = Entry1 / Entry2 ;
              cout << Entry1 << " / " << Entry2 << " = " << Result;
            }
            else                                            // When the operation doesn't correlate with what is given
            {
              cout << "Indeterminate.";
            }
        }
        

        else                                                // For any operator other than +, -, /, *
        {
          cout << "Invalid operator.";
        }

        
      
          cout << "\nDo you want to continue ? (If yes click y/Y and any other key if no): ";
          cin >> Choice;
    }
   
    cout << "Goodbye\n";                                    

    return 0;
}