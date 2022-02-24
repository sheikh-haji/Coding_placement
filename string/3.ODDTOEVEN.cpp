======================================================================================================================================================
https://practice.geeksforgeeks.org/problems/odd-to-even0537/1
string makeEven(string s)
{
//code here.
int n = s.size();
int num = s[n-1]-'0';
int index = n, last = n;
for (int i=n-2;i>=0;i--) {
int curr = s[i]-'0';
if (curr%2 == 0) {
if (curr < num) {
index = i;
}
else if (last == n) {
last = i;
}
}
}
if (index == n && last == n) {
return s;
}
else if (index != n) {
char temp = s[index];
s[index] = s[n-1];
s[n-1] = temp;
}
else {
char temp = s[last];
s[last] = s[n-1];
s[n-1] = temp;
}
return s;
}
===============================================================================================================
