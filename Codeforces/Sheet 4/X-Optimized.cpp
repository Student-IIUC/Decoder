#include "bits/stdc++.h"

using namespace std;
 
int main()
{ 
    string str;   cin >> str;   int size = str.size();
  
    if (str[0] == 'a') {sort(str.begin(),str.end());  cout << str;}
 
   else if(size < 3)  {cout << str;}
 
   else if(str[size-2] == 'z')  
        {sort(str.begin(),str.begin()+(size-2)); sort(str.begin()+(size-2),str.end());  cout << str;}   
   else
       {sort(str.begin(),str.begin()+(size-1));  cout << str;}    
}