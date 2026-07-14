#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string str1;
    getline(cin, str1);
 
    string str2;
    getline(cin, str2);
 
   // Firstly convert upper case characters into lower case charaacter ---
 
   int out = 0;
   for(int i = 0; i < str1.length(); i++){
        char ch1 = (str1[i] >= 'A' && str1[i] <='Z') ? str1[i] + 32 : str1[i];
        char ch2 = (str2[i] >= 'A' && str2[i] <='Z') ? str2[i] + 32 : str2[i];
 
        if(ch1 > ch2){
            out = 1;
            cout << out << endl;
            return 0;
        }else if(ch1 < ch2){
            out = -1;
            cout << out  << endl;
            return 0;
        }else{
            continue;
        }
   }
 
   cout << "0" << endl;
    return 0;
}