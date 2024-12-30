#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void Breadth_First_Search(const vector<vector<int>> &Graph, int start_node){
    int n = Graph.size();
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start_node] = true;
    q.push(start_node);
    
    cout << "Breadth First Search Traversal: ";
    
    while(!q.empty()){
        int current = q.front();
        q.pop();

        cout << current << " ";
        for(auto neighbor : Graph[current]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main(){
    int Nodes, Edges;
    cout << "Enter the number of Nodes: ";
    cin >> Nodes;
    cout << "Enter the number of Edges: ";
    cin >> Edges;

    vector<vector<int>> Graph(Nodes);
    cout << "Enter the edges: " << endl;
    
    for(int i = 0; i < Edges; i++){
        int u, v;
        cin >> u >> v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }

    int start_node;
    cout << "Enter the start node: ";
    cin >> start_node;
    Breadth_First_Search(Graph, start_node);

    return 0;
}