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

#include <string.h>

#include <pairVec.hpp>


int main(int argc, char* argv[])
{
	if(argc != 1 && strcmp(argv[argc-1], "-"))
	{
		std::ifstream file(argv[argc-1]);
		if(file.is_open() && file.good())
		{
			pairVec(file);
		}
		else
		{
			std::cerr << "Archivo no encontrado\n";
			exit(1);
		}
	}
	else
	{
		pairVec(std::cin);
	}
	return 0;
}

void pairVec(std::istream& is)
{
	int T;
	is >> T;

	for(int i = 0; i < T; ++i)
	{
		size_t N;
		is >> N;

		std::vector<int> vec1(N);
		std::vector<int> vec2(N);

		int input;

		for(size_t j = 0; j < N; ++j)
		{
			is >> input;
			vec1[j] = input;
		}

		for(size_t j = 0; j < N; ++j)
		{
			is >> input;
			vec2[j] = input;
		}

		for(size_t j = 0; j < N; ++j)
		{
			std::cout
				<< std::setw(4) << vec1[j] << ' '
				<< std::setw(4) << vec2[j] << '\n';
		}
		std::cout << '\n';
	}
}
