#include<bits/stdc++.h>
using namespace std;
class Driver{
    public:
    string currentLoc,name;
    int noPassenger;
    double rating;
    string phone;

    class Node{
        string loc,na,phone;
        double rat;
        int pas;
        Node* next;
    };
    Node arr[1005];

//    Driver(string currl,string n,int noP,double  rat,string ph){
//        currentLoc = currl;
//        name = n;
//        noPassenger = noP;
//        phone = ph;
//    }
};
//void insert_arr(int index,string place,string name,int pas,double rat, string phone)
//{
////    Driver.Node->tmp = Driver.Node->next;
//}
int main()
{
    int i,j ;
    //Driver y= new Driver();
     Driver x[]= {
                {"uttara","dip",4,3.5,"01688002"},
              {"dhanmondi","shaila",6,4.2,"01688002"},
                 {"dhanmondi","shanta",8,4.3,"01688002"}

    };
    map<string,pair<pair<int,double>,string > > m;
    map<string,pair<pair<int,double>,string >>::iterator it;
    m["uttara"] = {{4,3.5},"01688002"};
    m["dhanmondi"] = {{6,4.5},"01688002"};
    m["banani"] = {{8,3.2},"01688002"};
    string userCurrentLocation,travelingLocation;
    int noPassenger;
    double rating;
    cout<<"current location: ";
    cin>>userCurrentLocation;
     cout<<"traveling location: ";
    cin>>travelingLocation;
     cout<<"number of passenger: ";
    cin>>noPassenger;
     cout<<"rating: ";
    cin>>rating;
    int flag = 0;
    for(it = m.begin();it!=m.end();it++)
    {
//        if(x[i][0] == userCurrentLocation && x[i][3]>=rating && x[i][2]== noPassenger)
//        {
//            cout<<"Driver: "<<x[i][1]<<" Phone: "<<x[i][4]<<endl;
//            flag = 1;
//            break;
//        }
        if(it->first == userCurrentLocation && it->second.first.first == noPassenger && it->second.first.second >= rating )
        {
            cout<<" Phone: "<<it->second.second<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"Coudln't found match\n";
    }


    return 0;
}
