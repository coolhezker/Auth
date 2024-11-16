#include "User.h"
using U = User;

U::User() {};

U::User(string name, string pass) : Name{ name }, Password{ pass } {};

string U::getName() const {
	return Name;
}

string U::getPass() const {
	return Password;
}

void U::ChangePassword(string pass) {
	Password = pass;
}
