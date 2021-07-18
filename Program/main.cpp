#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
    string a;
    string b;
    string c;
    string d;
    string A;
    string B;
    if(argc == 3) {
        B = argv[2];
        A = argv[1];
       }
       else if(argc == 2) {
           cout<<"Enter file path"<<endl;
           cin>>B;
           A = argv[1];
    }
    else {
        cout<<"Enter file path"<<endl;
        cin>>A;
        cout<<"Enter file path"<<endl;
        cin>>B;
    }
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


