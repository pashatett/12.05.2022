#include <iostream>
#include <Windows.h>
using namespace std;

/*легкие
char ch(int a1, int a2) {
	if (a1 > a2) return '>';
	else if (a1 < a2) return '<';
	else  return '=';
}

int summax(int b1[], int b2[]) {
	int max1=b1[0], max2=b2[0];
	for (int i = 0; i < 5; i++) {
		if (max1 < b1[i]) max1 = b1[i];
	}
	for (int i = 0; i < 5; i++) {
		if (max2 < b2[i])max2 = b2[i];
	}
	return max1 + max2;
}

void Z(int str) {
	for (int i = 0; i < str; i++) {
		cout<< '*';
	}
}


//средние
char sogl(string sogl) {
	if (sogl == "й" || sogl == "ц" || sogl == "к" || sogl == "н" || sogl == "г" || sogl == "ш" || sogl == "щ" || sogl == "з" ||
		sogl == "х" || sogl == "ъ" || sogl == "ф" || sogl == "в" || sogl == "п" || sogl == "р" || sogl == "л" || sogl == "д" ||
		sogl == "ж" || sogl == "ч" || sogl == "с" || sogl == "м" || sogl == "т" || sogl == "ь" || sogl == "б")return 1;
	else return 0;
}

int square(int a,int b,int c) {
	int d = b * b - 4 * a * c;
	if (d < 0) return 0;
	if (d > 0) return 1;
	if (d == 0) return 2;
	return -1;
}

void obb(float r) {
	cout<<(r * r * r * 3.14 * 4) / 3;
}


int main() {
	/*int a1, a2;
	cin >> a1 >> a2;
	ch(a1,a2);

	int b1[5]={1,2,3,4,5}, b2[5]={6,7,8,9,10};
	summax(b1, b2);

	int st;
	cin >> st;
	Z(st);

	string sog;
	cin >> sog;
	sogl(sog);/

	float r;
	cin >> r;
	obb(r);
}*/

//игра 21
/*//interface
void main_menu();
void step_game(int cards_first, int cards_next);
int random_issuance_of_cards();
int check_cards();
enum Cards{valet=2,queen,king,six=6,seven,eight,nine,ten,eleven};
int player_turn();
int computer_turn();
bool win(int summa_user, int summa_comp);

int main() {
	setlocale(LC_ALL, "");
	int first_card = check_cards(), second_card = check_cards();
	main_menu();
	step_game(first_card, second_card);
}

void main_menu() {
	cout << "Добро поожаловать в игру 21!\n";
	cout << "Хотите начать игру?(y/n)\n";
	string flag;
	cin >> flag;
}
void step_game(int cards_first, int cards_next) {
	int summa_user = 0, summa_comp = 0;
	cout << "Ваши карты: " << cards_first << "," << cards_next;
	cout << "Итоговая сумма: " << cards_first + cards_next;
	cout << "Хотите взять еще карту? (y/n)";
	string flag;
	bool f = true;
	while(true) cin >> flag;
	if (flag == "y") {
		//выдача карт
		if (summa_user >= 21) f = win(summa_user, summa_comp);
		else summa_user += player_turn();
	}
	else if (flag == "n") {
		//завершение игры
		summa_comp += computer_turn();
		win(summa_user, summa_comp);
	}
	else cout << "daun";
}
//рандомная выдача карт начало
int random_issuance_of_cards() {
	srand(time(0));
	int random_card = rand() % 10 + 2;
	while (random_card == 5) random_card = rand() % 10 + 2;
	return random_card;
}
//учет повторяющихся карт
int check_cards() {
	int arrayRepeatCards[12] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	int random_card = random_issuance_of_cards();

	do {
		if (arrayRepeatCards[random_card] > 4)
			random_card = random_issuance_of_cards();
		else {
			arrayRepeatCards[random_card]++;
			return random_card;
		}
	} while (true);
}
//рандомная выдача карт конец
enum Cards { valet = 2, queen, king, six = 6, seven, eight, nine, ten, eleven };
//ход игрока
int player_turn() {
	return check_cards();
}
//ход компьютера
int computer_turn() {
	int summa = 0;
	summa += check_cards();
	summa += check_cards();
	srand(time(0));
	int a, b, c;
	a = rand() % 2;//50%
	b = rand() % 5;//25%
	c = rand() % 10;//10%

	while (true) {
		if (summa < 11) summa += check_cards();
		else if (10 < summa < 14) if (b < 4) summa += check_cards();
		else if (13 < summa < 16) if (a) summa += check_cards();
		else if (15 < summa < 18) if (b) summa += check_cards();
		else if (17 < summa < 20) if (c) summa += check_cards();
	}
	return summa;
}
//условие выигрыша
bool win(int summa_user, int summa_comp) {
	if (summa_user == 21)cout << "pobeda igorka\n";
	else if (summa_user > 21)cout << "pobeda compa\n";
	else if (summa_user > summa_comp) cout << "pobeda igorka\n";
	else if (summa_user < summa_comp) cout << "pobeda compa\n";
	else if (summa_user == summa_comp) cout << "nich9\n";
	return false;
}*/


