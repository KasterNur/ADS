#include <bits\stdc++.h>
using namespace std;
void findTestKMP(char* ,char*  ,int* );

void createLPS(char* pat,int* lps,int M){
    cout<<"this is LPS"<<endl;
    int len=0;
    lps[0]=0;
    int i=1;
    while (i<M)
    {
        if(pat[i]==pat[len])
        {
            
            len++;
            lps[i]=len;
            i++;
        }else{
            if(len==0)
            {
                 
                 lps[i]=0;
                 i++;
            }else
            {
                len=lps[len-1];
            }
        }
    }
    
}
int main()
{
    cout<<"Hello";
    // char txt[]="AABDABCFABDFD";
    // char pat[]="ABD";
        char txt[] = "AAAAABAAABA";
   char pat[] = "AABAABAAB";//010123456
    int N=strlen(txt);
    int M= strlen(pat);

    //LPS table creatLPS ->int lps[]
    int lps[M];
    lps[0]=0;
    createLPS(pat,lps,M);

        int cou=0;
     while(M>cou)
     {
        cout<<lps[cou];
        cou++;
     }

    //findTestKMP
    findTestKMP(txt,pat,lps);

    //
    return 0;
}



void findTestKMP(char* txt,char* pat,int* lps){
   cout<<"this is KMP search"<<endl;
   int i=0;
   int j=0;
   while(i<strlen(txt))
   {
      if(txt[i]==pat[j])
      {
        i++;
        j++;
      }else{
        if(j==0)
        {
            j=lps[j-1];
            i++;
        }else{
            j=lps[j-i];
        }
      }
   }
}