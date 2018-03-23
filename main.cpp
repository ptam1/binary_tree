#include "bintree.h"
#include "build_tree.h"
#include <iostream>

using namespace std;

template <class T>
void printItem(T item)
{
    cout<<item<<" ";
}

int main() 
{
    binary_tree_node<int> *s1 = sample1();
    cout << "size of s1: " << tree_size(s1) << endl;
    cout << "depth of s1: " << depth(s1) << endl;
	cout << "max of s1: " << max(s1) << endl;

    binary_tree_node<int> *s2 = sample2();
    cout << "size of s2: " << tree_size(s2) << endl;
    cout << "depth of s2: " << depth(s2) << endl;
//	cout << "max of s2: " << max(s2) << endl;

	binary_tree_node<double> *s3 =sample3();
	cout << "size of s3: " << tree_size(s3) << endl;
    cout << "depth of s3: " << depth(s3) << endl;
//	cout << "max of s3: " << max(s3) << endl;
	
	binary_tree_node<double> *s4 =sample4();
	cout << "size of s4: " << tree_size(s4) << endl;
    cout << "depth of s4: " << depth(s4) << endl;
//	cout << "max of s4: " << max(s4) << endl;
/*   
    



    binary_tree_node<string> *s5 = sample5();
    print(s5, 0);
    cout<<endl;
     
    binary_tree_node<double> *s6 =sample_bal1();
    print(s6, 0);
    cout<<endl;
    
    binary_tree_node<double> *s7 =sample_bal2();
    print(s7, 0);
    cout<<endl;
*/
}
