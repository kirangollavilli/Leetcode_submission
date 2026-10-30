class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;
        int count = 0;

        while (n) {
            n &= (n - 1);
            count++;
        }

        return count;
    }
};

/*
class Solution {
public:
    int hammingDistance(int x, int y) {
        int a,b;
        int count=0;
        while ( x!=0 || y!=0 ){
            a=x&1;
            b=y&1;
            if(a!=b){
                count++;
            }
            x=x>>1;
            y=y>>1;
        }
        return count;
    }
};
*/