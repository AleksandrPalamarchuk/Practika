#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string a;
    string b;
    string c;
    string d;
    string A;
    string B;
    cout << "Enter the address of the read file:" << endl;
    cin>>A;
    cout << "Enter the address of the recording file:" << endl;
    cin>>B;
    ifstream F(A);
    cout << "Enter the characters at the beginning of the line:" << endl;
    cin>>a;
    cout << "Enter the characters at the end of the line:" << endl;
    cin>>c;
    ofstream f(B);
    while(getline(F, b))
    {
        d = a + b + c;
        cout << d << endl;
        f << d << endl;
    }
    F.close();
    f.close();
    return 0;
}
