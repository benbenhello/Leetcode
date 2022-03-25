class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i = 0 ; i < numRows; i++){
            vector<int> temp;
            temp.clear();
            for(int j = 0 ; j < i+1 ; j++){
                if(j==0 || j == i){
                    temp.push_back(1);
                }else{
                    int l = result[i-1][j-1];
                    int r = result[i-1][j];
                    temp.push_back(l+r);
                }
            }
            result.push_back(temp);
        }
        
        return result;
    }
};