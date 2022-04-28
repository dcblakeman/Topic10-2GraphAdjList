#pragma once
#include"GraphInterface2.h"
#include<vector>
#include<string>
#include<utility>
#include<list>
using namespace std;

template<class LabelType>
class Graph
{
private:
	int numVertices = 10;
	int startEdge;
	int endEdge;
	int newEdgeWeight;
	int edgeCount = 0;
	vector<pair<int, int>> adj[10];
public:
	Graph();
	int getNumVertices() const;
	int getNumEdges() const;
	bool add(LabelType start, LabelType end, int edgeWeight);
	bool remove(LabelType start, LabelType end);
	int getEdgeWeight(LabelType start, LabelType end);
	void depthFirstTraversal(LabelType start);
	void breadthFirstTraversal(LabelType start);
	void display();
	~Graph() {};
};