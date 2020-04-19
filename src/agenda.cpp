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

#include <agenda.hpp>

#include <vector>

void Agenda::insertar_evento(const Fecha &fecha, const Hora &hora,
	const std::string& descripcion)
{
	_agenda[fecha][hora] = descripcion;
}

std::list<std::pair<Hora, std::string>> Agenda::eventos_dia(const Fecha &fecha)
{
	std::map<Hora, std::string>& dateMap = _agenda[fecha];

	return {dateMap.begin(), dateMap.end()};
}

std::list<std::pair<Hora, std::string>> Agenda::eventos_dia(const Fecha &fecha,
	const Hora & desde, const Hora &hasta)
{
	std::map<Hora, std::string>& dateMap = _agenda[fecha];

	return {dateMap.find(desde), dateMap.find(hasta)};
}

void Agenda::eliminar_eventos(const Fecha &desde_fecha, const Hora &desde_hora,
	const Fecha &hasta_fecha, const Hora &hasta_hora)
{
	std::pair dateRange = {_agenda.find(desde_fecha), _agenda.find(hasta_fecha)};

	if(dateRange.first == dateRange.second)
	{
		auto& hourMap = dateRange.first->second;

		hourMap.erase(hourMap.find(desde_hora), hourMap.find(hasta_hora));
	}
	else
	{

		auto oldSecond = dateRange.second++;

		bool hasVoidMaps = false;

		for(auto i = dateRange.first; i != dateRange.second; i++)
		{
			auto& dateMap = i->second;

			if(i == dateRange.first)
			{
				dateMap.erase(dateMap.find(desde_hora), dateMap.end());
			}
			else if(i == oldSecond)
			{
				dateMap.erase(dateMap.begin(), dateMap.find(hasta_hora));
			}
			else
			{
				hasVoidMaps = true;
			}
		}

		if(hasVoidMaps)
		{
			_agenda.erase(++dateRange.first, --dateRange.second);
		}
	}

}

std::ostream& operator <<(std::ostream& os, Agenda& agenda)
{
	for(auto& i: agenda._agenda)
	{
		os << i.first << ":\n";
		for(auto& j: i.second)
		{
			os
				<< '\t' << j.first << '\n'
				<< '\t' << j.second << '\n'
				<< '\n';

		}
	}
	return os;
}
