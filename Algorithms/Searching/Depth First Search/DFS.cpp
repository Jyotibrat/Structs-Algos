#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void Depth_First_Search(const vector<vector<int>> &Graph, int Start_Node){
    int n = Graph.size();
    vector<bool> Visited(n, false);
    stack<int> S;

    S.push(Start_Node);
    
    cout << "Depth First Search Traversal: ";

    while (!S.empty()){
        int current = S.top();
        S.pop();
    
        if (!Visited[current]){
            Visited[current] = true;
    
            cout << current << " ";
    
            for(auto it = Graph[current].rbegin(); it != Graph[current].rend(); ++it){
                if(!Visited[*it]){
                    S.push(*it);
                }
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
    cout << "Enter the start node for DFS: ";
    cin >> start_node;
    
    Depth_First_Search(Graph, start_node);

    return 0;
}