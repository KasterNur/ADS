#include <bits\stdc++.h>
using namespace std;
void  creatPLS(const char* ,int* );
void findPateren(char* ,char* ,int* );

int main(int argc, char const *argv[])
{
    
    char text[]="AAABCAACABDBCSA";
    char pat[] ="ABABCAB";//0012023
    int n= strlen(text);
    int m= strlen(pat);
    //longst perfix suffix string we call pls[] int
        
    int pls[m];
    creatPLS(pat,pls);

    
    for(int i=0;i<m;i++)
    {
        cout<<pls[i];
    }
    //find pateren
    findPateren(text,pat,pls);


    return 0;
}

void  creatPLS(const char* pat,int* pls)
{
   printf("createPLS function");
   int i=0;
   int len=1;
   pls[0]=0;
   while(i<strlen(pat))
   {
      if(pat[i]==pat[len])
      {
        
        i++;
        len++;
        pls[i]=len;
      }else{
        if(len!=0){
            pls[len]=pls[len-1];
            // lps[k]=lps[k-1];

        }else{
            pls[i]=0;
            i++;
        }
      }
   }
}

void findPateren(char* text,char* pat,int* pls)
{
    printf("findSearch function");
}