#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    getline(cin, s);


    int i = 0; 
    int v[51] ={0};
    int mxheight = 0;
    int len = 0;
    while(s[i] != '\0')
    {   
        if(s[i] == ' ')
        {
            v[len] = len;
            if(mxheight < len) mxheight = len;
            len = 0;
            i++;
        }
        else
        {
            len++;
            i++;
        }
    }

    if(mxheight < len) mxheight = len;
    v[len] = len;

    for(int height = mxheight; height>0; height--)
    {
        for(int j = 0; j<=50; j++)
        {
            if(v[j]==0) cout<<"  ";

            else if(height <= v[j])
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
    for(int i=1; i<=50; i++) cout<<i<<" ";


    
    return 0;
}
