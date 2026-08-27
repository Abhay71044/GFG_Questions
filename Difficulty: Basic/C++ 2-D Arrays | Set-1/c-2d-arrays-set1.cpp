vector<vector<int>> transpose(int a[][M], int n) {
    vector<vector<int>> mat(n,vector<int> (M));
    for(int i=0;i<n;i++) {
        for(int j=0;j<M;j++) {
            mat[i][j]=a[j][i];
        }
    }
    return mat;
}
