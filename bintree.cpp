#include "bintree.h"
#include <cstdlib> 

using namespace std;



double tree_sum(binary_tree_node<double> *root)
{
	double count = 0;
	double right = 0;
	double left = 0;
	
	if(root == NULL)
	{
		return 0;
	}
		right = tree_sum(root->right());
		left = tree_sum(root->left());
	    count = right+left+root->data();
	    return count;
}

double tree_average(binary_tree_node<double> *root)
{
	double sum = 0;
	double right = 0;
	double left = 0;
	double average = 0;
	double treeSize =0;
	
	if(root == NULL)
	{
		return 0;
	}
		sum = tree_sum(root);
		treeSize = tree_size(root);
		average = (sum/treeSize);
	    return average;
}





/* Postcondition: A true return value means that it is 
    possible to win the bear game by starting
   with n bears. A false return value means that it is not possible to win the bear game by starting
   with n bears. */
bool bears(int n)
{
	
}

