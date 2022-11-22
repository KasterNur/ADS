#include <bits\stdc++.h>
using namespace std;

void kmpSearch(char* ,char* , int* );
void creatLps(char* ,int* );
int main()
{
    
//    char txt[] = "ABABDABACDABABCABAB";
   char txt[] = "AAAAABAAABA";
   char pat[] = "BA";
   //find lps
   int m=strlen(pat);
   int lps[m];
   int k=1;
   int len=0;
    while(m>k)
    {
        if(pat[k]==pat[len])
        {
           
            k++;
            len++;
             lps[len]=len;
        }else{
            if(len!=0)
            {
                lps[k]=lps[k-1];
                
            }else{
                lps[k]=0;
                k++;
            }
        }
       
    }

   for(int i=0;i<m;i++)
    {
      cout<<lps[i];
        
    }
    cout<<"finish STL\n";

    //Search the word friquency 
    int i=0;//index in text
    int j=0;// index in pateren
    while(i<strlen(txt))
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
        }else{
            if(j!=0)
            {
                j=lps[j-1];
            }else
            {
                i++;
            }
        }
        if(j==m)
        {
            printf("we found a patteren with the index %d",i-j);
            j=lps[j-1];
        }
    }
    return 0;
}

void kmpSearch(char* txt,char* pat, int* lps)
{
    int N=strlen(txt);
    int M=strlen(pat);
    int i=0;int j=0;
    while(N>i)
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
        }else{
            if(j!=0)
                j=lps[j-1];
            else
                i++;
        }

        //found a pateren
        if(j==M)
        {
           
            printf("Found a pateren at index %d \n",i-j);
             j=lps[j-1];
        }

    }
}
void creatLps(char* pat,int* lps)
{
  int i=1;
  int len=0;
   int size=strlen(pat);
   lps[0]=0;
    while (i<size)
    {
         if(pat[i]==pat[len])
         {
            lps[i]=len;
            i++;
            len++;
            
         }else{
            if(len==0)
            {
                lps[i]=0;
                i++;
            }else{
                len=lps[len-1];
            }
         }
    }
    
  

}