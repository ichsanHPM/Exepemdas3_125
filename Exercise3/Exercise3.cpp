#include <iostream>
using namespace std;


class bidangDatar {
private:
    int jejari;
public:
    void input() {
        cout << "masukkan  jejari" << jejari << endl;
        cin >> jejari;
    }
    float luas(int lingkaran) {
        return 
    };

    class bidangDatar {
    private:
        int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
    public:
        bidangDatar() { //constructor
            x = 0;
        }
        virtual void input() {} // fungsi yang menerima input dan mengirim input melalui 
        fungsi setX untuk disimpan di x
            virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
        virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
        void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
            this->x = a;
        }
        int getX() { //fungsi untuk membaca/mengambil nilai dalam x
            return x;
        }
    };
    class Lingkaran :public bidangDatar { /*lengkapi disini*/ };
    class Bujursangkar :public bidangDatar { /*lengkapi disini*/ };
    int main() { /*lengkapi disini*/ }
   

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