//контрольная работа
void z1() {
	float a;
	cin >> a;
	if (a > 1000)cout << a * 0.9;
	else cout << a;
}
void z2() {
	srand(time(0));
	int a = rand() % 10, b = rand() % 10, c;
	cout << a << '*' << b << '='; cin >> c;
	if (c == a * b)cout << "Правильно";
	else cout << "Вы ошиблись";
}
void z3() {
	int kolvo;
	cin >> kolvo;
	switch (kolvo) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		cout << kolvo * 10;
		break;
	case 11:
		cout << kolvo * 9;
	}
}
void z4() {
	int ff, min;
	cout << "С каким городом вы общаетесь?\n"
		<< "Город          	Код\n"
		<< "Владивосток     423\n"
		<< "Москва         	495\n"
		<< "Мурманск      	815\n"
		<< "Самара        	846\n"; cin >> ff;
	cout << "Сколько минут? "; cin >> min;
	switch (ff) {
	case 423:
		cout << min * 2.2;
		break;
	case 495:
		cout << min;
		break;
	case 815:
		cout << min * 1.2;
		break;
	case 846:
		cout << min * 1.4;
		break;
	}
}
void z5() {
	for (float i = 0; i < 4; i += 0.5) {
		cout << i << "  " << i * 9.8 << endl;
	}
}
void z6() {
	int a, b = 0;
	cin >> a;
	for (int i = 0; i <= a; i++) {
		b += i;
	}
	cout << b;
}
void z7() {
	srand(time(0));
	int a = rand() % 10, b;
	cin >> b;
	while (b != a)cin >> b;
	if (b == a)cout << "Верно!";
}
void z8() {
	float y, x = -4;
	while (x != 4) {
		y = (2 * x * x) - (5 * x) - 8;
		cout << x << "   " << y << endl;
		x += 0.5;
	}
}
void z9() {
	int a[5] = {}, b, min;
	for (int i = 0; i < 5; i++) {
		cin >> b;
		a[i] = b;
	}
	min = a[0];
	for (int i = 0; i < 5; i++) {
		if (min > a[i])min = a[i];
		cout << a[i] << " ";
	}
	cout << endl << min;
}
void z10() {
	int a[5] = {}, b, s = 0, chislo;
	cout << "kakoe chislo nayti? "; cin >> chislo;
	for (int i = 0; i < 5; i++) {
		cin >> b;
		a[i] = b;
	}
	for (int i = 0; i < 5; i++) if (a[i] == chislo)s++;
	cout << s;
}
void z15() {
	/*void z151(int a, int b) {
		for (int i = 0; i <= a; i++) {
			cout << b;
		}
	}
	int main() {
		int a;
		string b;
		cin >> a;
		cin >> b;

	}}*/
}

int main() {
	
}