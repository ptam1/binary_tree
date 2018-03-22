#include "bintree.h"
#include <cstdlib> 
using namespace std;

template <class T>
int depth(binary_tree_node<T> *root)
{
	int depth_num = 0;
	if(root == NULL)
	{
		return -1;
	}
	else
	{
		depth_num = depth(root);
	}
	return depth_num;
}

template <class T>
T max(binary_tree_node<T> *root)
{
	
}

double tree_sum(binary_tree_node<double> *root)
{
	
}

double tree_average(binary_tree_node<double> *root)
{
	
}

template <class T>
bool tree_is_balanced(binary_tree_node<T> *root)
{
	
}



/* Postcondition: A true return value means that it is 
    possible to win the bear game by starting
   with n bears. A false return value means that it is not possible to win the bear game by starting
   with n bears. */
bool bears(int n)
{
	
}