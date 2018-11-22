#include<bits/stdc++.h>
using namespace std;
string solve(vector<string> magazine, vector<string> note)
{
    map<string, int> magazineMap;
    map<string, int> noteMap;
    for(int i = 0 ;i < magazine.size(); i++)
    {

        magazineMap[magazine[i]]++;
    }

    for(int i = 0 ;i < note.size(); i++)
    {
        noteMap[note[i]]++;
    }

    for(int i = 0 ;i < note.size(); i++)
    {
        //cout<< note[i] <<" "<<magazineMap[note[i]] <<endl;
        if(magazineMap[note[i]] == NULL || magazineMap[note[i]] < noteMap[note[i]])
        {
            return "No\n";
        }
    }

    return "Yes\n";
}
int main()
{
    int m, n;
    string magazine, note , x = "";
    vector<string> magazineVector, noteVector;

    cin >> m >> n;
    cin.ignore();
    getline(cin, magazine);
    //cin.ignore();
    getline(cin, note);

    for(int i = 0 ;i < magazine.size(); i++)
    {
        if(magazine[i] != ' ')
        {
            x += magazine[i];
        }else{
            magazineVector.push_back(x);
            x = "";
        }

    }
     magazineVector.push_back(x);
     x = "";
     for(int i = 0 ;i < note.size(); i++)
    {
        if(note[i] != ' ')
        {
            x += note[i];

        }else{
            noteVector.push_back(x);
            x = "";
        }

    }
    noteVector.push_back(x);
    cout<<solve(magazineVector, noteVector)<<endl;

    return 0;
}
