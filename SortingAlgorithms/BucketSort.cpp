#include <iostream>
#include <vector>

void sort_vector(std::vector<double>& v, double val)
{
	
	if(v.empty())
	{
		v.push_back(val);
		return;
	}
	if(v.at(0) < val)
	{
		auto temp = v.at(0);
		v.at(0)  = val;
		for(auto k =1;k<v.size();k++)
		{
			if(v.at(k) < temp)
			{
				const auto inner = v.at(k);
				v.at(k) = temp;
				temp = inner;
			}
		}
		v.push_back(temp);
	}
	else if(v.at(0) > val)
	{
		auto i = 0;
		while(v.size() > i++)
		{
			if (v.at(i) < val)
			{
				const auto inner = v.at(i);
				if (v.size() > i + 1)
					v.at(i) = val;
				else
					v.push_back(val);
				val = inner;
			}
			else if(v.at(i) > val){
				v.push_back(val);
			}
		}
	}
}

//int main()
//{
//	std::vector<std::vector<double>> vec(10, std::vector<double>(0, 0));
//	double arr[] = { 0.33,0.3255,0.87,0.342 };
//
//	for (auto e : arr)
//	{
//		int f = std::floor(e * 10);
//		sort_vector(vec.at(f), e);
//	}
//	return 0;
//}