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

    vector<char> ch;
    vector<int> v;
    int mxheight = 0;

    for(int i=0; i<26; i++)
    {
        if(mxheight<freq[i]) mxheight = freq[i];
    }



    for(int height = mxheight; height>0; height--)
    {
        for(int j = 0; j<26; j++)
        {
            if(height <= freq[j])
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    // for(auto it:ch) cout<<it<<" ";
    for(char ch = 'a'; ch<='z'; ch++) cout<<ch<<" ";
    
    return 0;
}
