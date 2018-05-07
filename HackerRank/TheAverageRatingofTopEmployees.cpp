#include <bits/stdc++.h>

using namespace std;

// Complete the averageOfTopEmployees function below.
void averageOfTopEmployees(vector<int> rating) {
    double sum=0,c=0;
    for(int i=0;i<rating.size();i++)
    {
        if(rating[i]>=90&&rating[i]<=100)
        {
            sum+=rating[i];
            c++;
        }
    }
    double x = (sum/c)+0.001;

   //double p = 2.344;
//    double x = (sum/double(c))*100.0;
//    x=(ceil(x))/100.0;
//cout<<sum<<endl;
//double x = p*100.0;
//cout<<x<<endl;
//    x=(ceil(x))/100.0;
    cout<<fixed<<setprecision(2)<<x<<endl;
    //printf("%.2lf\n",sum/c);

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> rating(n);

    for (int rating_itr = 0; rating_itr < n; rating_itr++) {
        int rating_item;
        cin >> rating_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        rating[rating_itr] = rating_item;
    }

    averageOfTopEmployees(rating);

    return 0;
}

