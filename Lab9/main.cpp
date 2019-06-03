#include <iostream>
#include <vector>

class bag{
private:
    int _volume = 20;
    float _money = 50;
public:
    bag(int volume, int money);
    //std::vector<food> what_in_bag;
    ~bag();

};
bag::bag(int volume, int money){
    _volume = volume;
    _money = money;
}
bag::~bag(){}

class food : public bag{
public:
    food();
    ~food();
};

food::food(){}
food::~food() {}

int main() {

    return 0;
}