#include <iostream>

using namespace std;

int main() {
    string raptor_prompt_variable_zzyz = "Enter the wavelength of the color (in nm): ";
    int color;

    // Prompt the user
    cout << raptor_prompt_variable_zzyz << endl;
    cin >> color;

    // Check the wavelength range and output the corresponding color
    if (color <= 445) {
        cout << "Violet" << endl;
    } else if (color <= 475) {
        cout << "Indigo" << endl;
    } else if (color <= 510) {
        cout << "Blue" << endl;
    } else if (color <= 570) {
        cout << "Green" << endl;
    } else if (color <= 590) {
        cout << "Yellow" << endl;
    } else if (color <= 650) {
        cout << "Orange" << endl;
    } else {
        cout << "Red" << endl;
    }

    return 0;
}
From: Nonye, John C <john.nonye@go.stcloudstate.edu>
Sent: 12 September 2024 11:53
To: Sripathi, Jyoshika R <jyoshika.sripathi@go.stcloudstate.edu>
Subject:
 
#include <iostream>
#include <string>
 
using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string color;
 
   raptor_prompt_variable_zzyz =;
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> color;
   if (color<=445)
   {
      cout << "violet" << endl;   }
   else
   {
      if (color<=475)
      {
         cout << "indigo" << endl;      }
      else
      {
         if (color<=510)
         {
           cout << "Blue" << endl;         }
         else
         {
            if (color<=570)
            {
               cout << "Green" << endl;            }
            else
            {
               if (color<=590)
               {
                  cout << "Yellow" << endl;               }
               else
               {
                  if (color<=650)
                  {
                     cout << "Orange" << endl;                  }
                  else
                  {
                     cout << "Red" << endl;                  }
               }
            }
         }
      }
   }
 
   return 0;
}
 
 
