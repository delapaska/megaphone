#include <iostream>
#include <string>
using namespace std;
int main(){
 char str[256];
 cin.getline(str,256);
 
 int i =0;
 while(str[i] !='\0'){
 str[i] = toupper(str[i]);
 i++;
 }
 i = 0;
while(str[i] !='\0'){
   cout << str[i];
   i++;
 }
 cout << endl;
 i = 0;
 
 return 0;
}
