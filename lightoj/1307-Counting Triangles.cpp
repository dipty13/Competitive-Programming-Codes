#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, x, k = 0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n + 5];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a, a + n);
        int c = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                x = a[i] + a[j];
               int y = upper_bound(a , a + n, x - 1) - a ;
              // cout << y <<  endl;
               c += y - j - 1;

             //  cout << c << endl;
            }
        }
		printf("Case %d: %d\n", ++k, c);
	 }
	 return 0;


}
