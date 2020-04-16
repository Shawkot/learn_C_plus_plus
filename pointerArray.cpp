// This program will print elements of an array by using pointers

#include <iostream>
using namespace std;

int main()
{
    int i;
    string texts[] = {"mango", "apple", "banana"};
    string *pTexts = texts;

    for(i=0; i<sizeof(texts)/sizeof(string); i++){
        cout << *pTexts << " " <<flush;
        pTexts++;
    }
    cout << endl;
   /*  for(i=0; i<sizeof(texts)/sizeof(string); i++){
        cout << pTexts[i] << " " <<flush;
        pTexts++;
    }
    cout << endl;*/
    string *pfirst = texts;  // texts is the name of the array and it is also a pointer which points to the
                             // first element of the array
    string *pend = &texts[2]; // Pointing to the last element of the array
     for(i=0; i<sizeof(texts)/sizeof(string); i++){
        cout << *pfirst << " " <<flush;
        pfirst++;
        if(pfirst == pend){  // After printing two elements, it will break the loop
            break;
        }

    }

    return 0;
}
