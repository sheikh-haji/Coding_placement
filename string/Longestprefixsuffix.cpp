KMP ALgorithm-Concept
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
