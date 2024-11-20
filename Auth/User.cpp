#include "User.h"
using U = User;

U::User() {};

U::User(string name, string pass) : Name{ name }, Password{ pass } {};

U::User(const User& U) : Name{ U.Name }, Password{ Password } {};

U::User(User&& U) noexcept : Name{ std::move(U.Name) }, Password{ std::move(U.Password) } {
	U.Name = "";
	U.Password = "";
}

User& U::operator=(const User& U) {
	if (this == &U)
		return *this;
	Name = U.Name;
	Password = U.Password;
}

User& U::operator=(User&& U) noexcept {
	if (this == &U)
		return *this;
	Name = std::move(U.Name);
	Password = std::move(U.Password);
	U.Name = "";
	U.Password = "";
	return *this;
}

string U::getName() const {
	return Name;
}

string U::getPass() const {
	return Password;
}

void U::ChangePassword(string pass) {
	Password = pass;
}
