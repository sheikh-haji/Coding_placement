KMP ALgorithm-Concept
1.KMP pattern matching
https://practice.geeksforgeeks.org/problems/search-pattern0205/1
 void compute_lps(string pat,vector<int>&lps,int n){
            int i=0;int j=1;
            while(i<n and j<n){
                if(pat[i]==pat[j]){
                    lps[j]=i+1;
                    j++;
                    i++;
                }
                else{
                    if(i==0){
                        lps[j]=0;
                        j++;
                    }
                    else{
                        i=lps[i-1];
                    }
                }
            }
            return;
        }
        vector <int> search(string pat, string txt)
        {
            //code hee.
            vector<int> res;
            int n1=txt.length();
            int n2=pat.length();
            vector<int> lps(n2,0);
            compute_lps(pat,lps,n2);
            int i=0;
            int j=0;
            while(j<n1){
                if(pat[i]==txt[j]){
                    i++;
                    j++;
                    if(i==n2){
                        // we found a pattern in this string
                     res.push_back(j-i+1);
                     i=lps[i-1];
                    }
                }
                else{
                    if(i==0){
                       j++;
                    }
                    else{
                        i=lps[i-1];
                    }
                }
                
            }
            return res;
        }

2.Longest Prefix Suffix
https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1

int lps(string s) {
// Your code goes here
int n = s.length();
vector<int> lps(n, 0);
int i=0, j=1;
while (j < n) {
if (s[i] == s[j]) {
lps[j] = i+1;
i++;
j++;
}
else {
if (i == 0) {
lps[j] = 0;
j++;
}
else {
i = lps[i-1];
}
}
}
return lps[n-1];
}

3.String Formation from substrings
https://practice.geeksforgeeks.org/problems/string-formation-from-substring/0
int isrepeat(string s) {
// Your code goes here
int n = s.length();
vector<int> lps(n, 0);
int i=0, j=1;
while (j < n) {
if (s[i] == s[j]) {
lps[j] = i+1;
i++;
j++;
}
else {
if (i == 0) {
lps[j] = 0;
j++;
}
else {
i = lps[i-1];
}
}
}
return (n%(n-lps[n-1])==0)?1:0;
}
