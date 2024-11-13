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
	const string& getName() const;
	const string& getPass() const;
	void ChangePassword(string pass);
};

#endif // !USER_H
