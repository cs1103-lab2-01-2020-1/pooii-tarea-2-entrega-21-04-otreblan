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

#include <iostream>
#include <fstream>
#include <iomanip>
#include <map>

#include <string.h>

#include <frecVec.hpp>


int main(int argc, char* argv[])
{
	if(argc != 1 && strcmp(argv[argc-1], "-"))
	{
		std::ifstream file(argv[argc-1]);
		if(file.is_open() && file.good())
		{
			frecVec(file);
		}
		else
		{
			std::cerr << "Archivo no encontrado\n";
			exit(1);
		}
	}
	else
	{
		frecVec(std::cin);
	}
	return 0;
}

void frecVec(std::istream& is)
{
	int T;
	is >> T;

	for(int i = 0; i < T; ++i)
	{
		size_t N;
		is >> N;

		std::map<int, int> frecMap;

		int input;

		for(size_t j = 0; j < N; ++j)
		{
			is >> input;
			frecMap[input]++;
		}

		int X;
		is >> X;

		std::cout << frecMap[X] << '\n';
	}
}
