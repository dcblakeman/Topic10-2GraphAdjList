#include "Graph2.h"
#include<string>
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

template<class LabelType>
Graph<LabelType>::Graph()
{
}

template<class LabelType>
inline int Graph<LabelType>::getNumVertices() const
{
	return numVertices;
}

template<class LabelType>
int Graph<LabelType>::getNumEdges() const
{
	return edgeCount;
}

template<class LabelType>
bool Graph<LabelType>::add(LabelType start, LabelType end, int edgeWeight)
{
    if (start < numVertices && end < numVertices) 
    {
        adj[start].push_back(make_pair(end, edgeWeight));
        adj[end].push_back(make_pair(start, edgeWeight));
        edgeCount++;
        return true;
    }
    else
	    return false;
}

template<class LabelType>
bool Graph<LabelType>::remove(LabelType start, LabelType end)
{
    int v, w;
    for (int u = 0; u < numVertices; u++)
    {
        for (auto it = adj[u].begin(); it != adj[u].end(); it++)
        {
            v = it->first;
            w = it->second;
            if (start == v) 
            {
                adj->erase(adj[v].begin());
                return true;
            }
                
        }
    }
    return false;
}

template<class LabelType>
int Graph<LabelType>::getEdgeWeight(LabelType start, LabelType end)
{
    int v, w;
    for (int u = 0; u < numVertices; u++)
    {
        for (auto it = adj[u].begin(); it != adj[u].end(); it++)
        {
            v = it->first;
            w = it->second;
            if (start == v)
                return w;
        }
        cout << "\n";
    }
}

template<class LabelType>
void Graph<LabelType>::depthFirstTraversal(LabelType start)
{
}

template<class LabelType>
void Graph<LabelType>::breadthFirstTraversal(LabelType start)
{
}

template<class LabelType>
void Graph<LabelType>::display()
{
    int v, w;
    for (int u = 0; u < numVertices; u++)
    {
        cout << "Node " << u << " makes an edge with \n";
        for (auto it = adj[u].begin(); it != adj[u].end(); it++)
        {
            v = it->first;
            w = it->second;
            cout << "\tNode " << v << " with edge weight ="
                << w << "\n";
        }
        cout << "\n";
    }
}




