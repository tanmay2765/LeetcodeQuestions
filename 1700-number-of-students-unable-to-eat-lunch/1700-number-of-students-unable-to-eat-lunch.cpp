class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c0=0,c1=0;
        for(int s:students){
            if(s==0) c0++;
            else c1++;
        }for(int s:sandwiches){
            if(s==0){
                if(c0==0)return c1;
                c0--;
            }else{
                if(c1==0)return c0;
                c1--;
            }
        }return 0;
    }
};