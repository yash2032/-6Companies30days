// https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/#

bool isPossible(int n, vector<pair<int, int> >& prerequisites) {
	    vector<int> in(n,0);
	    queue<int> q;
	    
	    vector<int> adj[n];
	    
	    for(auto x: prerequisites ){
	        in[x.first]++;
	        adj[x.second].push_back(x.first);
	    }
	    
	    for(int i=0;i<n;i++){
	        if(in[i]==0)
	        q.push(i);
	    }
	    
	    while(!q.empty()){
	       int td=q.front();
	       q.pop();
	       for(auto x: adj[td]){
	           in[x]--;
	           if(in[x]==0)
	           q.push(x);
	       }
	    }
	    int f=1;
	    for(int i=0;i<n;i++){
	        if(in[i]){
	            
	        f=0;
	        break;}
	    }
	    
	    if(f) return 1;
	    return 0;
	}
