// Racing_game.cpp : 
#include "Game_type.h"
#include "Types_of_vehicles.h"
#include "distance.h"
#include <iostream>


int main()
{
	setlocale(LC_ALL, "RUS");
	
	std::string game_type_01 = { "Гонка для наземного транспорта" };
	std::string game_type_02 = { "Гонка для воздушного транспорта" };
	std::string game_type_03 = { "Гонка для наземного и воздушного транспорта" };
	
	
	std::cout << "Добро пожаловать в гоночный симулятор\n"
		<< "1." << game_type_01 << "\n"
		<< "2." << game_type_02 << "\n"
		<< "3." << game_type_03 << "\n"
		<< "Выбирите тип гонки: ";
	
	std::string type_game = {0};
	std::cin >> type_game;
	std::cout << std::endl;
	if (type_game == "1")
	{
		type_game = game_type_01;
	}
	if (type_game == "2")
	{
		type_game = game_type_02;
	}
	if (type_game == "3")
	{
		type_game = game_type_03;
	}
	Game_type::Game_type GT{ type_game };
	std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////////
	std::cout << "Укажите длину дистанции (должна быть положительна): ";
	int dist = 0;
	std::cin >> dist;
	distance::distance DS{ dist };
	////////////////////////////////////////////////////////////////////////////////
	std::cout << "\n Должно быть зарегистрировано хотя бы 2 транспортных средства\n"
		<< "1. зарегистрировать транспорт\n"
		<< "Выбирете действие: ";
	int rx = 0;
	std::cin >> rx;
	//!!!!!!!!
	////////////////////////////////////////////////////////////////////////////////
	std::cout << GT.rp() << ". Рассояние: " << DS.di() << std::endl;
	
	std::string type_1 = "ботинки-вездеходы";
	std::string type_2 = "метла";
	std::string type_3 = "верблюд";
	std::string type_4 = "кентавр";
	std::string type_5 = "орёл";
	std::string type_6 = "верблюд-быстроход";
	std::string type_7 = "ковёр-самолёт";

	std::string name = {0};
	
	while (name != "0")
	{
		std::cout
			<< "1." << type_1 << "\n"
			<< "2." << type_2 << "\n"
			<< "3." << type_3 << "\n"
			<< "4." << type_4 << "\n"
			<< "5." << type_5 << "\n"
			<< "6." << type_6 << "\n"
			<< "7." << type_7 << "\n"
			<< "0." << "закончить регистрацию\n"
			<< "Выбирете транспорт или 0 для окончания процесса регистрации: ";

		std::cin >> name;
		std::cout << std::endl;
		

	}
	

}


