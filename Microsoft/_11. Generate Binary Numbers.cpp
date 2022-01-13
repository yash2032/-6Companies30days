// https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/#

vector<string> generate(int n)
{
	vector<string>ans;
    string s="";
	// Your code here
	for(int i=1;i<=n;i++){
	    int a=i;
	    while(a){
	        int b= a%2;
	        s=to_string(b)+s;
	        a=a/2;
	    }
	    ans.push_back(s);
	    s="";
	}
	return ans;
}

