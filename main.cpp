#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <string>
using namespace std;


class ID{
    private:
        string Name;
        int8_t Age;
        string Address;
    public:
        string get_Name();
        int8_t get_Age();
        string get_Address();
        void Set_ID(string Name, int8_t Age, string Address);
};

void ID::Set_ID(string Name, int8_t Age, string Address){
    this->Name = Name;
    this->Age = Age;
    this->Address = Address;
}

string ID::get_Name(){
    return this->Name;
}

int8_t ID::get_Age(){
    return this->Age;
}

string ID::get_Address(){
    return this->Address;
}


class Printf_ID{
    private:
        ID A;
    public:
        Printf_ID(ID A);
        void Display_ID(ID A);
};

Printf_ID::Printf_ID(ID A){
    this->A = A;
}

void Printf_ID::Display_ID(ID A){
    printf("---------------------------------------------\n");
    printf("Name: %s\n",(A.get_Name()).c_str());
    printf("Age: %d\n",A.get_Age());
    printf("Address: %s\n",(A.get_Address()).c_str());
    printf("---------------------------------------------\n");
}



int main(int argc, char const *argv[])
{
    ID A;
    A.Set_ID("Phan Trong Nguyen",22,"KTX Khu A DHQG HCM");
    Printf_ID P(A);
    P.Display_ID(A);
    return 0;
}
