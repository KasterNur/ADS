#include <bits\stdc++.h>
using namespace std;

int main()
{
    cout<<"hello"<<endl;
    char txt[] = "AAAAABAAABA";
    char pat[] = "AAB";//010123456
    //buildLPS table
    int m=strlen(pat);
    int lps[m];
   
    int vp=0;//value of pateren table
     lps[0]=vp;
    int i=1;
    
    while(m>i)
    {
        if(pat[vp]==pat[i])
        {
            
            vp++;
           
            lps[i]=vp;
             i++;
        }else{
            if(vp==0)
            {
                lps[i]=0;
                i++;
            }else{
                vp=lps[vp-1];
            }
        }
    }
    //
    int cou=0;
     while(m>cou)
     {
        cout<<lps[cou];
        cou++;
     }
     cout<<" all is here..."<<endl;

    //search KMP
    i=0; //use for index of text
    int j=0;//use for index of patteren
    while (i<strlen(txt))
    {
         if(txt[i]==pat[j])
         {
            i++;
            j++;
         }else
         {
            if(j!=0)
            {
                j=lps[j-1];
            }else
            {
                i++;
            }
         }
                     //found if m=J
            if(m==j)
              {
                printf("Found the match in index of %d",i-j);
                j=lps[j-1];
              }
    }
    
    return 0;
}