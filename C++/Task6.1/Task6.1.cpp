
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	system("chcp 1251");
	ofstream fout("text.txt");

	fout << "Белеет парус одинокой" << endl;
	fout << "В тумане моря голубом!.." << endl;
	fout << "Что ищет он в стране далекой ?" << endl;
	fout << "Что кинул он в краю родном ? ..." << endl;
	fout << endl;
	fout << "Играют волны — ветер свищет," << endl;
	fout << "И мачта гнется и скрыпит…" << endl;
	fout << "Увы!он счастия не ищет" << endl;
	fout << "И не от счастия бежит!" << endl;
	fout << endl;
	fout << "Под ним струя светлей лазури," << endl;
	fout << "Над ним луч солнца золотой…" << endl;
	fout << "А он, мятежный, просит бури," << endl;
	fout << "Как будто в бурях есть покой!" << endl;
	fout.close();
	return 0;
}
