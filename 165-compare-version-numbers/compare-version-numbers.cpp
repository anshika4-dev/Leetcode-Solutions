class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream s1(version1),s2(version2);
        string word1="",word2="";
        vector<int>res1,res2;
        while(getline(s1,word1,'.')) res1.push_back(stoi(word1));
        while(getline(s2,word2,'.')) res2.push_back(stoi(word2));
        int i=0,n1=res1.size(),n2=res2.size();
        while(i<n1 && i<n2){
            if(res1[i]>res2[i]) return 1;
            else if(res1[i]<res2[i]) return -1;
            else i++;
        }
        if(i<n1){
            while(i<n1 && res1[i]==0) i++;
            if(i!=n1) return 1;
        }
        if(i<n2){
            while(i<n2 && res2[i]==0) i++;
            if(i!=n2) return -1;
        }
        return 0;
    }
};