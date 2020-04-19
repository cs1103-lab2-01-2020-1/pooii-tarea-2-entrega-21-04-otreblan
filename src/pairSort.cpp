// Tarea
// Copyright © 2020 otreblan
//
// hello is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// hello is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with hello.  If not, see <http://www.gnu.org/licenses/>.

#include <pairSort.hpp>

#include <map>
#include <algorithm>

std::vector<int> pairSort(std::vector<int>& arr1, std::vector<int>& arr2)
{
	std::vector<int> resu;
	std::map<int,int> arr2Map;
	std::vector<int> noArr2Vec;

	for(auto i: arr2)
	{
		arr2Map[i] = 0;
	}

	for(auto i: arr1)
	{
		auto inMap = arr2Map.find(i);

		if(inMap != arr2Map.end()) // In
		{
			(inMap->second)++;
		}
		else // Not in
		{
			noArr2Vec.push_back(i);
		}
	}

	for(auto i: arr2)
	{
		resu.insert(resu.end(), arr2Map[i], i);
	}

	std::sort(noArr2Vec.begin(), noArr2Vec.end());

	resu.insert(resu.end(), noArr2Vec.begin(), noArr2Vec.end());

	return resu;
}
