#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here

	string r="@40";

	for(int i=0; i<str.length(); i++){
		if(str[i]== ' '){
			str.replace(i,1,r);

		}
	}
	return str;
	
	

}