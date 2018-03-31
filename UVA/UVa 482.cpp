#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p[1000],q,i,c;
    string a;
    char b[1000][1000];
    scanf("%d",&t);
    bool state = true;

    while(t--)
    {

       if (!state)  printf("\n");
      state = false;
        c=0;
        while(true){
                scanf("%d",&q);
                    p[q-1]=c++;
                if(getchar()=='\n'){
                    break;
                }


        }
        for(i=0;i<c;i++)
        {
            scanf("%s",b[i]);

        }

        for(i=0;i<c;i++)
        {
          printf("%s\n",b[p[i]]);

        }

    }
    return 0;
}
