class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        // adjacency list
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);

        // build graph
        for(int i = 0; i < prerequisites.size(); i++){
            int course = prerequisites[i][0];
            int prereq = prerequisites[i][1];

            adj[prereq].push_back(course);
            indegree[course]++;
        }

        // Kahn's Algorithm
        queue<int> q;

        for(int i = 0; i < numCourses; i++){
            if(indegree[i] == 0)
                q.push(i);
        }

        int count = 0;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;

            for(int i = 0; i < adj[node].size(); i++){
                indegree[adj[node][i]]--;

                if(indegree[adj[node][i]] == 0)
                    q.push(adj[node][i]);
            }
        }

        return count == numCourses;
    }
};