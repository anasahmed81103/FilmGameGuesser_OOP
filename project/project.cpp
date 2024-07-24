#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include<vector>

using namespace std;

//films
class type {
protected:
	string ch;
	int c;
public:
	string askQ() {
		cout << "   Are you thinking of a game or a film?" << endl;
		cout << "   1-film     2-game      3-random generation   " << endl << "   choice: ";
		cin >> c;
		if (c == 1) {
			return "film";
		}
		else if (c == 2) {
			return "game";
		}
		else if (c == 3) {
			return "random";
		}
		else {
			cout << "error. wrong choice!" << endl;
			return "d";
		}
	}

};

class films :public type {

public:
	int askQ() {
		int c;
		cout << "   Which main genre does your film belong to?" << endl;
		cout << "   1-Horror      2-Comedy       3-Action          4-SciFi           5-Fantasy ";
		cout << "           6-Sad/Drama       " << endl;
		cout << "   choice: ";
		cin >> c;
		return c;

	}

};

class horror :virtual public films {

public:
	string askQ() {
		cout << "   Is your film purely horror or is it a horror comedy?" << endl;
		cout << "   1-Pure Horror        2-Horror Comedy         " << endl << " choice: ";
		cin >> c;
		if (c == 1) {
			return "plain horror";
		}
		else if (c == 2) {
			return "horror comedy";
		}
		else {
			cout << "error. wrong choice!" << endl;
			return "d";
		}

	}

};

