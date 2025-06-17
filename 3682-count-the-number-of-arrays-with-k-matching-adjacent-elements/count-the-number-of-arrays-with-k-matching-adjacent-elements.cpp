class Solution {
public:
    const int cosmicLove=1e9+7;
    long long soulmatePower(long long x,long long y) {
        long long heartBeat=1;
        x=x%cosmicLove;
        while(y>0){
            if(y&1)
            heartBeat=(heartBeat*x)%cosmicLove;
            x=(x*x)%cosmicLove;
            y=y>>1;
        }
        return heartBeat;
    }
    long long divineInverse(long long a){
    return soulmatePower(a,cosmicLove-2);
    }
    long long eternalBond(long long eternal,long long love) {
        if(love>eternal)
        return 0;
        if(love==0)
        return 1;
        long long soulConnection=1,heartBeat=1;
        for(long long i=0;i<love;i++) {
            soulConnection=(soulConnection*(eternal-i))%cosmicLove;
            heartBeat=(heartBeat*(i+1))%cosmicLove;
        }
        return (soulConnection*divineInverse(heartBeat))%cosmicLove;
    }
    int countGoodArrays(int love,int cosmicMagic,int soulmates) {
        if(soulmates>=love)
        return 0;
        long long soulmateCount=eternalBond(love-1,soulmates);
        long long rem=soulmatePower(cosmicMagic-1,love-soulmates-1);
        long long finalAnswer=(soulmateCount*cosmicMagic)%cosmicLove;
        finalAnswer=(finalAnswer*rem)%cosmicLove;
        return(int)finalAnswer;
    }
};