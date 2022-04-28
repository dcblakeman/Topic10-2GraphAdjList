//Dan Blakeman
//04-11-2022
//CIS 2207 5102
//1. Write a C++ class derived from GraphInterface, as given in Listing 20-1 on pages 634-635.  Use an adjacency matrix to represent the graph.
#include<iostream>
#include<string>
#include<utility>
#include "Graph2.cpp"
using namespace std;

int main()
{
	Graph<int> newGraph;
	newGraph.add(0, 1, 10);
	newGraph.add(0, 4, 20);
	newGraph.display();
	cout << "Edge Weight: " << newGraph.getEdgeWeight(0, 1) << endl;
	newGraph.remove(0, 1);
	newGraph.display();
	return 0;
}