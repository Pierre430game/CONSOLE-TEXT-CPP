#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
sleep(1);
cout << "GO !\n";
sleep(1);
cout << "GO !\n";

char o;
do{
cin >> o;
cout << o << endl;
if(o != "ZEPILLE"){
cout << "noo :(\ntry again!";
};
}
while(o != "ZEPILLE");


}