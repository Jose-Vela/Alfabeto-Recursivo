#include <iostream> 
#include <conio.h>
using namespace std; 

void funcionA (char c);
void funcionB (char C); 
 
 int main(){
     cout << "Alfabeto: "; 
     funcionA('Z'); 
     cout << endl; 
     getch();
     return 0;  
 } 

 void funcionA(char c){
     if (c >= 'A') {
         funcionB(c); 
         cout << c <<" "; 
     }
 } 

 void funcionB (char c){
     funcionA(--c);
 } 

 