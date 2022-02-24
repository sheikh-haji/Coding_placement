// https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1#
BRUTE FORCE
int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int> m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        
        int n=str.length();
        int temp=m[str[n-1]];
        for(int i=n-2;i>=0;i--){
            
                    if( m[str[i]]>=m[str[i+1]]){
                    temp+=m[str[i]];}
                    else{
                        temp-=m[str[i]];
                    }
                }
            
        
        return temp;
    }
......................................................................
