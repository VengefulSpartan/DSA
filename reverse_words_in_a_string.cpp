class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int l=0;int r=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                if(r!=0&&l==r){
                    s[r]=' ';
                    r++;
                    l=r;
                };
                s[r]=s[i];
                r++; 
            }else if(s[i]==' '){
                if(r>l){
                    reverse(s.begin()+l,s.begin()+r);
                    l=r;
                }else{
                    continue;
                }
            }else{
                continue;
            };
            
            
        };
        if(r>l){
                reverse(s.begin()+l,s.begin()+r);
            };
        s.resize(r);
        return s;
    }
};