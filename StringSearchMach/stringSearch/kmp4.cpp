#include <bits\stdc++.h>
using namespace std;

void createLPS(char* , int* );
void SearchKMP(char* ,char* ,int* );

int main()
{
    cout<<"hi";
    //find LPS(long perfix sufix string) table or П table 
    char txt[] ="AAABBCCDDABBEF";
    // char pat[] = "ABBFDGD";
      char pat[] = "AABAABAAB";//010123456
    int N= strlen(txt);
    int M= strlen(pat);
    int LPS[M];
    createLPS(pat,LPS);
    int cou=0;
    while (cou<M)
    {
        cout<<LPS[cou];
       cou++;
    }
   
    //find word wit KMP
    SearchKMP(txt,pat,LPS);
    return 0;
}

void createLPS(char* pat, int* lps)
{
   
   int i=1;
   int lv=0;
   lps[0]=lv;
    while (i<strlen(pat))
    {
        if(pat[i]==pat[lv])
        {
          
             lv++;
             lps[i]=lv;
            i++;
        }else{
            if(lv==0)
            {
                
                lps[i]=0;
                i++;
            }else{
                lv=lps[lv-1];
                
 
            }
        }
    }
    
}

void SearchKMP(char* txt,char* pat,int* LPS)
{
    cout<<"this is Search"<<endl;
}