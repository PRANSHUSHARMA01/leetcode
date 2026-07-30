class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>s(n);
        for(int i=0;i<n;i++){
            s[i]=start+( 2*i);               
              
        }
        int k=s.size();
        int ans=0;
        for(int i=0;i<k;i++){
            ans=ans^s[i];
        }
        return ans;
    }
};