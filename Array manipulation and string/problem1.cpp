#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin, s);

    vector<int>v;

    int i = 0; 
    int len = 0;
    int mxheight = 0;
    while(s[i] != '\0')
    {   
        if(s[i] == ' ')
        {
            v.push_back(len);
            mxheight = max(mxheight, len);
            len = 0;
            i++;
        }
        else
        {
            len++;
            i++;
        }

    }

    mxheight = max(mxheight, len);
    v.push_back(len);


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
    for(auto it:v) cout<<it<<" ";


    
    return 0;
}
