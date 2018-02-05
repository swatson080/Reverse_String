#include <iostream>
#include <cstring>

using namespace std;

int main () {
    
    char text[100] = {};
    
    cout << "Enter some text and I will reverse it\n> " << flush;
    
    cin.getline(text, sizeof(text));
    
    cout << "You entered: " << text << endl;

    /*
    cout << "strlen: " << strlen (text) << endl;
    cout << "sizeof: " << sizeof (text) << endl;
    */

    char *pStart = text;

    char *pEnd = &text[strlen (text) - 1];

    while (pStart < pEnd)
        {
            char temp;
            temp = *pStart;
            *pStart = *pEnd;
            *pEnd = temp;
            pStart++;
            pEnd--;
        }

    cout << "Reversed:" << text << endl;

  return 0;
  
}
