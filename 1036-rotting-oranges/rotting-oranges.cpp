class Solution {
public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    int r;
    int c;

    bool validmat(int i,int j){
        return i>=0 && i<r && j>=0 && j<c;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        r = grid.size();
        c = grid[0].size();

        // ✅ Push only rotten oranges
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j] == 2)
                    q.push({i,j});
            }
        }

        int timer = 0;

        while(!q.empty()){
            int curr_orange = q.size();
            bool spread = false;

            while(curr_orange--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                for(int k=0;k<4;k++){
                    int ni = i + row[k];
                    int nj = j + col[k];

                    if(validmat(ni,nj) && grid[ni][nj] == 1){
                        grid[ni][nj] = 2;
                        q.push({ni,nj});
                        spread = true;
                    }
                }
            }

            if(spread) timer++;
        }

        // ✅ Check after BFS
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1)
                    return -1;
            }
        }

        return timer;
    }
};