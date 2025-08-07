#include <iostream>
#include <string>

using namespace std;

class String {
protected:
	string row;
public:
	String() {}
	String(const char* c_string) : row{c_string}{}
	String(const String& oth) : row{oth.row}{}


	int getL() {
		return row.length();
	}
	void clear() { row.clear(); }

	String& operator= (const String& oth) {
		if (this != &oth) {row = oth.row;}

		return *this;
	}

	String operator+ (const String& oth) {
		String result;
		result.row = row + oth.row;
		return result;
	}
	String operator+= (const String& oth) {
		row += oth.row;
		return *this;
		
	}

	bool operator== (const String& oth) {
		return row == oth.row;
	}

	bool operator!= (const String& oth) {
		return row != oth.row;
	}

	friend ostream& operator<< (ostream& out, const String& str) {
		out << str.row;
		return out;

	}

	~String() {}


};

class BitString : public String {
public:
	BitString() : String(){}
	BitString(const char* c_string) {
		bool valid = true;
		for (const char* i = c_string; *i != '\0'; i++)
		{
			if (*i != '0' && *i != '1')
			{
				valid = false;
				break;
			}
		}
		if (valid)
		{
			row = c_string;
		}
	}
	BitString(const BitString& oth) : String(oth){}
	
	BitString& operator= (const BitString& oth) {
		if (this != &oth) { row = oth.row; }

		return *this;
	}
	void Invertation() {
		for (char& c : row) {
			if (c == '0') {
				c = '1';
			}
			else if (c == '1') {
				c = '0';
			}
		}

	}

	BitString operator+ (const BitString& oth) {
		BitString result;
		result.row = row + oth.row;
		return result;
	}
	BitString operator+= (const BitString& oth) {
		row += oth.row;
		return *this;

	}

	bool operator== (const BitString& oth) {
		return row == oth.row;
	}

	bool operator!= (const BitString& oth) {
		return row != oth.row;
	}

	friend ostream& operator<< (ostream& out, const BitString& str) {
		out << str.row;
		return out;
	}

	~BitString() {}
};

int main() {
	String s1("Hi, ");
	String s2("i Artem");
	String s3 = s1 + s2;

	cout << s3 << endl;
	BitString b1("1010");
	BitString b2("0110");
	BitString b3 = b1 + b2;

	cout << b3 << endl;

	b3.Invertation();
	cout << "Invert: " << b3 << endl;
}
