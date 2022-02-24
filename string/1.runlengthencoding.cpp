
Concept-Two Pointer Approach Like Partition algorithm in quicksort

https://practice.geeksforgeeks.org/problems/run-length-encoding/1
string encode(string src)
{     
  //Your code here 
     int n=src.length();
     int i=0;
     int j=0;
     string temp="";
     while( j<n){
         if(src[i]==src[j]){
             j++;
         }
         else{
             temp+=src[i];
             temp+=to_string(j-i);
             i=j;
         }
     }
     if(src[i]==src[j-1]){
         temp+=src[i];
         temp+=to_string(j-i);
     }
     return temp;
}     
============================================================================================================================================================================== 
https://practice.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates0744/1#
class Solution{
public:
    string func(string s,int &n){
                int i=0;
        int j=0;
        string temp="";
        for(;j<n and i<n;){
            if(s[i]!=s[j]){
                if(j-i==1){
                    temp+=s[i];
                    
                }
               i=j;
            }
            else{
                j++;
            }
        }
        if(i==j-1){
            temp+=s[n-1];
        }
        n=temp.length();
        return temp;
    }
    string remove(string s){
        // code here
       
        int n=s.length();
        int n1=s.length();
        
        while(1){
            s=func(s,n);
            if(n==n1){
                break;
            }
            n1=n;
            
        }
        return s;

    }
}; 
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
