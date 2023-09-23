#include<iostream>
using namespace std;
int main(){
char ch='a';
switch (ch)
{
     case 'a':
     case'e':
     case'i':
     case'o':
     case'u':
            cout<<"it is a vowel\n";
            break;
      default :
            cout<<"it is a consonant\n";
     
     }
   return 0; 

   } 
    