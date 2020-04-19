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
#include <iterator>

#include <josephus.hpp>
#include <pairSort.hpp>
#include <agenda.hpp>

int main()
{
	std::cout
		<< "Josephus(41, 3)\n"
		<< josephus(41, 3) << '\n';

	std::cout << '\n';

	std::vector<int> arr1 = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
	std::vector<int> arr2 = {2, 1, 8, 3};

	std::vector<int> arr3 = pairSort(arr1, arr2);

	std::cout << "Pair sort:\n";

	std::copy(arr3.begin(), arr3.end(),
		std::ostream_iterator<int>(std::cout, " "));

	std::cout << '\n';
	std::cout << '\n';

	Agenda agenda;

	agenda.insertar_evento("1", "01", "algo");
	agenda.insertar_evento("1", "02", "algo");
	agenda.insertar_evento("1", "03", "algo");
	agenda.insertar_evento("1", "04", "algo");
	agenda.insertar_evento("1", "05", "algo");
	agenda.insertar_evento("1", "06", "algo");
	agenda.insertar_evento("1", "07", "algo");
	agenda.insertar_evento("1", "08", "algo");
	agenda.insertar_evento("1", "09", "algo");
	agenda.insertar_evento("1", "10", "algo");

	agenda.insertar_evento("2", "01", "algo");
	agenda.insertar_evento("2", "02", "algo");
	agenda.insertar_evento("2", "03", "algo");
	agenda.insertar_evento("2", "04", "algo");
	agenda.insertar_evento("2", "05", "algo");
	agenda.insertar_evento("2", "06", "algo");
	agenda.insertar_evento("2", "07", "algo");
	agenda.insertar_evento("2", "08", "algo");
	agenda.insertar_evento("2", "09", "algo");
	agenda.insertar_evento("2", "10", "algo");

	agenda.insertar_evento("3", "01", "algo");
	agenda.insertar_evento("3", "02", "algo");
	agenda.insertar_evento("3", "03", "algo");
	agenda.insertar_evento("3", "04", "algo");
	agenda.insertar_evento("3", "05", "algo");
	agenda.insertar_evento("3", "06", "algo");
	agenda.insertar_evento("3", "07", "algo");
	agenda.insertar_evento("3", "08", "algo");
	agenda.insertar_evento("3", "09", "algo");
	agenda.insertar_evento("3", "10", "algo");


	agenda.eliminar_eventos("1", "03", "3", "07");

	std::cout << agenda;

	return 0;
}

