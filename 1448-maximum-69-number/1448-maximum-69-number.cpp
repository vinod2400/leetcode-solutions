class Solution {
public:
    int maximum69Number (int num) {
        vector<int> arr;
        while(num>0){
            arr.push_back(num%10);
            num = num/10;
        }
        reverse(arr.begin(),arr.end());
        
        int n = arr.size();
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == 6) {
                arr[i] += 3;
            break;
            }
        }
        int ans = arr[0];
        for(int i = 1; i<n; i++){
            ans = ans*10 + arr[i];
        }
        return ans;
    }
};