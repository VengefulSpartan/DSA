class Solution {
public:
    int myAtoi(string s) {
        int sign=1;int i=0;int size=s.size();int ans=0;
        while(i<size){
            if(s[i]==' '){
                i++;
            }else if(s[i]=='-'){
                sign=-1;i++;
                break;
            }else if(s[i]=='+'){
                i++;break;
            }else{
                break;
            };
        };
        int check=INT_MAX/10;
        while(i<size){
            int number=s[i]-'0';
            if(number>=0&&number<=9){
                //check for overflow
                if(ans>check){
                    if(sign==-1){
                            return INT_MIN;
                            break;
                        }else{
                            return INT_MAX;
                            break;
                        };
                }else if(ans==check){
                    if(number>7){
                        if(sign==-1){
                            return INT_MIN;
                            break;
                        }else{
                            return INT_MAX;
                            break;
                        };
                        
                    }else{
                        ans=ans*10+number;i++;
                    };
                }else{
                    ans=ans*10+number;i++;
                };
            }else{
                break;
            };

            

        };
        return ans*sign;
    }
};