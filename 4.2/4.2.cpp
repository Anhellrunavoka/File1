#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct People {
    string Prizv;
    string phone;
};
int main()
{
    cout << "Work with files\n";
    //write information in file
    /*ofstream file("text.txt");
    if (!file) {
        cout << "File not find\n";
        return 1;
    }
    else {
        cout << "File find\n";
    }
    cout << "Input information for write in file.For stop input *\n";
    char txt[20];
    int row = 1;
    do {
        cout << row << ")";
        row++;
        cin.getline(txt, 20);
        file << txt << endl;
    } while (*txt!='*');
    */
    //read file 
    //ifstream file("text.txt");
    ////if (!file) {
    //if (file.is_open()) {
    //    cout << "File not find\n";
    //    return 1;
    //}
    //char txt[20];
    //do {
    //    file.getline(txt, 20);
    //    cout << txt << endl;
    //} while (file);
    /*ofstream file("text.txt",ios::app);
    if (!file) {
        cout << "File not find\n";
        return 1;
    }
    cout << "Input information for dowrite in file.For stop input *\n";
    char txt[20];
    int row = 1;
    do {
        cout << row << ")";
        row++;
        cin.getline(txt, 20);
        file << txt << endl;
    } while (*txt != '*');
    cout << "Dowrite file complete\n";
    file.close();*/
    /*ifstream file("read.txt");
    if (!file) {
        cout << "File not find\n";
        return 1;
    }
    ofstream write("write.txt");
    if (!write) {
        cout << "File not find\n";
        return 1;
    }
    string word;
    char chara[37];
    do {
        file.getline(chara,37);
        for (char i : chara) {
            if (i != ' ') {
                word += i;
            }
            else if (i == ' ') {
                if (word.length() >= 7) {
                    write << word << " ";
                }
                word = "";
            }
        }
    } while (file);
    write.close();
    file.close();
    cout << "End";*/
    //ifstream file("text.txt");
    //if (!file) {
    //    cout << "File not find\n";
    //    return 1;
    //}
    //char txt[20];
    //string space = "";
    //while (file) {
    //    file.getline(txt, 20);
    //    //cout << txt << endl;
    //    for (char i : txt) {
    //        if (isdigit(i)) {
    //            space += i;
    //        }
    //        if (i == ' ') {
    //            cout << space << ' ';
    //            space = "";
    //        }
    //    }
    //} 
    ofstream file("abonement.txt");
    if (!file) {
            cout << "File not find\n";
            return 1;
    }
    int ans,count=1;
    People Abonents[5];
    do {
        cout << "Input " << count << " abonent: ";
        getline(cin, Abonents->Prizv);
        getline(cin, Abonents->phone);
        file <<count<<") " << Abonents->Prizv << ' ' << Abonents->phone << endl;
        cout << "Do you have abonents Yes[1] No[2]: ";
        cin >> ans;
        count++;
        cin.ignore();
    } while (ans==1);
}