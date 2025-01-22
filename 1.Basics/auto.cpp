#include <iostream>
#include <vector>

using namespace std;

int main() {
   
   auto var1 {"c"}; 
   auto var2 {10}; 
   auto var3 {10.5f};
   auto var5 {11.4545737};
   auto var4 {true};

   //int modifier suffixes 
    auto var6 {10u}; // unsigned int
    auto var7 {10l}; // long
    auto var8 {10ll}; // long long
    auto var9 {10ul}; // unsigned long

    cout << "var1 : " << var1 << endl;
    cout << "var2 : " << var2 << endl;
    cout << "var3 : " << var3 << endl;
    cout << "var4 : " << var4 << endl;
    cout << "var5 : " << var5 << endl;
    cout << "var6 : " << var6 << endl;
    cout << "var7 : " << var7 << endl;
    cout << "var8 : " << var8 << endl;
    cout << "var9 : " << var9 << endl;


}