#include "Database.h"
#include <iostream>
#include <iomanip>

using D = Database;

bool D::AddUser(string name, string pass) {
	if (DB.find(name) == DB.end()) {
		DB[name] = User(name, pass);
		return true;
	}
	return false;
} 

bool D::RemoveUser(string name) {
	if (DB.find(name) != DB.end()) {
		DB.erase(name);
		return true;
	}
	return false;
}

const unordered_map<string, User>& D::ReturnDB() {
	return DB;
}

User* D::FindUser(string name) {
	auto it = DB.find(name);
	if (it != DB.end()) {
		return &it->second;
	}
	return nullptr;
}

void D::PrintDB() {
	std::cout << "USER" << setw(10) << "" << "PASSWORD\n";
	for (auto it = DB.begin(); it != DB.end(); it++) 
		std::cout << std::setiosflags(ios::left) << std::setw(14) 
			<< it->second.getName() << std::resetiosflags(ios::left) 
			<< std::setiosflags(ios::right) << it->second.getPass() 
			<< std::resetiosflags(ios::right) << std::endl;
} 