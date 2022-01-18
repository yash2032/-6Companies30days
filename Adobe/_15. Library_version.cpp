// Given two library versions of an executable: for example, “10.1.1.3” and “10.1.1.9” or “10” and “10.1”. Find out which one is more recent? Strings can be empty also.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	
	string a,b;
	cin>>a>>b;
	
	string a1,b1;
	
	for(int i=0;i<a.length();i++){
	    if(a[i]>='0' and a[i]<='9')
	    a1+=a[i];
	}
	
	for(int i=0;i<b.length();i++){
	    if(b[i]>='0' and b[i]<='9')
	    b1+=b[i];
	}
	
	int x=a1.length(),y=b1.length();
	
	int mn=min(x,y),f=0;
	
	if(mn==y){
	    f=1;
	   string temp;
	   temp=a1;
	   a1=b1;
	   b1=temp;
	}
	
	int diff=b1.length()-a1.length();
	
	for(int i=0;i<diff;i++){
	    a1+='0';
	}
	
	ll n1=stoi(a1),n2=stoi(b1);
	
	if(n1>n2){
	    if(f==0) cout<<a;
	    
	    else cout<<b;
	}
	else{
	    if(f==0) cout<<b;
	    
	    else cout<<a;
	}
	
	
}