class plainHorror : public horror {
	string films[8], qs[8];
public:
	plainHorror() {
		fstream f;
		f.open("all files/plain horror films.txt", ios::in);
		for (int i = 0; i < 8; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/plain horror qs.txt", ios::in);
		for (int i = 0; i < 8; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 8; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class comedy :virtual public films {

public:
	string askQ() {
		cout << "   Which type of Comedy best describes your film?" << endl;
		cout << "   1-Agents Comedy                    2-Horror Comedy            3-Adventure Comedy " << endl;
		cout << "   4-Ridiculous/Absurd Comedy         5-Superhero Comedy         6-Political Comedy " << endl;
		cout << "   7-Animated Comedy                  8-Indian Comedy " << endl;
		cout << "   choice: ";
		cin >> c;
		if (c == 1) {
			return "agents comedy";
		}
		else if (c == 2) {
			return "horror comedy";
		}
		else if (c == 3) {
			return "adventure comedy";
		}
		else if (c == 4) {
			return "ridiculous comedy";
		}
		else if (c == 5) {
			return "superhero comedy";
		}
		else if (c == 6) {
			return "political comedy";
		}
		else if (c == 7) {
			return "animated comedy";
		}
		else if (c == 8) {
			return "indian comedy";
		}
		else {
			cout << "error. wrong choice!" << endl;
			return "d";
		}
	}

};

class agentsComedy : public comedy {
	string films[8], qs[8];
public:
	agentsComedy() {
		fstream f;
		f.open("all files/agents comedy films.txt", ios::in);
		for (int i = 0; i < 8; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/agents comedy qs.txt", ios::in);
		for (int i = 0; i < 8; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 8; i++) {
			cout << "   " << qs[i] << endl;
			cout << "  y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}


};

class horrorComedy : public horror, public comedy {
	string films[8], qs[8];
public:
	horrorComedy() {
		fstream f;
		f.open("all files/horror comedy films.txt", ios::in);
		for (int i = 0; i < 8; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/horror comedy qs.txt", ios::in);
		for (int i = 0; i < 8; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 8; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class adventureComedy : public comedy {
	string films[3], qs[3];
public:
	adventureComedy() {
		fstream f;
		f.open("all files/adventure comedy films.txt", ios::in);
		for (int i = 0; i < 3; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/adventure comedy qs.txt", ios::in);
		for (int i = 0; i < 3; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 3; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class ridiculousComedy :public comedy {
	string films[2], qs[2];
public:
	ridiculousComedy() {
		fstream f;
		f.open("all files/ridiculous comedy films.txt", ios::in);
		for (int i = 0; i < 2; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/ridiculous comedy qs.txt", ios::in);
		for (int i = 0; i < 2; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 2; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class politicalComedy : public comedy {
	string films[3], qs[3];
public:
	politicalComedy() {
		fstream f;
		f.open("all files/political comedy films.txt", ios::in);
		for (int i = 0; i < 3; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/political comedy qs.txt", ios::in);
		for (int i = 0; i < 3; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 3; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class AnimatedComedy : public comedy {
	string films[12], qs[12];
public:
	AnimatedComedy() {
		fstream f;
		f.open("all files/animated comedy films.txt", ios::in);
		for (int i = 0; i < 12; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/animated comedy qs.txt", ios::in);
		for (int i = 0; i < 12; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 12; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class indianComedy : public comedy {
	string films[8], qs[8];
public:
	indianComedy() {
		fstream f;
		f.open("all files/indian comedy films.txt", ios::in);
		for (int i = 0; i < 8; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/indian comedy qs.txt", ios::in);
		for (int i = 0; i < 8; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 8; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};


class action : virtual public films {

public:
	string askQ() {
		cout << "   Are you thinking of: " << endl;
		cout << "   1-Superhero Action     2-Action thriller         3-Pakistani/indian action         " << endl;
		cout << "   choice: ";
		cin >> c;
		if (c == 1) {
			return "superhero";
		}
		else if (c == 2) {
			return "action thriller";
		}
		else if (c == 3) {
			return "indopak action";
		}
		else {
			cout << "error. wrong choice!" << endl;
			return "d";
		}
	}

};


class superheroAction : virtual public action {

public:
	string askQ() {
		cout << "   What type of superhero are you thinking of? " << endl;
		cout << "   1-Superhero Comedy     2-Marvel         3-DC         " << endl;
		cout << "   choice: ";
		cin >> c;
		if (c == 1) {
			return "superhero comedy";
		}
		else if (c == 2) {
			return "marvel";
		}
		else if (c == 3) {
			return "dc";
		}
		else {
			cout << "error. wrong choice!" << endl;
			return "d";
		}
	}

};

class marvelheros : public superheroAction {
	string films[10], qs[10];
public:
	marvelheros() {
		fstream f;
		f.open("all files/marvel heros films.txt", ios::in);
		for (int i = 0; i < 10; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/marvel heros qs.txt", ios::in);
		for (int i = 0; i < 10; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 10; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class dcheros :public superheroAction {
	string films[6], qs[6];
public:
	dcheros() {
		fstream f;
		f.open("all files/dc heros films.txt", ios::in);
		for (int i = 0; i < 6; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/dc heros qs.txt", ios::in);
		for (int i = 0; i < 6; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 6; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class superheroComedy : public comedy, public superheroAction {
	string films[4], qs[4];
public:
	superheroComedy() {
		fstream f;
		f.open("all files/superhero comedy films.txt", ios::in);
		for (int i = 0; i < 4; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/superhero comedy qs.txt", ios::in);
		for (int i = 0; i < 4; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 4; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class actionThriller : public action {
	string films[6], qs[6];
public:
	actionThriller() {
		fstream f;
		f.open("all files/action thriller films.txt", ios::in);
		for (int i = 0; i < 6; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/action thriller qs.txt", ios::in);
		for (int i = 0; i < 6; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 6; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class indopakAction : public action {
	string films[6], qs[6];
public:
	indopakAction() {
		fstream f;
		f.open("all files/indopak action films.txt", ios::in);
		for (int i = 0; i < 6; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/indopak action qs.txt", ios::in);
		for (int i = 0; i < 6; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 6; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class scifi : public films {

public:
	string askQ() {
		cout << "   Nice! Is the Science Fiction that you are thinking of is directef by Christopher Nolan? " << endl;
		cout << "   choice:";
		cin >> ch;
		if (ch == "y" || ch == "yes" || ch == "Y" || ch == "Yes" || ch == "YES") {
			return "nolan scifi";
		}
		cout << "   Are you thinking of a SciFi Thriller/Adventure SciFi? " << endl;
		cin >> ch;
		if (ch == "y" || ch == "yes" || ch == "Y" || ch == "Yes" || ch == "YES") {
			return "thriller or adventure scifi";
		}
		else {
			cout << "error. no more available choice!" << endl;
			askQ();
		}
	}

};

class NolanScifi : public scifi {
	string films[4], qs[4];
public:
	NolanScifi() {
		fstream f;
		f.open("all files/nolan scifi films.txt", ios::in);
		for (int i = 0; i < 4; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/nolan scifi qs.txt", ios::in);
		for (int i = 0; i < 4; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 4; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class thrillerORadventureScifi : public scifi {
	string films[6], qs[6];
public:
	thrillerORadventureScifi() {
		fstream f;
		f.open("all files/thriller or adventure scifi films.txt", ios::in);
		for (int i = 0; i < 6; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/thriller or adventure scifi qs.txt", ios::in);
		for (int i = 0; i < 6; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 6; i++) {
			cout << "    " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class FantasyWorld : public films {

public:
	string askQ() {
		cout << "   What type of Fantasy film do you have in mind? " << endl;
		cout << "   1-Novel Based Fantasy           2-Disney Fantasies         " << endl;
		cout << "   choice: ";
		cin >> c;
		if (c == 1) {
			return "novel based fantasy";
		}
		else if (c == 2) {
			return "disney fantasy";
		}
		else {
			cout << "error. wrong choice!" << endl;
			return "d";
		}
	}

};

class NovelBasedFantasy : public FantasyWorld {
	string films[5], qs[5];
public:
	NovelBasedFantasy() {
		fstream f;
		f.open("all files/novel based fantasy films.txt", ios::in);
		for (int i = 0; i < 5; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/novel based fantasy qs.txt", ios::in);
		for (int i = 0; i < 5; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 5; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];

	}

};

class DisneyFantasy : public FantasyWorld {

public:
	string askQ() {
		cout << "   Are you thinking of a Live Action Disney film or Animated Disney Film? " << endl;
		cout << "   1-Live Action Disney           2-Animated Disney    " << endl;
		cout << "   choice: ";
		cin >> c;
		system("CLS");
		if (c == 1) {
			return "live action disney";
		}
		else if (c == 2) {
			return "animated disney";
		}
		else {
			cout << "error. wrong choice!" << endl;
			return "d";
		}
	}

};

class liveActionDisney : public DisneyFantasy {
	string films[4], qs[4];
public:
	liveActionDisney() {
		fstream f;
		f.open("all files/live action disney films.txt", ios::in);
		for (int i = 0; i < 4; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/live action disney qs.txt", ios::in);
		for (int i = 0; i < 4; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 4; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class animatedDisney : public DisneyFantasy {
	string films[8], qs[8];
public:
	animatedDisney() {
		fstream f;
		f.open("all files/animated disney films.txt", ios::in);
		for (int i = 0; i < 8; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/animated disney qs.txt", ios::in);
		for (int i = 0; i < 8; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 8; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class sadDramatic : public films {
	string films[5], qs[5];
public:
	sadDramatic() {
		fstream f;
		f.open("all files/sad dramatic films.txt", ios::in);
		for (int i = 0; i < 5; i++) {
			getline(f, films[i]);
		}
		f.close();
		fstream f2;
		f2.open("all files/sad dramatic qs.txt", ios::in);
		for (int i = 0; i < 5; i++) {
			getline(f2, qs[i]);
		}
		f2.close();
	}
	string askQ() {
		int i = 0;
		for (; i < 5; i++) {
			cout << "   " << qs[i] << endl;
			cout << "   y/n  : ";
			cin >> ch;
			system("CLS");
			if (ch == "y") {
				cout << "   You are thinking of " << films[i] << endl;
				break;
			}
		}
		return films[i];
	}

};

class adult : public films {
protected:
	string askQ() {

	}
public:
	void getaccess() {

	}
};
//////GAME
class game {
	int q[5];
public:
	virtual void setQ(int i, int v) {
		q[i] = v;
	}
	virtual void resetQ() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
class race :public game {
	int q[5];
public:
	race() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
class sports :public game {
	int q[5];
public:
	sports() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
class AA :virtual public game {
	int q[5];
public:
	AA() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
class horrorr :public game {
	int q[5];
public:
	horrorr() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
class moba :public AA {
	int q[5];
public:
	moba() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
class strategy :public game {
	int q[5];
public:
	strategy() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
class fps :public AA {
	int q[5];
public:
	fps() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
class arcade :public game {
	int q[5];
public:
	arcade() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
class battleroyal :public AA {
	int q[5];
public:
	battleroyal() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
class simu :public game {
	int q[5];
public:
	simu() {
		for (int i = 0; i < 5; i++) {
			q[i] = 0;
		}
	}
};
char check(char a) {
	char l;
	if (a == 'y' || a == 'Y') {
		cout << "Bingo!! Hope you enjoyed the program" << endl;
	}
	else if (a == 'N' || a == 'n') {
		cout << "Ah Noo!! Dang it!!" << endl;
	}
	cout << "\n\n\t\tDo you want to Play Again!!(y/n) " << endl;
	cin >> l;
	if (l == 'n' || l == 'N') {
		exit(0);
	}
	return l;
}

class RandomGenerator {
	string name;

public:
	void setinfo(string n, string t) {
		name = n;

	}
	void generate(int ch) {

		vector<string>v;
		if (ch == 1) {
			ifstream file;
			file.open("randoms/RandomFilms.txt");

			while (!file.eof())
			{
				getline(file, name);
				v.push_back(name);

			}
			srand(time(0));
			int i = rand() % v.size();

			cout << "\nSUGGESTED MOVIE FOR YOU !!\n";
			cout << "\nYou should watch it\n";

			cout << endl << " MOVIE NAME : " << v[i] << endl;
			file.close();
		}

		else if (ch == 2) {
			vector<string>v2;

			ifstream file;
			file.open("randoms/RandomGames.txt");

			while (!file.eof())
			{
				getline(file, name);
				v.push_back(name);

			}
			srand(time(0));
			int i = rand() % v.size();

			cout << "\nSUGGESTED GAME FOR YOU !!\n";
			cout << "\nYou should TRY it out\n";

			cout << endl << " GAME NAME : " << v[i] << endl;
			file.close();



		}

	}
};

int main() {
	system("color 9f");
	int a;
	string x;
	type t;
a:
	x = t.askQ();
	if (x == "d") {
		goto a;
	}
	else if (x == "game") {
	jump:
		system("cls");
		string line, l;
		int lc = 0;
		char ans, cc, a;
		cout << "\t\t\t\tWELCOME TO GAME AGENT !! \n\nFollowing Are the rules: " << endl;
		cout << "\n1)Only answer in y or n !!\n\n2)Carefully Answer the question as a SINGLE wrong answer can change the output!!" << endl;
		////////////////
		cout << "Press Any key to play!" << endl;
		cin >> a;
		system("cls");
		cout << "\nQ ) Does Your Game have Action or Adventure that makes it enjoyable?"; cin >> ans;
		if (ans == 'y' || ans == 'Y') {
			cout << "Q ) Is Your Game a First Person Shooter ?"; cin >> ans;
			if (ans == 'y' || ans == 'Y') {
				cout << "Q ) Is your game a battle Royal ?"; cin >> ans;
				if (ans == 'Y' || ans == 'y') {
					ifstream ifp("games/BattleRoyal-AA.txt");
					if (!ifp) {
						cerr << "Error opening file." << endl;
						return 1;
					}
					battleroyal a;

					while (getline(ifp, line)) {
						cout << "\nQ ) " << line << " (y/n)" << endl;
						cin >> ans;
						system("cls");
						if (ans == 'y' || ans == 'Y') {
							a.setQ(lc, 1);
							lc++;
							if (lc == 5) {
								getline(ifp, line);
								cout << "Is your choice " << line << " ?" << endl;
								cin >> cc;
								cc = check(cc);
								if (cc == 'y' || cc == 'Y') {
									goto jump;
								}
							}
						}
						else if (ans == 'n' || ans == 'N') {
							a.resetQ();
							for (int j = 0; j < 5 - lc; j++) {///SKIPPER
								getline(ifp, l);
							}lc = 0;
							//////////////
						}
						else {
							cout << "\nInvalid input" << endl;
						}

					}
				}
				else if (ans == 'n' || ans == 'N') {
					ifstream ifp("games/FPS-AA.txt");
					if (!ifp) {
						cerr << "Error opening file." << endl;
						return 1;
					}
					fps a;

					while (getline(ifp, line)) {
						cout << "\nQ ) " << line << " (y/n)" << endl;
						cin >> ans;
						system("cls");
						if (ans == 'y' || ans == 'Y') {
							a.setQ(lc, 1);
							lc++;
							if (lc == 5) {
								getline(ifp, line);
								cout << "Is your choice " << line << " ?" << endl;
								cin >> cc;
								cc = check(cc);
								if (cc == 'y' || cc == 'Y') {
									goto jump;
								}
							}
						}
						else if (ans == 'n' || ans == 'N') {
							a.resetQ();
							/////
							for (int j = 0; j < 5 - lc; j++) {///SKIPPER
								getline(ifp, l);
							}lc = 0;
							//////////////
						}
						else {
							cout << "\nInvalid input" << endl;
						}

					}
				}
			}
			else if (ans == 'n' || ans == 'N') {
				cout << "Q ) Is your game a Battle Royal ? "; cin >> ans;
				if (ans == 'y' || ans == 'Y') {
					ifstream ifp("games/BattleRoyal-AA.txt");
					if (!ifp) {
						cerr << "Error opening file." << endl;
						return 1;
					}
					battleroyal a;

					while (getline(ifp, line)) {
						cout << "\nQ ) " << line << " (y/n)" << endl;
						cin >> ans;
						system("cls");
						if (ans == 'y' || ans == 'Y') {
							a.setQ(lc, 1);
							lc++;
							if (lc == 5) {
								getline(ifp, line);
								cout << "Is your choice " << line << " ?" << endl;
								cin >> cc;
								cc = check(cc);
								if (cc == 'y' || cc == 'Y') {
									goto jump;
								}
							}
						}
						else if (ans == 'n' || ans == 'N') {
							a.resetQ();
							/////
							for (int j = 0; j < 5 - lc; j++) {///SKIPPER
								getline(ifp, l);
							}lc = 0;
							//////////////
						}
						else {
							cout << "\nInvalid input" << endl;
						}

					}
				}
				else if (ans == 'n' || ans == 'N') {
					cout << "Q ) Does your game have horror adventure ? "; cin >> ans;
					if (ans == 'y' || ans == 'Y') {
						ifstream ifp("games/horror.txt");
						if (!ifp) {
							cerr << "Error opening file." << endl;
							return 1;
						}
						horrorr a;

						while (getline(ifp, line)) {
							cout << "\nQ ) " << line << " (y/n)" << endl;
							cin >> ans;
							system("cls");
							if (ans == 'y' || ans == 'Y') {
								a.setQ(lc, 1);
								lc++;
								if (lc == 5) {
									getline(ifp, line);
									cout << "Is your choice " << line << " ?" << endl;
									cin >> cc;
									cc = check(cc);
									if (cc == 'y' || cc == 'Y') {
										goto jump;
									}
								}
							}
							else if (ans == 'n' || ans == 'N') {
								a.resetQ();
								/////
								for (int j = 0; j < 5 - lc; j++) {///SKIPPER
									getline(ifp, l);
								}lc = 0;
								//////////////
							}
							else {
								cout << "\nInvalid input" << endl;
							}

						}
					}
					else if (ans == 'n' || ans == 'N') {
						cout << "Q ) Does Your game include action while racing "; cin >> ans;
						if (ans == 'Y' || ans == 'y') {
							ifstream ifp("games/racing.txt");
							if (!ifp) {
								cerr << "Error opening file." << endl;
								return 1;
							}
							race a;

							while (getline(ifp, line)) {
								cout << "\nQ ) " << line << " (y/n)" << endl;
								cin >> ans;
								system("cls");
								if (ans == 'y' || ans == 'Y') {
									a.setQ(lc, 1);
									lc++;
									if (lc == 5) {
										getline(ifp, line);
										cout << "Is your choice " << line << " ?" << endl;
										cin >> cc;
										cc = check(cc);
										if (cc == 'y' || cc == 'Y') {
											goto jump;
										}
									}
								}
								else if (ans == 'n' || ans == 'N') {
									a.resetQ();
									/////
									for (int j = 0; j < 5 - lc; j++) {///SKIPPER
										getline(ifp, l);
									}lc = 0;
									//////////////
								}
								else {
									cout << "\nInvalid input" << endl;
								}

							}
						}
						else if (ans == 'n' || ans == 'N') {
							///////////////////////
							////ACTION ADVENTURE///
							///////////////////////
							cout << "Q ) Is your game a MOBA or MMORPG ?"; cin >> ans;
							if (ans == 'y' || ans == 'Y') {

								ifstream ifp("games/moba-AA.txt");
								if (!ifp) {
									cerr << "Error opening file." << endl;
									return 1;
								}
								AA a;

								while (getline(ifp, line)) {
									cout << "\nQ ) " << line << " (y/n)" << endl;
									cin >> ans;
									system("cls");
									if (ans == 'y' || ans == 'Y') {
										a.setQ(lc, 1);
										lc++;
										if (lc == 5) {
											getline(ifp, line);
											cout << "Is your choice " << line << " ?" << endl;
											cin >> cc;
											cc = check(cc);
											if (cc == 'y' || cc == 'Y') {
												goto jump;
											}
										}
									}
									else if (ans == 'n' || ans == 'N') {
										a.resetQ();
										/////
										for (int j = 0; j < 5 - lc; j++) {///SKIPPER
											getline(ifp, l);
										}lc = 0;
										//////////////
									}
									else {
										cout << "\nInvalid input" << endl;
									}

								}
							}
							else {
								ifstream ifp("games/AA.txt");
								if (!ifp) {
									cerr << "Error opening file." << endl;
									return 1;
								}
								AA a;

								while (getline(ifp, line)) {
									cout << "\nQ ) " << line << " (y/n)" << endl;
									cin >> ans;
									system("cls");
									if (ans == 'y' || ans == 'Y') {
										a.setQ(lc, 1);
										lc++;
										if (lc == 5) {
											getline(ifp, line);
											cout << "Is your choice " << line << " ?" << endl;
											cin >> cc;
											cc = check(cc);
											if (cc == 'y' || cc == 'Y') {
												goto jump;
											}
										}
									}
									else if (ans == 'n' || ans == 'N') {
										a.resetQ();
										/////
										for (int j = 0; j < 5 - lc; j++) {///SKIPPER
											getline(ifp, l);
										}lc = 0;
										//////////////
									}
									else {
										cout << "\nInvalid input" << endl;
									}

								}

							}
						}
					}
				}

			}
		}
		else if (ans == 'n' || ans == 'N') {
			cout << "Q ) Does your game involve Racing ? "; cin >> ans;
			if (ans == 'y' || ans == 'Y') {
				ifstream ifp("games/racing.txt");
				if (!ifp) {
					cerr << "Error opening file." << endl;
					return 1;
				}
				race a;

				while (getline(ifp, line)) {
					cout << "\nQ ) " << line << " (y/n)" << endl;
					cin >> ans;
					system("cls");
					if (ans == 'y' || ans == 'Y') {
						a.setQ(lc, 1);
						lc++;
						if (lc == 5) {
							getline(ifp, line);
							cout << "Is your choice " << line << " ?" << endl;
							cin >> cc;
							cc = check(cc);
							if (cc == 'y' || cc == 'Y') {
								goto jump;
							}
						}
					}
					else if (ans == 'n' || ans == 'N') {
						a.resetQ();
						/////
						for (int j = 0; j < 5 - lc; j++) {///SKIPPER
							getline(ifp, l);
						}lc = 0;
						//////////////
					}
					else {
						cout << "\nInvalid input" << endl;
					}

				}
			}
			else if (ans == 'n' || ans == 'N') {
				cout << "Q ) Is your game horror?"; cin >> ans;
				if (ans == 'y' || ans == 'Y') {
					ifstream ifp("games/horror.txt");
					if (!ifp) {
						cerr << "Error opening file." << endl;
						return 1;
					}
					horrorr a;

					while (getline(ifp, line)) {
						cout << "\nQ ) " << line << " (y/n)" << endl;
						cin >> ans;
						system("cls");
						if (ans == 'y' || ans == 'Y') {
							a.setQ(lc, 1);
							lc++;
							if (lc == 5) {
								getline(ifp, line);
								cout << "Is your choice " << line << " ?" << endl;
								cin >> cc;
								cc = check(cc);
								if (cc == 'y' || cc == 'Y') {
									goto jump;
								}
							}
						}
						else if (ans == 'n' || ans == 'N') {
							a.resetQ();
							/////
							for (int j = 0; j < 5 - lc; j++) {///SKIPPER
								getline(ifp, l);
							}lc = 0;
							//////////////
						}
						else {
							cout << "\nInvalid input" << endl;
						}

					}
				}
				else if (ans == 'n' || ans == 'N') {
					cout << "Q ) Is Your game an Arcade game?"; cin >> ans;
					if (ans == 'y' || ans == 'Y') {
						ifstream ifp("games/arcade.txt");
						if (!ifp) {
							cerr << "Error opening file." << endl;
							return 1;
						}
						arcade a;
						while (getline(ifp, line)) {
							cout << "\nQ ) " << line << " (y/n)" << endl;
							cin >> ans;
							system("cls");
							if (ans == 'y' || ans == 'Y') {
								a.setQ(lc, 1);
								lc++;
								if (lc == 5) {
									getline(ifp, line);
									cout << "Is your choice " << line << " ?" << endl;
									cin >> cc;
									cc = check(cc);
									if (cc == 'y' || cc == 'Y') {
										goto jump;
									}
								}
							}
							else if (ans == 'n' || ans == 'N') {
								a.resetQ();
								/////
								for (int j = 0; j < 5 - lc; j++) {///SKIPPER
									getline(ifp, l);
								}lc = 0;
								//////////////
							}
							else {
								cout << "\nInvalid input" << endl;
							}

						}
					}
					else if (ans == 'n' || ans == 'N') {
						cout << "Q ) Is your game a strategy game ?"; cin >> ans;
						if (ans == 'y' || ans == 'Y') {
							ifstream ifp("games/strategy.txt");
							if (!ifp) {
								cerr << "Error opening file." << endl;
								return 1;
							}
							strategy a;

							while (getline(ifp, line)) {
								cout << "\nQ ) " << line << " (y/n)" << endl;
								cin >> ans;
								system("cls");
								if (ans == 'y' || ans == 'Y') {
									a.setQ(lc, 1);
									lc++;
									if (lc == 5) {
										getline(ifp, line);
										cout << "Is your choice " << line << " ?" << endl;
										cin >> cc;
										cc = check(cc);
										if (cc == 'y' || cc == 'Y') {
											goto jump;
										}
									}
								}
								else if (ans == 'n' || ans == 'N') {
									a.resetQ();
									/////
									for (int j = 0; j < 5 - lc; j++) {///SKIPPER
										getline(ifp, l);
									}lc = 0;
									//////////////
								}
								else {
									cout << "\nInvalid input" << endl;
								}

							}
						}
						else if (ans == 'n' || ans == 'N') {
							cout << "Q ) Is your game a Sports game like soccer or cricket?"; cin >> ans;
							if (ans == 'y' || ans == 'Y') {
								ifstream ifp("games/Sports.txt");
								if (!ifp) {
									cerr << "Error opening file." << endl;
									return 1;
								}
								sports a;

								while (getline(ifp, line)) {
									cout << "\nQ ) " << line << " (y/n)" << endl;
									cin >> ans;
									system("cls");
									if (ans == 'y' || ans == 'Y') {
										a.setQ(lc, 1);
										lc++;
										if (lc == 5) {
											getline(ifp, line);
											cout << "Is your choice " << line << " ?" << endl;
											cin >> cc;
											cc = check(cc);
											if (cc == 'y' || cc == 'Y') {
												goto jump;
											}
										}
									}
									else if (ans == 'n' || ans == 'N') {
										a.resetQ();
										/////
										for (int j = 0; j < 5 - lc; j++) {///SKIPPER
											getline(ifp, l);
										}lc = 0;
										//////////////
									}
									else {
										cout << "\nInvalid input" << endl;
									}

								}
							}
							else if (ans == 'n' || ans == 'N') {
								cout << "Q ) Is your game a simulator based game ??";
								cin >> ans;
								if (ans == 'y' || ans == 'Y') {
									ifstream ifp("games/Simulator.txt");
									if (!ifp) {
										cerr << "Error opening file." << endl;
										return 1;
									}
									simu a;

									while (getline(ifp, line)) {
										cout << "\nQ ) " << line << " (y/n)" << endl;
										cin >> ans;
										system("cls");
										if (ans == 'y' || ans == 'Y') {
											a.setQ(lc, 1);
											lc++;
											if (lc == 5) {
												getline(ifp, line);
												cout << "Is your choice " << line << " ?" << endl;
												cin >> cc;
												cc = check(cc);
												if (cc == 'y' || cc == 'Y') {
													goto jump;
												}
											}
										}
										else if (ans == 'n' || ans == 'N') {
											a.resetQ();
											/////
											for (int j = 0; j < 5 - lc; j++) {///SKIPPER
												getline(ifp, l);
											}lc = 0;
											//////////////
										}
										else {
											cout << "\nInvalid input" << endl;
										}

									}
								}
								else {
									cout << "Apologies looks like the game you are looking for is not in our database :(" << endl;
									goto jump;
								}
							}
						}
					}
				}
			}

		}
		/////////////////////////// GAME END
	}
	else if (x == "film") {
		system("CLS");
		films* m;
		films f;
		m = &f;
		a = f.askQ();
		system("CLS");
		if (a == 1) {
			horror f;
		b:
			x = f.askQ();
			system("CLS");
			if (x == "d") {
				goto b;
			}
			system("color 5f");
			if (x == "plain horror") {
				plainHorror f;
				f.askQ();
			}
			else if (x == "horror comedy") {
				horrorComedy f;
				f.askQ();
			}
		}
		else if (a == 2) {
			comedy f;
		c:
			x = f.askQ();
			system("CLS");
			if (x == "d") {
				goto c;
			}
			system("color 5f");
			if (x == "horror comedy") {
				horrorComedy f;
				f.askQ();
			}
			else if (x == "agents comedy") {
				agentsComedy f;
				f.askQ();
			}
			else if (x == "riduculous comedy") {
				ridiculousComedy f;
				f.askQ();
			}
			else if (x == "political comedy") {
				politicalComedy f;
				f.askQ();
			}
			else if (x == "animated comedy") {
				AnimatedComedy f;
				f.askQ();
			}
			else if (x == "indian comedy") {
				indianComedy f;
				f.askQ();
			}
			else if (x == "superhero comedy") {
				superheroComedy f;
				f.askQ();
			}
			else if (x == "adventure comedy") {
				adventureComedy f;
				f.askQ();
			}

		}
		else if (a == 3) {
			action f;
		d:
			x = f.askQ();
			system("CLS");
			if (x == "d") {
				goto d;
			}
			system("color 5f");
			if (x == "superhero") {
				superheroAction f;
			e:
				x = f.askQ();
				system("CLS");
				if (x == "d") {
					goto e;
				}
				system("color 5f");
				if (x == "superhero comedy") {
					superheroComedy f;
					f.askQ();
				}
				else if (x == "marvel") {
					marvelheros f;
					f.askQ();
				}
				else if (x == "dc") {
					dcheros f;
					f.askQ();
				}
			}
			else if (x == "action thriller") {
				actionThriller f;
				f.askQ();
			}
			else if (x == "indopak action") {
				indopakAction f;
				f.askQ();
			}
		}
		else if (a == 4) {
			scifi f;
		g:
			x = f.askQ();
			system("CLS");
			if (x == "g") {
				goto g;
			}
			system("color 5f");
			if (x == "nolan scifi") {
				NolanScifi f;
				f.askQ();
			}
			else if (x == "thriller or adventure scifi") {
				thrillerORadventureScifi f;
				f.askQ();
			}
		}
		else if (a == 5) {
			FantasyWorld f;
		k:
			x = f.askQ();
			system("CLS");
			if (x == "d") {
				goto k;
			}
			system("color 5f");
			if (x == "novel based fantasy") {
				NovelBasedFantasy f;
				f.askQ();
			}
			else if (x == "disney fantasy") {
				DisneyFantasy f;
				x = f.askQ();
				system("CLS");
				if (x == "live action disney") {
					liveActionDisney f;
					f.askQ();
				}
				else if (x == "animated disney") {
					animatedDisney f;
					f.askQ();
				}
			}
		}
		else if (a == 6) {
			system("color 5f");
			sadDramatic f;
			x = f.askQ();
		}


	}
	else if (x == "random") {
		cout << "---------------------------------\n";
		cout << "|                               |\n";
		cout << "|              MENU             |\n";
		cout << "|                               |\n";
		cout << "---------------------------------\n";
		cout << "\n\t\t Enter your selection\n";
		cout << "--------------------------------------------\n";
		cout << "|          1. RANDOM FILM GENEARATE        |\n";
		cout << "--------------------------------------------\n";
		cout << "--------------------------------------------\n";
		cout << "|          2. RANDOM GAME GENEARATE        |\n";
		cout << "--------------------------------------------\n";
		int cho;
		RandomGenerator rn;
		cin >> cho;
		if (cho == 1) {

			rn.generate(1);

		}
		else if (cho == 2) {

			rn.generate(2);

		}
		else {
			cout << "\nWRONG CHOICE...";
		}
	}


}