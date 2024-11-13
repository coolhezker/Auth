#include "User.h"
using U = User;


U::User() = delete;

U::User(string name, string pass) : Name{ name }, Password{ pass } {};
const string& U::getName() const {
	return Name;
}

void U::ChangePassword(string pass) {
	Password = pass;
}