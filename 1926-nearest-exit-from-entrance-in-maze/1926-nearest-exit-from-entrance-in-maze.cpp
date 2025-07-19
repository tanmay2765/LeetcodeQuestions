class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int r = maze.size(), c = maze[0].size();
        queue<pair<int, int>> q;
        q.push({entrance[0], entrance[1]});
        vector<vector<bool>> visited(r, vector<bool>(c, false));
        visited[entrance[0]][entrance[1]] = true;

        int dx[4] = { 0  , 0 , 1 , -1 };
        int dy[4] = { 1 , -1 , 0 , 0 };
        int steps = 0;

        while(q.size() > 0)
        {
            int nodes_at_current_level = q.size();

            for(int i = 0; i < nodes_at_current_level; i++)
            {
                pair<int,int> temp = q.front();
                q.pop();
                
                int x = temp.first;
                int y = temp.second;
                if ((x == 0 || x == r-1 || y == 0 || y == c-1) && 
                    !(x == entrance[0] && y == entrance[1])) {
                    return steps;
                }
                
                for(int j = 0; j < 4; j++) 
                {
                    int newX = x + dx[j];
                    int newY = y + dy[j];


                    if(newX >= 0 && newY >= 0 && newX < r && newY < c && maze[newX][newY] == '.' && !visited[newX][newY])
                    {    
                        visited[newX][newY] = true;
                        q.push({newX, newY});
                        
                    }
                }
            }
            
            steps++;
        }

        return -1;
        

    }
};