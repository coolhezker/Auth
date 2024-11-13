#include "User.h"
using U = User;

U::User() {};

U::User(string name, string pass) : Name{ name }, Password{ pass } {};

const string& U::getName() const {
	return Name;
}

const string& U::getPass() const {
	return Password;
}

void U::ChangePassword(string pass) {
	Password = pass;
}
