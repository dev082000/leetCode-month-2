class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        queue<int> q;
        for(int i=0;i<deck.size();i++)
        {
            q.push(i);
        }
          vector<int> ans(deck.size());
 for(int i=0;i<deck.size();i++)
        {
            int index=q.front();
            ans[index]=deck[i];
            q.pop();
        if(!q.empty())
          {
            int nextIndex=q.front();
            q.push(nextIndex);
            q.pop();
        }
        }
        return ans;
    }
};