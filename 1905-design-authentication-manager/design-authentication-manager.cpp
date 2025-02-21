class AuthenticationManager {
public:
    int ttl = 0;
    list<string> l;
    unordered_map<string, pair<list<string>::iterator, int>> mp;

    AuthenticationManager(int timeToLive) {
        ttl = timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        l.push_front(tokenId);
        mp[tokenId] = {l.begin(), currentTime + ttl};
    }
    
    void renew(string tokenId, int currentTime) {
        refresh(currentTime);
        if (!mp.count(tokenId)) return;

        auto it = mp[tokenId].first;
        l.erase(it);
        l.push_front(tokenId);

        mp[tokenId] = {l.begin(), currentTime + ttl};
    }
    
    int countUnexpiredTokens(int currentTime) {
        refresh(currentTime);

        return l.size();
    }

    void refresh(int currentTime) {
        while (!l.empty() && mp[l.back()].second <= currentTime) {
            mp.erase(l.back());
            l.pop_back();
        }
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */