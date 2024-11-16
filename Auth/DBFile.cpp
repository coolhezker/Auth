#include "DBFile.h"

using DF = DBFile;

DF::DBFile() {};
DF::DBFile(string path) : Path{ path } {};
DF::DBFile(string path, char separator) : Path{ path }, Separator{ separator } {};

string DF::ReadFrag(ifstream& is) {
	char buf;
	string back;
	while (is.get(buf)) {
		if (buf == '\n' || buf == '\r') {
			if (back.empty()) {
				continue;
			}
			break;
		}
		if (buf == Separator) {
			break;
		}
		back += buf;
	}
	return back;
}

bool DF::Reader() {
	ifstream read;
	string user, pass;
	read.open(Path, ios::in);
	if (!read.is_open()) return false;
	while (!read.eof()) {
		user = ReadFrag(read);
		pass = ReadFrag(read);
		if (!user.empty() && !pass.empty()) {
			DB[user] = User(user, pass);
		}
	}
	read.close();
	return true;
}

bool DF::Writer() {
	ofstream write;
	write.open(Path, ios::out, ios::trunc);
	if (!write.is_open()) return false;
	for (auto it = DB.begin(); it != DB.end(); it++) {
		write << it->second.getName() << Separator << it->second.getPass() << endl;
	}
	write.close();
	return true;
}

bool DF::SetPath(string path) {
	fstream check;
	check.open(path, ios::app);
	if (!check.is_open()) return false;
	check.close();
	Path = path;
	return true;
}