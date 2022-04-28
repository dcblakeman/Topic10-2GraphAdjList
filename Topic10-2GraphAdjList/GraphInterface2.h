#pragma once
//Dan Blakeman
//04-11-2022
//CIS 2207 5102
//1. Write a C++ class derived from GraphInterface, as given in Listing 20-1 on pages 634-635.  Use an adjacency matrix to represent the graph.
template<class LabelType>
class GraphInterface
{
public:
	virtual int getNumVertices() const = 0;
	virtual int getNumEdges() const = 0;
	virtual bool add(LabelType start, LabelType end, int edgeWeight) = 0;
	virtual int getEdgeWeight(LabelType start, LabelType end) const = 0;
	virtual void depthFirstTraversal(LabelType start) = 0;
	virtual void breadthFirstTraversal(LabelType start) = 0;
	virtual ~GraphInterface() {}
};