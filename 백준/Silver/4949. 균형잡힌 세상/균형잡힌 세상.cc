// #include<iostream>
// #include<string>
// #include<stack>

// using namespace std;

// int arr[100];
// int N = 1000;
// stack<char> stack;
// int main() {

//   for (int i = 0; i < N; i++){
//     string str;
//     cin >> str;
//     while(str != "."){
//       for (int j = 0; j < str.length(); j++){
//         if(str[j] == '(' || str[j] == '['){
//           stack.push(str[j]);
//         }
//         else if(stack.top() == '(' && str[j] == ')'){
//           while (!stack.empty()) {
//           stack.pop();
//           }
//         }
//         else if(stack.top() == '[' && str[j] == ']'){
//           while (!stack.empty()) {
//           stack.pop();
//           }
    
//         }
        
//       }
//     }
//     if(stack.empty()){
//       cout << "yes";
//     }
//     else
//       cout << "No";
//   }
// }

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	while(true){
		stack<char> S;
		string str;
		
		getline(cin, str);
		
		if(str==".")
			break;
	
		bool flag = 1;
			
		for(int i=0; i<str.length(); i++){
			
			if(str[i] == '[' || str[i] == '('){
				S.push(str[i]);
			}
			
			else if(str[i] == ']'){
				if(S.empty()){
					flag = false;
					break;
				}
				
				else if(S.top() == '['){
					S.pop();
				}
				
				else if(S.top() == '('){
					flag = false;
					break;
				}
			}
			
			else if(str[i] == ')'){
				if(S.empty()){
					flag = false;
					break;
				}
				
				else if(S.top() == '('){
					S.pop();
				}
				
				else if(S.top() == '['){
					flag = false;
					break;
				}
			}
			
		}
		
		if(S.empty() && flag)
			cout << "yes\n" ;
			
		else
			cout << "no\n" ;
	
	}

	return 0;
}
