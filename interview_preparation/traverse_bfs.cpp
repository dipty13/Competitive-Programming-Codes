#include<bits/stdc++.h>
using namespace std;

class Graph
{
    string name;
public:
    vector<Graph*> children;

     Graph(string str) {
      name = str;
    }
   Graph* addChild(string name) {
      Graph* child = new Graph(name);
      children.push_back(child);
      return this;
    }
    vector<string> breadthFirstSearch(vector<string> *array)
    {
        deque<Graph*> q{this};
        map<Graph*, bool> visited;

        vector<string> ans = {};
        while(!q.empty()){
        Graph node = *q.front();
            ans.push_back(node.name);
            q.pop_front();
            for(int i = 0; i < node.children.size(); i++)
            {
                if(!visited[node.children[i]]){
                q.push_back(node.children[i]);
                visited[node.children[i]] = true;
                }
            }
        }

        return ans;
    }
};

int main()
{
    Graph g("A");
    g.addChild( "B");
    g.addChild( "C");
    g.addChild( "D");
    g.addChild("E");
    g.addChild( "F");;
    g.addChild( "I");
    g.addChild( "J");
    g.addChild( "G");
    g.addChild( "H");
    g.addChild( "K");
    //g.print();
    vector<string> ans = g.breadthFirstSearch({});
    for(int i =0; i < ans.size(); i++)
    {
        cout << ans[i] << ", ";
    }
    cout << endl;
    return 0;
}
