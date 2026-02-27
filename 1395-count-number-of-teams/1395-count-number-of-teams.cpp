class Solution {
public:
    int numTeams(vector<int>& rating) {

        int n = rating.size();
        int ans = 0;

        for(int j = 1; j < n - 1; j++){

            int leftSmaller = 0, leftLarger = 0;
            int rightSmaller = 0, rightLarger = 0;

            for(int i = 0; i < j; i++){
                if(rating[i] < rating[j]) leftSmaller++;
                else if(rating[i] > rating[j]) leftLarger++;
            }

            for(int k = j + 1; k < n; k++){
                if(rating[k] > rating[j]) rightLarger++;
                else if(rating[k] < rating[j]) rightSmaller++;
            }
            ans += leftSmaller * rightLarger;
            ans += leftLarger * rightSmaller;
        }
        return ans;
    }
};