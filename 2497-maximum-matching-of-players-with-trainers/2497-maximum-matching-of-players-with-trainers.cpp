class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int m = 0, n = 0;
        int cnt = 0;
        while(m<players.size() && n<trainers.size()){
            if(players[m] <= trainers[n]){
                cnt++;
                m++;
                n++;
            }
            else{
                if(players[m] > trainers[n]) n++;
                else m++;
            }
        }
        return cnt;
    }
};