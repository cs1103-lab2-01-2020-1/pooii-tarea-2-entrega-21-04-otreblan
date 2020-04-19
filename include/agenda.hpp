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

#pragma once

#include <list>
#include <map>
#include <iostream>

using Fecha = std::string;
using Hora = std::string;

class Agenda
{
private:
	std::map<Fecha, std::map<Hora, std::string>> _agenda;
public:
	void insertar_evento(const Fecha &fecha, const Hora &hora,
		const std::string& descripcion);

	std::list<std::pair<Hora, std::string>> eventos_dia(const Fecha &fecha);

	std::list<std::pair<Hora, std::string>> eventos_dia(const Fecha &fecha,
		const Hora & desde, const Hora &hasta);

	void eliminar_eventos(const Fecha &desde_fecha, const Hora &desde_hora,
		const Fecha &hasta_fecha, const Hora &hasta_hora);

	friend std::ostream& operator <<(std::ostream& os, Agenda& agenda);
};
