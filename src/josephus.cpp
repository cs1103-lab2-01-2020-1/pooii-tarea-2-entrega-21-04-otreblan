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

#include <vector>
#include <numeric>

#include <josephus.hpp>

int josephus(int n, int k)
{
	// El contenedor
	std::vector<int> vec(n);

	// El contenedor es llenado con una secuencia de número naturales empezando
	// en 1
	std::iota(vec.begin(), vec.end(), 1);

	// El index
	size_t index = k-1;

	// Quitando elementos hasta que solo quede uno
	while(vec.size() != 1)
	{
		// Quito el elemento que está en el index
		vec.erase(vec.begin() + (index %= vec.size()));

		// El -1 es porque el elemento eliminado ya no cuenta
		index += k-1;
	}

	// El último elemento
	return vec[0];
}
