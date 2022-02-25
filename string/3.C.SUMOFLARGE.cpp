https://practice.geeksforgeeks.org/problems/sum-of-numbers-or-number1219/1

string zerohelper(string res){
      string str="";
      int i=0;
      while(i<res.size()-1 and res[i]=='0'){
          i++;
      }
      while(i<res.size()){
          str+=res[i++];
      }
      return str;
  }
    string findSum(string X, string Y) {
        // Your code goes here
        X=zerohelper(X);
        Y=zerohelper(Y);
            int n1=X.length();
            int n2=Y.length();
            int carry=0;
            int sum=0;
            if(n1>n2){
                int temp=n1-n2;
                while((temp--)>0){
                    Y="0"+Y;
                }
            }
            else{
                int temp=n2-n1;
                while((temp--)>0){
                    X="0"+X;
                }
            }
            
            // cout<<X<<" "<<Y<<endl;
            string res="";
            int len=max(n1,n2);
            for(int i=len-1;i>=0;i--){
                sum=((X[i]-'0')+(Y[i]-'0'))+carry;
                carry=sum/10;
                res=to_string(sum%10)+res;
            }
            if(carry!=0){
                res=to_string(carry)+res;
            }
            return res;
            
            
            
    }
