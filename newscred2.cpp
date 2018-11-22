#include<bits/stdc++.h>
using namespace std;
int hasFunction(string location)
{
    int sum = 0;
    for(int i = 0 ;i < location.size() ;i++)
    {
        if(location[i] >= 'A' && location[i] <= 'Z'){
        sum += (location[i] - 65);
        }else{
            sum += (location[i] - 97);
        }

    }

    return sum % 10;
}
int main()
{
    vector<pair<pair<string, string> , pair<int,double> > > v[1005];
    v[hasFunction("banani")].push_back({{"dipty","01788992"},{4,3.5}});
    v[hasFunction("Banani")].push_back({{"dip","017889920"},{4,3.5}});
    v[hasFunction("Dhanmondi")].push_back({{"ty","01788991"},{4,3.5}});
    v[hasFunction("Mohakhali")].push_back({{"dity","0178899000"},{6,3.5}});

    string location = "ppp";
    int numberOfSeats;
    double rating;
    cin>>location>>numberOfSeats>>rating;
    vector<pair<pair<string, string> , pair<int,double> > >::iterator it;
    it = v[hasFunction(location)].begin();
    for(int i = 0 ; i < v[hasFunction(location)].size(); i++)
    {
        if(it.second.second.first == numberOfSeats)
        {
            if(v[hasFunction(location)][i].second.second.second == rating)
            {
                cout<<"driver : "<<v[hasFunction(location)][i].first.first.first<< " number: "<< v[hasFunction(location)][i].first.first.second<<endl;
            }
        }
    }
    return 0;
}
