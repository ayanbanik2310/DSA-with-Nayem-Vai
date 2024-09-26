#include<bits/stdc++.h>
using namespace std;


void count_freq(string s, int (&freq)[26])
{
    int i = 0;
    while(s[i] != '\0')
    {   
        if(s[i] != ' ')  freq[s[i]-'a']++;  
        i++; 
    }

}

int count_mxheight(int freq[26])
{
    int mxheight = 0;

    for(int i=0; i<26; i++)
    {
        if(mxheight<freq[i]) mxheight = freq[i];
    }
    return mxheight;
}

void print_histogram(int mxheight, int freq[26])
{
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
    for(char ch = 'a'; ch<='z'; ch++) cout<<ch<<" ";
}

int main()
{
    string str;
    getline(cin, str);
    int freq[26] = {0};

    count_freq(str, freq);
    int mxheight = count_mxheight(freq);
    print_histogram(mxheight, freq);
    
    return 0;
}
