class Solution {
public:
    int findComplement(int num) {
         string s;
        while(num>0){
            int n=num%2;
            s.push_back(n+'0');
            num=num/2;
        }
    
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                s[i]='0';
            }
             else
             s[i]='1';
        }
             
        int dec=0;
        int p=0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                dec += pow(2, p);
            p++;
        }
        return dec;
    }
};