
***************** Algorithm design and analysis 2st Assignment **************

Name : Sunil Kumar
Roll No : B14135
Branch : CSE
Email : sunil_k@students.iitmandi.ac.in


**************** 1st Question **********************************

			HImplement argument (f, P) and Max-Flow (G, s ,t)
			Ford-Fulkerson Algorithm
			compile : g++ -o 1 1.cpp
			run : ./1 < <input file>
Input format:

First line of input contains two integer N and E number of nodes and number of edeges.
In next E line each line contains threee integer 1st node , 2nd node and weight.
next one line contains two integer sourse and destination.

Output format:
path and crosponding flow.
last line prind total maximum flow.
		Input sample 1	:
		4 5
		1 2 20
		1 3 10
		2 3 30
		2 4 10
		3 4 20
		1 4

		output sample 1
		1->2->4-> : 10
		1->3->4-> : 10
		1->2->3->4-> : 10
		30


******************* 2nd question ****************************
			0/1-knapsack problem
			compile : g++ -o 2 2.cpp
			run : ./2 < <input file>

Input format:
sFirst line single integer size of weight value array length N
next  N line each line contain two integer x weight  and y value.
next one line contains one integer W maximum size of bag. 
			
			
Output format:
maximun value possible

			INPUT SAMPLE 1:
			5
			2 30
			3 10
			4 20
			5 30
			6 30
			5
		     
		     OUTPUT SAMPLE 1:
		     40
		     

			
***************** 3nd question *****************************
			Dijkstra's algorithm to find shortest path
			compile : g++ -o 3 3.cpp
			run : ./3 < <input file>
			
Input format:

First line of input contains two integer N and E number of nodes and number of edeges.
In next E line each line contains threee integer 1st node , 2nd node and weight.
next one line contains two integer sourse and destination.

Output format:
Vertex	      Distance	          Path
src -> dest 		value 		all node of path 
			
			INPUT SAMPLE 1:
			5 5
			1 2 3
			1 4 2
			2 3 4
			4 3 4
			3 5 3
			1 5
			OUTPUT SAMPLE 1:
			Vertex	  Distance	Path
			1 -> 5 		 9		1 4 3 5 

******************* END **********************************************
