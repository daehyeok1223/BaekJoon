#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);  
    int PH = 0;  
    int PG = 0;  
    int ans;


    for (int i = 0; i < s.length(); i++) {
        if(s[i] == 'H' || s[i] == 'P' || s[i] == 'Y'){
            PH++;  
        }
        else if(s[i] == 'S' || s[i] == 'D'){
            PG++;  
        }
        else if(s[i] == 'A'){
            PG++;  
            PH++;
        }
    }


    if (PH == 0 && PG == 0){
        cout << "50.00" << "\n";
    } 
    else {
        ans = ((PH * 100000) / (PH + PG)) + 5 ;
        ans = ans / 10;
        cout << ans / 100;
        if(ans % 100 == 0){
          cout << "." << "00";
        }
        else if(ans % 100 < 10){
          cout << ".0" << ans % 100;
        }
        else{
          cout << "." << ans % 100;
        }
    }

        return 0;
}
