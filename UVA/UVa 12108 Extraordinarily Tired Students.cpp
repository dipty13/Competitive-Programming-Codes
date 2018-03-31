#include<bits/stdc++.h>
# define maxn 15
# define infinite 1e6
using namespace std;
//iusing  namespace  std ;
int a [maxn], b [maxn], c [maxn];
int n;
 void  next_min ()
{
    for ( int i = 0 ; i <n; i ++)
    {
        c [i]%= a [i] + b [i];
        if (c [i] == a [i] && cnt>= n) // number strictly greater than the number of sleep before waking sleep.
            c [i] = 0 ;
        c [i] ++;
    }
    return ;
}
bool  all_awake ()
{
    cnt = 0 ;
    for ( int i = 0 ; i <n; i ++)
        if (c [i] <= a [i])
            cnt ++;
    if (cnt == n) / / to determine whether all awake.
        return  true ;
    else
        return  false ;
}
int  main ()
{
    int t = 1 ;
    while ( cin >> n && n)
    {
        memset (a, 0 , sizeof (a));
        memset (b, 0 , sizeof (b));
        memset (c, 0 , sizeof (c));
        for ( int i = 0 ; i <n; i ++)
            cin >> a [i] >> b [i] >> c [i];
        int x
        for (x = 1 ; x <infinite; x ++)
        {
            if (all_awake ())
                BREAK ;
            next_min ();
        }
        if (x <infinite) // to the upper limit is not there.
            cout << "Case" << t << ": "<< x<< endl ;
        else
            cout << "Case" << t << ": -1" << endl ;
        t ++;
    }
    return  0 ;
}
