#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int insert_right_node(std::vector<int>& v, int root,int k)
{
	if (v[root] != std::numeric_limits<int>::max())
	{
		v[root * 2] = k;
		return root * 2;
	}
	return root;
}
int insert_left_node(std::vector<int> &v, int root, int k)
{
	if (v[root] != std::numeric_limits<int>::max())
	{
		v[root * 2 + 1] = k;
		return root * 2 + 1;
	}
	return root;
}
//int main()
//{
//	std::vector<int> tree = { 44,3,77,5,12,6,8,90,4,33,7,345,3,2,333,5,22,26,7 };
//	int dummyRoot = 0;
//	dummyRoot = static_cast<int>(std::accumulate(tree.begin(), tree.end(), 0)/tree.size());
//	int dummyRootLeft, dummyRootRight;
//	std::vector<int> treeCreator(tree.size() * 2, std::numeric_limits<int>::max());
//	auto k = tree[0];
//	treeCreator[0] = dummyRoot;
//	int i = 0;
//	dummyRootLeft = dummyRootRight = 1;
//	const int root = 0;
//	int check = 0;
//	for (;i<tree.size() -1; k = tree[i])
//	{
//		if (k < dummyRoot)
//		{
//			if(treeCreator[dummyRootLeft] < k)
//			{
//				dummyRootLeft = insert_left_node(treeCreator, dummyRootLeft, k);
//			}
//			else if (true)
//			{
//				dummyRootLeft = insert_right_node(treeCreator, dummyRootLeft, k);
//			}
//
//			else
//			continue;
//		
//		}
//		else
//		{
//			if (k < treeCreator[dummyRootRight])
//			{
//				dummyRootRight = insert_right_node(treeCreator, dummyRootRight, k);
//			}
//			else if (true)
//			{
//				dummyRootRight = insert_left_node(treeCreator, dummyRootRight, k);
//			}
//			else
//				continue;
//		}
//
//		i++;
//	}
//}
