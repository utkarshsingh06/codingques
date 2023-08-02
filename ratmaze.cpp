void checkrat(vector<vector<int>> &mat,vector<string> &s1,string sub,int row,int col,int n){
    if(row>=n || col>=n || row<0||col<0){ //check for outbounds
        return;
    }
    if(mat[row][col]==0){ //check for dead end
        return ;
    }
    if(row==n-1 &&col==n-1){ //if we reach the destination
        s1.push_back(sub);
    }
    mat[row][col]=0;

    //solve now for UP,DOWN LEFT,RIGHT
    checkrat(mat,s1,sub+'U',row-1,col,n);

    checkrat(mat,s1,sub+'D',row+1,col,n);

    checkrat(mat,s1,sub+'L',row,col-1,n);

    checkrat(mat,s1,sub+'R',row,col+1,n);

    //restore the current cell to origina lvalue;
    mat[row][col]=1;
    return;



}
vector<string> ratMaze(vector<vector<int>> &mat) {
    int len=mat.size();
    vector<string> s1;
    string sub="";
    checkrat(mat,s1,sub,0,0,len);
    return s1;
}
