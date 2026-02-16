class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        sort(deck.begin(),deck.end());
        vector<int> ans(deck.size());
        for(int i=0;i<deck.size();i++) q.push(i);
        for(int card:deck){
            ans[q.front()]=card;
            q.pop();
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }return ans;
    }
};