/*
* The idea is to save the data according to driver's location
* and when the user gives a location try to search through
* that location and the other nearest locations
*/

#include<bits/stdc++.h>
using namespace std;

class Driver
{
private:
    static const int HASH_MAX = 10;

    class DriverInfo
    {
    public:
        string currentLocation, name, phone, carType, carNumber;
        int numberOfPassenger, numberOfTimesFined, sumOfFines;
        double rating;
        DriverInfo* next;
    };

    //taking linked list type array to save the driver info according to location
    DriverInfo* driverData[HASH_MAX];

public:
    Driver();
    int hashFunction(string location);
    void insertItems(string driverName, string driverPhone, string driverCarType,
                     string driverCarNum, string driverCurrentLocation,
                     int driverNumOfPassenger,int driveNumeOfTimesFined,
                     int driverSumOfFines, double driverRating);
    bool searchDriver(string location,int numOfPassenger, double neededRating);
};

Driver::Driver()
{
    //setting default values for all the information
    for(int i = 0; i < HASH_MAX; i++)
    {
        driverData[i] = new DriverInfo;
        driverData[i]->name = "empty";
        driverData[i]->phone = "empty";
        driverData[i]->carType = "empty";
        driverData[i]->numberOfPassenger = -1;
        driverData[i]->currentLocation = "empty";
        driverData[i]->numberOfTimesFined = -1;
        driverData[i]->sumOfFines = -1;
        driverData[i]->rating = -1.1;
        driverData[i]->next = NULL;
    }
}
/*
* taking the location and returning it's hash value
*/
int Driver::hashFunction(string location)
{
    int sum = 0;
    for(int i = 0; i < location.size(); i++)
    {
        sum += location[i];
    }
    return sum % HASH_MAX;
}

//inserting the drivers info
void Driver::insertItems(string driverName, string driverPhone, string driverCarType,
                         string driverCarNum, string driverCurrentLocation,
                         int driverNumOfPassenger,int driveNumOfTimesFined,
                         int driverSumOfFines, double driverRating)
{
    //saving driver data according to location
    int index = hashFunction(driverCurrentLocation);
    if(driverData[index]->currentLocation == "empty")
    {
        driverData[index]->currentLocation = driverCurrentLocation;
        driverData[index]->name = driverName;
        driverData[index]->phone = driverPhone;
        driverData[index]->carType = driverCarType;
        driverData[index]->numberOfPassenger = driverNumOfPassenger;
        driverData[index]->numberOfTimesFined = driveNumOfTimesFined;
        driverData[index]->sumOfFines = driverSumOfFines;
        driverData[index]->rating = driverRating;


    }
    else
    {
        DriverInfo* tmp = driverData[index];
        DriverInfo* x = new DriverInfo;

        x -> currentLocation = driverCurrentLocation;
        x -> name = driverName;
        x -> phone = driverPhone;
        x -> carType = driverCarType;
        x -> numberOfPassenger = driverNumOfPassenger;
        x -> numberOfTimesFined = driveNumOfTimesFined;
        x -> sumOfFines = driverSumOfFines;
        x -> rating = driverRating;

        x->next = NULL;

        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = x;
    }
}

/*
* searching with the given location from the user
*/
bool Driver::searchDriver(string location, int numOfPassenger, double neededRating)
{
    int index = hashFunction(location);
    bool foundDriver = false;
    string driverLocation;

    //initializing the pointer with first element of the linked list of the given location
    DriverInfo* tmp = driverData[index];
    while(tmp != NULL)
    {
        if(tmp->numberOfPassenger == numOfPassenger && tmp->rating >= neededRating)
        {
            cout<<"Drivers name: "<<tmp->name <<" phone: "<<tmp->phone<<endl;
            return true;
        }
        tmp = tmp->next;
    }
    //if we can't find the location it will return false
    return false;

}

int main()
{
    //declaring variables for user input
    string userCurrentLocation, userTravellingLocation;
    int userNumberOfPassenger;
    double userRating;

    //initializing driver information
    Driver driver;

    driver.insertItems("Dipty","01680267891","Corola","1885","Banani",4,5,1500,3.2);
    driver.insertItems("Dip","01680267892","Corola","1885","Uttara",6,5,1500,3.5);
    driver.insertItems("Shaila","01680267091","Corola","1885","Dhanmondi",8,5,1500,4.2);
    driver.insertItems("Nasrin","01680227891","Corola","1885","Mohakhali",4,5,1500,4.5);
    driver.insertItems("Nash","01680267893","Corola","1885","Badda",4,5,1500,4.3);

    /* taking two map for saving place name
    *and their distance from other places
    */
    map<string,int> placeNameMap;// map to save distance value using place name
    map<int,string> distanceMap; // map to save place name using distance

    placeNameMap["Banani"] = 20;
    placeNameMap["Uttara"] = 10;
    placeNameMap["Mohakhali"] = 30;
    placeNameMap["Badda"] = 50;
    placeNameMap["Mirpur"] = 60;

    distanceMap[20] = "Banani";
    distanceMap[10] = "Uttara";
    distanceMap[30] = "Mohakhali";
    distanceMap[50] = "Badda";
    distanceMap[60] = "Mirpur";

    //Taking user inputs
    cout<<"Current location: ";
    cin>>userCurrentLocation;
    cout<<endl;
    cout<<"Traveling location: ";
    cin>>userTravellingLocation;
    cout<<endl;
    cout<<"Number of passenger: ";
    cin>>userNumberOfPassenger;
    cout<<endl;
    cout<<"Rating: ";
    cin>>userRating;
    cout<<endl;

    bool flag = false;
    //if flag remains zero that means we didn't find a suitable driver in that location
    flag = driver.searchDriver(userCurrentLocation, userNumberOfPassenger, userRating);

    /*if we didn't find suitable driver in the location
    * we'll check nearest two locations
    */
    if(!flag)
    {
        flag = driver.searchDriver(distanceMap[placeNameMap[userCurrentLocation] + 10],
                                   userNumberOfPassenger, userRating);

        //if we don't find in one location we'll search in the next
        if(!flag)
        {
            flag = driver.searchDriver(distanceMap[placeNameMap[userCurrentLocation] + (2*10)],
                                       userNumberOfPassenger, userRating);
        }
    }
    //if there is no driver found we'll print this message
    if(!flag)
    {
        cout<<"No driver found\n";
    }

    return 0;
}
