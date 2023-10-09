class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> queue;

        for(int i = 1 ; i <= n ; i++ )
        {
            queue.push_back(i);
        }

        int index = 0;
        while(queue.size() > 1)
        {
            index = (index + k - 1) % queue.size();
            queue.erase(queue.begin() + index);
        }
        
        return queue[0];
    }
};