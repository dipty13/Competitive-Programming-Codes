#include<bits/stdc++.h>
using namespace std;
void print(auto v){

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
void sortStl(){
    vector<int> v = {9, 2, 5, 1};

    sort(v.begin(), v.end()); // sorts elements in ascending order
    print(v); //outputs: 1 2 5 9

    v = {9, 2, 5, 1};
    sort(v.begin(), v.begin() + 3); // sorts first 3 elements of the array
    print(v); //outputs: 2 5 9 1

    v = {9, 2, 5, 1};
    sort(v.rbegin(), v.rend()); // sorts elements in descending order
    print(v); //outputs: 9 5 2 1

    vector<string> vString = {"pen", "apple", "song"};
    sort(vString.begin(), vString.end());
    print(vString); //outputs: "apple" , "pen",  "song"

    vString = {"pen", "apple", "song"};

    auto sortBySize = [](const string& a, const string& b){return  a.size() < b.size(); };
    sort(vString.begin(), vString.end(), sortBySize);
    print(vString); //outputs:  "pen",  "song", "apple"

}
void stable_sortStl(){
    vector<string> v = {"pen", "apple", "song", "abcd"};

    auto sortBySize = [](const string& a, const string& b){return  a.size() < b.size(); };
    stable_sort(v.begin(), v.end(), sortBySize);
    print(v); // outputs: "pen", "apple", "abcd", "apple"

}

void reverseStl(){
    vector<int> v = {9, 2, 5, 1};

    reverse(v.begin(), v.end());
    print(v); //outputs: 1 5 2 9

    v = {9, 2, 5, 1};
    reverse(v.begin(), v.begin() + 2);
    print(v); //outputs: 2 9 5 1
}
void reverseCopyStl(){
    vector<int> v1 = {9, 2, 5, 1};
    vector<int> v2(4);
    reverse_copy(v1.begin(), v1.end(), v2.begin()); //v2.begin() is the result iterator
    print(v2); //outputs: 1 5 2 9

    v1 = {4, 1, 7, 12};
    reverse_copy(v1.begin(), v1.begin() + 2, v2.begin()); // reversing and copying first 2 elements
    print(v2); //outputs: 1 4 2 9
}
void rotateStl(){
    vector<int> v = {9, 2, 3, 5, 1};
    rotate(v.begin(), v.begin() + 2, v.end()); //v.begin() + 2 (index 3, because 6 / 2 = 3) is the iterator of the middle element
    print(v); //outputs: 3 5 1 9 2
}
void rotateCopyStl(){
    vector<int> v = {9, 2, 3, 5, 1};
    vector<int> v2(6);
    rotate_copy(v.begin(), v.begin() + 2, v.end(), v2.begin());
    print(v2); //outputs: 3 5 1 9 2
}
void anyOfStl(){
     vector<int> v = {9, 2, 5, 1};
     auto isEven = [](const int& a){ return a % 2 == 0; };
     cout << (any_of(v.begin(), v.end(), isEven) ? "Yes\n" : "No\n"); //outputs: Yes

     v = {9, 3, 5, 1};
     cout << (any_of(v.begin(), v.end(), isEven) ? "Yes\n" : "No\n"); // outputs: No
}
void allOfStl(){
     vector<int> v = {9, 2, 5, 1};
     auto isEven = [](const int& a){ return a % 2 == 0; };
     cout << (all_of(v.begin(), v.end(), isEven) ? "Yes\n" : "No\n"); //outputs: No

     v = {2, 4, 6};
     cout << (all_of(v.begin(), v.end(), isEven) ? "Yes\n" : "No\n"); // outputs: YES
}
void noneOfStl(){
     vector<int> v = {9, 2, 5, 1};
     auto isEven = [](const int& a){ return a % 2 == 0; };
     cout << (none_of(v.begin(), v.end(), isEven) ? "Yes\n" : "No\n"); //outputs: No

     v = {3, 33, 1, 7};
     cout << (none_of(v.begin(), v.end(), isEven) ? "Yes\n" : "No\n"); // outputs: YES
}
void partialSumStl(){
     vector<int> v = {1, 2, 7 , 1};
     partial_sum(v.begin(), v.end(), v.begin());
     print(v); // outputs: 1 3 10 11

     v = {2, 3, 2 , 2};
     partial_sum(v.begin(), v.end(), v.begin(), multiplies<int>() );
     print(v); // outputs: 2 6 12 24

     v = {12, 3, 2 , 2};
     partial_sum(v.begin(), v.end(), v.begin(), divides<int>() );
     print(v); // outputs: 12 4 2 1


     v = {12, 3, 2 , 2};
     partial_sum(v.begin(), v.end(), v.begin(), minus<int>() ); //it works as: v[0] - v[1], v[1] - v[2]....
     print(v); // outputs: 12 9 7 5
}
void iotaStl(){
     vector<int> v(10);
     iota(v.begin(), v.end(), 1);
     print(v); // outputs: 1 2 3 4 5 6 7 8 9 10

     iota(v.begin(), v.end(), 11);
     print(v); // outputs: 11 12 13 14 15 16 17 18 19 20
}
void adjacentFindStl(){
     vector<int> v = {12, 3, 4, 7 , 7, 9, 1, 5, 5};
     auto it = adjacent_find(v.begin(), v.end());

     cout << *it << endl; //outputs: 7
     cout << distance(v.begin(), it) << endl; //outputs: 3(the index of 7)

     v = {1, 3, 6, 2, 9};
     auto isMultiplies = [](const int& a, const int& b){ return a % b == 0; };
     it = adjacent_find(v.begin(), v.end(), isMultiplies);
     cout << distance(v.begin(), it) << endl; //outputs: 2(index of 6) because 6 % 2 == 0

     v = {9, 3, 6, 2, 9};
     it = adjacent_find(v.begin(), v.end(), greater<int>());
     cout << distance(v.begin(), it) << endl; //output: 0(index of 9 which is greater than 3)

      v = {9, 3, 6, 2, 9};
     it = adjacent_find(v.begin(), v.end(), less<int>());
     cout << distance(v.begin(), it) << endl; //output: 1(index of 3 which is less than 6)
}

void countStl(){
     vector<int> v = {12, 3, 4, 5 , 7, 9, 1, 5, 5};
     cout << count(v.begin(), v.end(), 5) << endl; //outputs: 3
     cout << count(v.begin(), v.end(), 50) << endl; //outputs: 0
}
void countIfStl(){
     vector<int> v = {12, 3, 4, 5 , 7, 9, 1, 5, 5};
     auto isEven = [](const int& a){ return a % 2 == 0; };
     cout << count_if(v.begin(), v.end(), isEven) << endl; //outputs: 2
}
void partitionStl(){
     vector<int> v = {1,2,3,4,5,6,7,8,9,10};
     auto isEven = [](const int& a){ return a % 2 == 0; };
     partition(v.begin(), v.end(), isEven);
     print(v); //outputs: 10 2 8 4 6 5 7 3 9 1
}
void stable_partitionStl(){
     vector<int> v = {1,2,3,4,5,6,7,8,9,10};
     auto isEven = [](const int& a){ return a % 2 == 0; };
     stable_partition(v.begin(), v.end(), isEven);
     print(v); //outputs: 2 4 6 8 10 1 3 5 7 9 (maintained all elements previous order)
}

void removeIfStl(){
     vector<int> v = {1,2,3,4,5,6,7,8,9,10};
     auto isEven = [](const int& a){ return a % 2 == 0; };
     remove_if(v.begin(), v.end(), isEven);
     print(v);
}
void minMaxStl(){
     cout << max(8,19) << endl; // output: 19
     cout << min(8,19) << endl; // output: 8
     pair<int, int> value = minmax(12, 3);
     cout << value.first << " " << value.second << endl; // outputs: 3 12
     vector<int> v = {11,1, 19,10, 50, 2};
     auto x = *max_element(v.begin(), v.end());
     cout << x << endl; //outputs: 50
     auto y = *min_element(v.begin(), v.end());
     cout << y << endl; //outputs: 1
     //instead of auto we could use this: pair<vector<int>::iterator, vector<int>::iterator> ans;
     auto ans = minmax_element(v.begin(), v.end());
     cout << *ans.first << " " << *ans.second << endl;//outputs: 1 50
}
int main(){
    minMaxStl();
    return 0;
}
