class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> arr;
        for(int i=0;i<num;i++){
            vector<int> temp(i+1,1);
            for(int j=1;j<i;j++){
                temp[j]=arr[i-1][j-1]+arr[i-1][j];
            }
            arr.push_back(temp);
        }return arr;
    }
};