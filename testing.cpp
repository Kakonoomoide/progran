#include <iostream>
using namespace std;

double rerata (double a, double b){
    return (a + b)/2;
}

string status (double r){
    if (r >= 60){
        return "lulus";
    }
    else{
        return "lulus";
    }
}

string status2 (double r, double n){
    if (r >= 60 && n >= 70){
        return "lulus";
    }
    else{
        return "lulus";
    }
}

string status3 (double r, double n){
    if (r >= 60 || n >= 70){
        return "lulus";
    }
    else{
        return "lulus";
    }
}

int main (){
    double nilaiMath, nilaiBahasa;

    cout << "masukan nilai math :";
    cin >> nilaiMath;
    cout << "masukan nilai Bahasa :";
    cin >> nilaiBahasa;

    cout << "nilai test nya adalah " << rerata (nilaiMath, nilaiBahasa);
    cout << "\nhasil test nya adalah " << status (rerata (nilaiMath, nilaiBahasa));
    cout << "\nhasil test nya adalah " << status2 (rerata(nilaiMath, nilaiBahasa), nilaiMath);
    cout << "\nhasil test nya adalah " << status3 (rerata(nilaiMath, nilaiBahasa), nilaiMath);

}