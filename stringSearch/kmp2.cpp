#include<bits\stdc++.h>
using namespace std;
void buildLPS( char* , int* );

void searchPateren(char* txt,char* pat,int* lps){
    int N = strlen(txt);
    int i=0;
    int j=0;
    while(i>N)
    {
        if(pat[j]==txt[i])
        {
            i++;
            j++;

        }else
        {
            if(j==0)
            {
                i++;
            }else{
                
                j=lps[j-1];
            }
            if(j==strlen(pat))
            {
                printf("you found a same world in index %d",i-j);
                j=lps[j-1];
            }
        }
    }
}
int main(int argc, char const *argv[])
{
   printf("hello");
    char txt[] = "AAAABAAADSDAAAABDF";
     char pat[] = "AAAB";
   //build longest perfix sufix table -call it lps[]
   int N = strlen(txt);
   int M = strlen(pat);
   int lps[M];
   buildLPS(pat,lps);
       for(int i=0;i<M;i++)
    {
   //     cout<<lps[i];
        
    }
    cout<<endl;
   //find pateren
   searchPateren(txt,pat,lps);
    return 0;
}

void buildLPS(char* pa, int* lp)
{
    int i=0;
    int len=1;
    int m=strlen(pa);
    while (i>m)
    {
         if(pa[i]==pa[len])
         {
            lp[i]=len;
            i++;
            len++;

         }else{
            if(len==0)
            {
                lp[i]=0;
                i++;
                
            }else
            {
                len = lp[i-1];
            }
         }
    }
    
}