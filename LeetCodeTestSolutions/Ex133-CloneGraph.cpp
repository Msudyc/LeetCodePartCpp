/*
Clone an undirected graph. Each node in the graph contains 
a label and a list of its neighbors. 

OJ's undirected graph serialization: 
Nodes are labeled uniquely. We use # as a separator for each
node, and , as a separator for node label and each neighbor 
of the node.

As an example, consider the serialized graph {0,1,2#1,2#2,2}. 

The graph has a total of three nodes, and therefore contains 
three parts as separated by #. 
1.First node is labeled as 0. Connect node 0 to both nodes 1
  and 2.
2.Second node is labeled as 1. Connect node 1 to node 2.
3.Third node is labeled as 2. Connect node 2 to node 2 (itself),
  thus forming a self-cycle.

Visually, the graph looks like the following: 

       1
      / \
     /   \
    0 --- 2
         / \
         \_/

Definition for undirected graph.
struct UndirectedGraphNode 
{
    int label;
    vector<UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {};
};

class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        
    }
};
*/

#include <queue>
#include <unordered_map>
#include "Ex133-CloneGraph.h"

namespace LeetCodeTestSolutions
{
    UndirectedGraphNode *Ex133::cloneGraph(UndirectedGraphNode *node)
    {
        if(!node) return NULL;
        queue<UndirectedGraphNode *> q;
        UndirectedGraphNode * ret = new UndirectedGraphNode(node->label);
        ret->neighbors = node->neighbors;
        unordered_map<int, UndirectedGraphNode *> umap;
        umap[ret->label] = ret;
 
        q.push(ret);
        while(!q.empty())
        {
            vector<UndirectedGraphNode *> v;
            UndirectedGraphNode *n = q.front();
            q.pop();
            for(vector<UndirectedGraphNode *>::iterator i = (n->neighbors).begin();
                i != (n->neighbors).end();
                i++)
            {
                if(umap.find((*i)->label) != umap.end()) v.push_back(umap[(*i)->label]);
                else
                {
                    UndirectedGraphNode *a = new UndirectedGraphNode((*i)->label);
                    a->neighbors = (*i)->neighbors;
                    v.push_back(a);
                    q.push(a);
                    umap[a->label] = a;
                }
            }

            n->neighbors = v;
        }
 
        return ret;
    }
}