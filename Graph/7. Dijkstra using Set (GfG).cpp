// https://bit.ly/3KeZZ7j

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends




class Solution
{
	public:
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> dist_ans(V, INT_MAX);
        //set
        set<pair<int, int>> st;
        //ans vector
        dist_ans[S] = 0;
        st.insert({0, S});
        
        while(!st.empty()){
            auto it = *st.begin();
            int dis  = it.first;
            int node = it.second;
            st.erase(it);
            
            for(auto itt : adj[node]){
                int toNode  = itt[0];
                int edgeDis = itt[1];
                
                if(dis+edgeDis < dist_ans[toNode]){
                    //erase from set, if existed
                    if(dist_ans[toNode] != INT_MAX){
                        st.erase({dist_ans[toNode], toNode});
                    }
                    
                    dist_ans[toNode] = dis+edgeDis;
                    st.insert({dis+edgeDis, toNode});
                }
            }
        }
        
        return dist_ans;
    }
    //TC: O(E log V) same as Priority Queue. But if existed,
    //then removed from set. So iteration of set value is lessened. 
};





//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends