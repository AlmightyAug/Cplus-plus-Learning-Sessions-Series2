#include <iostream>

using namespace std;

template <class T>
class Swanky{
public:
    Swanky(T x){
        cout << x << " is not a character" << endl;
    }
};

template<>
class Swanky<char>{
public:
    Swanky(char x){
        cout << x << " is indeed a character" << endl;
    }
};

int main()
{
    Swanky<int> obj1(7);
    Swanky<double> obj2(3.14);
    Swanky<char> obj3('y');
}
