
https://practice.geeksforgeeks.org/problems/multiply-two-strings/1
string multiplyStrings(string a, string b) {
       //Your code here
       int n=a.length();
       int m=b.length();
       if(a=="0" or b=="0"){
           return "0";
       }
       bool isNegative=false;
       if(a[0]=='-' and b[0]!='-'){
           isNegative=true;
           a=a.substr(1);
           n--;
       }
       else if(a[0]!='-' and b[0]=='-'){
           isNegative=true;
           b=b.substr(1);
           m--;
       }
       else if(a[0]=='-' and b[0]=='-'){
           a=a.substr(1);
           b=b.substr(1);
           n--;
           m--;
           
       }
       int* ans=new int[a.length()+b.length()];
       for(int i=0;i<m+n;i++){
           ans[i]=0;
       }
       for(int i=n-1;i>=0;i--){
           for(int j=m-1;j>=0;j--){
               int mul=(a[i]-'0')*(b[j]-'0')+ans[i+j+1];
               ans[i+1+j]=mul%10;
               ans[i+j]+=mul/10;
           }
       }
       string x;
       for(int i=0;i<m+n;i++){
           if(x.length()!=0 || ans[i]!=0){
               x.push_back(ans[i]+'0');
           }
       }
       if(isNegative){
           x='-'+x;
       }
       return x;
    }


https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1

void factorial (int n){
    
    int res[MAX];
    res[0]=1;
    int res_size=1;
    for(int x=2;x<=n;x++){
        res_size=multiply(res,res_size,x);
    }
    // cout<<"factorial of the given number\n"<<endl;
    for(int i=res_size-1;i>=0;i--){
        cout<<res[i];
    }
    cout<<endl;
    
}
int multiply (int res[],int res_size,int x){
    int carry=0;
    for(int i=0;i<res_size;i++){
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    
    while(carry){
        res[res_size]=carry%10;
        carry/=10;
        res_size++;
    }
    return res_size;
    
    
}
