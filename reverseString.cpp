#include<bits/stdc++.h>
using namespace std;

 string reverseString(string s){
 	stack<char>stk;
 	string temp="";
 	
 	for(int i=0 ; i<s.size() ; i++){
 		stk.push(s[i]);
	 }
	 
	while(!stk.empty()){
		temp+=stk.top();
		stk.pop();
	}
	 return temp;
 }

int main(){
	string s;
	cout<<"Enter string to reverse it ....\n";
	cin>>s;
	
	cout<<reverseString(s);
	
	
	return 0;
}
