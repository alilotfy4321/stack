#include<bits/stdc++.h>
using namespace std;

bool areBracketsBalanced(string s){
	stack<char> stk;
	
	for(int i=0 ; i<s.size(); i++){
		
		if(stk.empty()){
			stk.push(s[i]);
		}else if((stk.top()=='(' && s[i]==')') || (stk.top()=='['&& s[i]==']' ) || (stk.top()=='{'&&s[i]=='}') ){
			stk.pop();
		}else{
			stk.push(s[i]);
		}
		
	}///end loop
		if(stk.empty()) 
		    return true;
		else 
		   return false;

}


int main(){
	
	string s;
	cout<<"enter Brackets ....\n";
	cin>>s;
	
	cout<<((areBracketsBalanced(s))?"Balanced.\n":"Not BAlanced.\n");
		
	return 0;
}
