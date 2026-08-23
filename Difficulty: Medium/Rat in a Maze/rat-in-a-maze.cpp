class Solution {
  public:
  
    bool issafe(vector<vector<int>>& maze,int row,int col,int i,int j,vector<vector<bool>>&visited){
        if((i>=0 && i<row && j>=0 && j<col) && (maze[i][j]==1) && (visited[i][j]==false)){
            return true;
        }
        return false;
    }
  
    void direction(vector<vector<int>>& maze,int row,int col,int i,int j,vector<string>&path,
    string output,vector<vector<bool>>&visited){
        if(i==row-1 && j==col-1){
            path.push_back(output);
            return;
        }
        //down i+1,j
        if(issafe(maze,row,col,i+1,j,visited)){
            visited[i+1][j]=true;
            direction(maze,row,col,i+1,j,path,output+'D',visited);
            visited[i+1][j]=false;
        }
        //left i,j-1
        if(issafe(maze,row,col,i,j-1,visited)){
            visited[i][j-1]=true;
            direction(maze,row,col,i,j-1,path,output+'L',visited);
            visited[i][j-1]=false;
        }
        //right i,j+1
        if(issafe(maze,row,col,i,j+1,visited)){
            visited[i][j+1]=true;
            direction(maze,row,col,i,j+1,path,output+'R',visited);
            visited[i][j+1]=false;
        }
        //up i-1,j
        if(issafe(maze,row,col,i-1,j,visited)){
            visited[i-1][j]=true;
            direction(maze,row,col,i-1,j,path,output+'U',visited);
            visited[i-1][j]=false;
        }
    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int row=maze.size();
        int col=maze[0].size();
        if(maze[0][0]==0) return {};
        vector<vector<bool>> visited(row, vector<bool>(col,false));
        visited[0][0]=true;
        vector<string> path;
        string output="";
        direction(maze,row,col,0,0,path,output,visited);
        return path;
    }
};