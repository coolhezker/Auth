#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User {
protected:
	string Name;
	string Password;
public:
	User();
	User(string name, string pass);
	User(const User& U);
	User(User&& U) noexcept;
	User& operator=(const User& U);
	User& operator=(User&& U) noexcept;

	string getName() const;
	string getPass() const;
	void ChangePassword(string pass);
};

#endif // !USER_H
