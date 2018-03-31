#include<bits/stdc++.h>
using namespace std;
char a[200][200],b[200][200];
int length1=0,length2=0;
int table[200][200],s[200][200],flag=0;

void lcsprint(int length1,int length2)
{
    if(length1==0||length2==0)return;
    if(s[length1][length2]==1)
    {
        lcsprint(length1-1,length2-1);
        if(flag==0)printf("%s",a[length1]);
        else printf(" %s",a[length1]);
        flag=1;
    }
    else if(s[length1][length2]==2)
    {
        lcsprint(length1-1,length2);
    }
    else lcsprint(length1,length2-1);
}

void lcs()
{
    int i,j,k,l,m,n;
    for(i=0;i<=length1;i++)
    {
        for(j=0;j<=length2;j++)table[i][j]=0;
    }
    for(i=1;i<length1;i++)
    {
        for(j=1;j<length2;j++)
        {
            if(strcmp(a[i],b[j])==0)
            {
                table[i][j]=table[i-1][j-1]+1;
                s[i][j]=1;
            }
            else if(table[i-1][j]>=table[i][j-1])
            {
                table[i][j]=table[i-1][j];
                s[i][j]=2;
            }
            else
            {
                table[i][j]=table[i][j-1];
                s[i][j]=3;
            }
        }
    }
    lcsprint(length1-1,length2-1);

}

int main()
{
    char temp[1000];
    while(scanf("%s",&temp)==1)
    {
        flag=0;
        length1=1,length2=1;
        strcpy(a[length1++],temp);
        while(scanf("%s",&temp))
        {
            if(strcmp(temp,"#")==0)break;
            strcpy(a[length1++],temp);
        }
        while(scanf("%s",&temp))
        {
            if(strcmp(temp,"#")==0)break;
            strcpy(b[length2++],temp);
        }
        lcs();
        printf("\n");
       // cerr<<"Time elapsed:"<<clock()*1000.0/CLOCKS_PER_SEC<<"ms"<<"\n";
    }

    return 0;
}





