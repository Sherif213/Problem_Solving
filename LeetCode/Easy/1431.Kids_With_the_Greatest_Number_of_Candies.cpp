class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> array;
        int max = candies[0];
        for(int i = 0;i<candies.size();i++){
            if(max<candies[i]){
                max = candies[i];
            }
        }
        for(int i = 0;i<candies.size();i++){
            if(candies[i]+extraCandies >=max){
               array.push_back(true);
            }else{
                array.push_back(false);
            }
        }
        return array;
    }
};