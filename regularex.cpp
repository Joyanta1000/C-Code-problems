#include <bits/stdc++.h>
using namespace std;
bool isValid(string str, int n)
{
 if (!((str[0] >= 'a' && str[0] <= 'z')
 || (str[0] >= 'A' && str[1] <= 'Z')))
 return false;
 for (int i = 1; i < str.length(); i++) {
 if (!((str[i] >= 'a' && str[i] <= 'z')
 || (str[i] >= 'A' && str[i] <= 'Z')
 || (str[i] >= '0' && str[i] <= '9')
 || str[i] == '('|| str[i] == ')'|| str[i] == '*'))
 return false;
 }
 return true;
}
int main()
{
 string str;
 while(cin>>str){
 int n = str.length();
 if (isValid(str, n))
 cout << "Accepted"<<endl;
 else
 cout << "Not Accepted"<<endl;
 }
 return 0;
}
