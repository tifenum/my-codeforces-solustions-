

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
 
class Graph 
{
  public:
    int V;
    map<int, vector<int>> adj;
 
    Graph(int);
    void addEdge(int, int);
    void DFS(int, vector<bool> &);
} * g;
 
// Constructor
Graph::Graph(int V) 
{
   
  // No. of vertices
  this->V = V;
   
  // Dictionary of lists
  for(int i = 1; i <= V; i++) 
    adj[i] = vector<int>();
}
 
// Function to add edge
// in the graph
void Graph::addEdge(int v, int w)
{
  adj[v].push_back(w);
  adj[w].push_back(v);
}
 
// Function to perform DFS
void Graph::DFS(int s, vector<bool> &visited) 
{
   
  // Create a stack for DFS
  stack<int> stack;
 
  // Push the current source node
  stack.push(s);
  while (!stack.empty()) 
  {
     
    // Pop a vertex from stack
    // and print it
    s = stack.top();
    stack.pop();
 
    // Traverse adjacent vertices
    // of the popped vertex s
    for(auto node : adj[s])
    {
      if (!visited[node]) 
      {
         
        // If adjacent is unvisited,
        // push it to the stack
        visited[node] = true;
        stack.push(node);
      }
    }
  }
}
 
// Function to return the count
// edges removed
void countRemovedEdges(int N, int K)
{
  int C = 0;
 
  // Initially mark all vertices
  // as not visited
  vector<bool> visited(g->V + 1, false);
 
  for(int node = 1; node <= N; node++) 
  {
     
    // If node is unvisited
    if (!visited[node])
    {
       
      // Increment Connected
      // component count by 1
      C = C + 1;
 
      // Perform DFS Traversal
      g->DFS(node, visited);
 
      // Print the result
      if (C <= K){
        cout << K << endl;
        return;}
      else{
        cout << -1 << endl;
        return;}
    }
  }
}

// Driver Code
int main(int argc, char const *argv[]) 
{
    long long t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        int N,K;
        cin>>N>>K; 
        g = new Graph(N);
        for(int i=0;i<=N;i++){
            int a,b;
            cin>>a>>b;
            g->addEdge(a, b);
        }
        countRemovedEdges(N, K);
    }
    return 0; 
}