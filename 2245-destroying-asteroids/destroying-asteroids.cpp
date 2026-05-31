class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n=asteroids.size();
        long long masss=mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<n;i++){
            if(asteroids[i]>masss){
                return false;
            }
            masss=masss+asteroids[i];
        }
        return true;
    }
};