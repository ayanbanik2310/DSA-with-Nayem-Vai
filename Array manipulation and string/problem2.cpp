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
        if(freq[i] != 0)
        {
            ch.push_back(char(i+'a'));
            v.push_back(freq[i]);
            mxheight = max(mxheight, freq[i]);
        }
    }



    for(int height = mxheight; height>0; height--)
    {
        for(int j = 0; j<v.size(); j++)
        {
            if(height <= v[j])
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
    for(auto it:ch) cout<<it<<" ";
    
    return 0;
}
