class Solution {
public:
    bool canFinish(int v, vector<vector<int>>& edges) {
        vector<vector<int>>adj(v);
        vector<int>indeg(v,0);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            indeg[v]++;
        }
        queue<int>q;
        for(int i=0;i<v;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        vector<int>res;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            res.push_back(node);
            for(int i=0;i<adj[node].size();i++){
                int temp=adj[node][i];
                indeg[temp]--;
                if(indeg[temp]==0) q.push(temp);
            }
        }
        return res.size()==v;
    }
};