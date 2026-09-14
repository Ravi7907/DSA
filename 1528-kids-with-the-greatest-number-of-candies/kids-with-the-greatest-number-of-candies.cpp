class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> result(n, false);
        
        int m=candies[0];
        for(int i=1; i<n; i++){
            if(candies[i]>m){
                m=candies[i];
            }
        }
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies>=m){
                result[i]=true;
            }
        }
        return result;
    }
};