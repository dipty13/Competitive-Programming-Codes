#include<bits/stdc++.h>
using namespace std;
class HashTable{
private:
    const static int hash_max = 10;
    class LinkedList{
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
    bool searchDriver(string location,int numberOfPassenger);


};

int HashTable::hashFunction(string currentLocation, int numberOfPassenger)
{
    int sum = 0;

    for(int i = 0; i < currentLocation.size(); i++)
    {
        if(currentLocation[i] >= 'A' && currentLocation[i] <= 'Z')
        {
            sum += (int)(currentLocation[i] - 'A');
        }else if(currentLocation[i] >= 'a' && currentLocation[i] <= 'z')
        {
            sum += (int)(currentLocation[i] - 'z');
        }
    }

    return (sum + numberOfPassenger) % hash_max;
}
HashTable::HashTable()
{
    for(int i = 0;i < hash_max;i++)
    {
        hashArray[i] = new LinkedList;
        hashArray[i]->name = "empty";
        hashArray[i]->nextNode = NULL;
    }
}

void HashTable::insertElements(string name, string phone,
                        double fare, double totalKilometerDriven,
                        string carType, string carNumber,
                        string currentLocation, int numberOfPassenger,
                        int noOfTimesFined,int sumOfFines, double rating)
                        {
                            int index = hashFunction(currentLocation, numberOfPassenger);

                            if(hashArray[index]->name == "empty"){
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
                            }else{
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
void inputDriversData()
{
    HashTable ob;
  //  ob.insertElements("")
}
int main()
{

    return 0;
}
