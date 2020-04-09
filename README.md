1)avgDegree():This function finds the average degree of the graph.At the beginning,the function finds the number of edges in a given degree then function finds the average degree 
using the no_of_degrees/no_of_nodes which is mentioned in the function.At last average degree of a graph will be
returned.The time complexity of the function is o(n^2).

2)isRegular():This function checks whether the graph is regular or not.At the beginning the function finds the degree of all nodes in the given graph then checking whether
all the have same degree or not if they have same degree of nodes then the given graph is a 
regular graph or else the given graph is not a regular graph.The time complexity of the function is o(n^2).

3)isComplete():This function checks whether the graph is complete or not.At the beginning the function finds the degree of all nodes in the given graph then checking 
whether all the nodes have same degree of node or not if they have same degree of node then 
the given graph is a complete graph or else it is not a complete graph.The time complexity of the function is o(n^2).

4) isPathGraph():This function checks whether there is a path in the graph or not.At the beginning the function finds the degree of all the nodes then checking whether 
exactly two node should have degree of two and all other nodes should have degree of
exactly equal to k-2(k:Number of vertices in the given graph).The time complexity of the function is o(n^2).

5)satifiesOresTheorem():This function checks whether the function satisfies ores theorem or not.At the beginning the function finds the degree of all the nodes in the given graph.
Then first checking whether the graph is complete or not if the graph is complete then
the graph fails to satisfy the ores theorem.If it's not a complete graph then checking the 
condition of the ores theorem If the graph satisfies the ores theorem then return 1 or
else return 0.The time complexity of the function is o(n^2).

6)hasEulerCkt():This function checks whether there is a Euler circuit in the graph or not.At the beginning the function finds the degree of all the nodes in a given graph.If all 
nodes of a given graph has even degree of vertex then the graph has a Euler circuit
or else not.The time complexity of the function is o(n^2).

7)hasEulerPath():This function checks whether there is a Euler path in the graph or not.At the beginning the function finds the degree of all the nodes then checking  how many nodes 
have the odd degree of  nodes if the count of odd degree of nodes is exactly two then the 
given graph has Euler Path but not the Euler circuit..The time complexity of the function is o(n^2).

8)isCycleGraph():This function checks whether the graph is cyclic or not.At the beginning the function finds the degree of all the nodes then checking whether all
the nodes have degree of two if all them have degree two then the given graph is cycle
graph or else not.The time complexity of the function is o(n^2).
