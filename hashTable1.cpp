#include<bits/stdc++.h>
using namespace std;
class HashTable
{
private:
    const static int hash_max = 10;
    class LinkedList
    {
    public:
        string name;
        string phone;
        double fare;
        double totalKilometerDriven;
        string carType;
        string carNumber;
        string currentLocation;
        int numberOfPassenger;
        int noOfTimesFined;
        int sumOfFines;
        double rating;

        LinkedList *nextNode;
    };
    LinkedList* hashArray[hash_max + 5];
public:
    HashTable();
    void insertElements(string name, string phone,
                        double fare, double totalKilomegterDriven,
                        string carType, string carNumber,
                        string currentLocation, int numberOfPassenger,
                        int noOfTimesFined,int sumOfFines, double rating);
    int hashFunction(string key1, int key2);
    bool searchDriver(string location,int numberOfPassenger, double rating);


};

int HashTable::hashFunction(string currentLocation, int numberOfPassenger)
{
    int sum = 0;

    for(int i = 0; i < currentLocation.size(); i++)
    {
        if(currentLocation[i] >= 'A' && currentLocation[i] <= 'Z')
        {
            sum += (int)(currentLocation[i] - 'A');
        }
        else if(currentLocation[i] >= 'a' && currentLocation[i] <= 'z')
        {
            sum += (int)(currentLocation[i] - 'a');
        }
    }

    return (sum + numberOfPassenger) % hash_max;
}
HashTable::HashTable()
{
    for(int i = 0; i < hash_max; i++)
    {
        hashArray[i] = new LinkedList;
        hashArray[i]->name = "empty";
        hashArray[i]->nextNode = NULL;
    }
}
bool HashTable::searchDriver(string currentLocation, int numberOfPassenger, double rating)
{
    int index = hashFunction(currentLocation, numberOfPassenger);
    LinkedList* x = hashArray[index];
    while(x->nextNode != NULL)
    {
        if(x->numberOfPassenger == numberOfPassenger
                && x->rating >= rating)
        {
            cout << x->name << " " << x->phone << endl;
            return true;
        }
        x = x->nextNode;
    }
    return false;
}
void HashTable::insertElements(string name, string phone,
                               double fare, double totalKilometerDriven,
                               string carType, string carNumber,
                               string currentLocation, int numberOfPassenger,
                               int noOfTimesFined,int sumOfFines, double rating)
{
    int index = hashFunction(currentLocation, numberOfPassenger);

    if(hashArray[index]->name == "empty")
    {
        hashArray[index]->name = name;
        hashArray[index]->phone = phone;
        hashArray[index]->fare = fare;
        hashArray[index]->totalKilometerDriven = totalKilometerDriven;
        hashArray[index]->carType = carType;
        hashArray[index]->carNumber = carNumber;
        hashArray[index]->currentLocation = currentLocation;
        hashArray[index]->numberOfPassenger = numberOfPassenger;
        hashArray[index]->noOfTimesFined = noOfTimesFined;
        hashArray[index]->sumOfFines = sumOfFines;
        hashArray[index]->rating = rating;
    }
    else
    {
        LinkedList* tmp = hashArray[index];
        LinkedList* x = new LinkedList;
        x->name = name;
        x->phone = phone;
        x->fare = fare;
        x->totalKilometerDriven = totalKilometerDriven;
        x->carType = carType;
        x->carNumber = carNumber;
        x->currentLocation = currentLocation;
        x->numberOfPassenger = numberOfPassenger;
        x->noOfTimesFined = noOfTimesFined;
        x->sumOfFines = sumOfFines;
        x->rating = rating;
        x->nextNode = NULL;

        while(tmp->nextNode != NULL)
        {
            tmp = tmp->nextNode;
        }
        tmp->nextNode = x;
    }

}
void inputDriversData(HashTable ob)
{

    ob.insertElements("dipty", "01680536660", 40.0, 1000.0, "Audi", "dhaka-23", "Banani", 4, 2,200, 3.5);
    ob.insertElements("ty", "01680536661", 40.0, 1000.0, "Audi", "dhaka-23", "banani", 4, 2,200, 3.5);
    ob.insertElements("dip", "01680536662", 40.0, 1000.0, "Audi", "dhaka-23", "Banani", 2, 2, 200,3.5);
    ob.insertElements("dity", "01680536663", 40.0, 1000.0, "Audi", "dhaka-23", "Mohakhali", 6, 2,200, 3.5);
    ob.insertElements("dipty", "01680536664", 40.0, 1000.0, "Audi", "dhaka-23", "Mohakhali", 2, 2,200, 3.5);
    ob.insertElements("dipy", "01680536665", 40.0, 1000.0, "Audi", "dhaka-23", "Uttara", 4, 2,200, 3.5);
    ob.insertElements("dty", "01680536666", 40.0, 1000.0, "Audi", "dhaka-23", "Uttara", 2, 2, 200,3.5);
}
void suggestDriver(HashTable ob, string location, string travelLocation,
                   int numberOfPassenger, double rating)
{

    if(!ob.searchDriver(location, numberOfPassenger, rating))
    {
        cout << "Not found!" <<endl;
    }

}
int main()
{
    HashTable ob;
    inputDriversData(ob);
    string userCurrentLocation;
    string userTravelLocation;
    int numberOfpassenger;
    double rating;

    cout<<"Input your location: ";
    cin >> userCurrentLocation;
    cout<<"\nInput your travel location: ";
    cin >> userTravelLocation;
    cout<<"\nInput your number of passenger: ";
    cin >> numberOfpassenger;
    cout<<"\nInput rating: ";
    cin >> rating;


    suggestDriver(ob,userCurrentLocation, userTravelLocation, numberOfpassenger, rating);
    return 0;
}
