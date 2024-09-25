#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin, s);
    int freq[26] = {0};

    int i = 0;
    while(s[i] != '\0')
    {   
        if(s[i] != ' ')  freq[s[i]-'a']++;  
        i++; 
    }

    for(int i=0; i<26; i++)
    {
        if(freq[i] != 0)
        {
            cout<<char(i+'a')<<" ";
            cout<<freq[i]<<endl;
        }
    }
    
    return 0;
}
