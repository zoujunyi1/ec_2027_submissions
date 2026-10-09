#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    uint8_t Data[4] = {0x05, 0x6C, 0xB1, 0xBC};

    uint8_t id;
    uint8_t vel;
    uint8_t accel;
    uint8_t temp;
    uint8_t torque;
    uint8_t voltage;

    id = Data[0];

    vel = Data[1] & 0x0F;

    accel = (Data[1] >> 4) & 0x0F;

    temp = Data[2] & 0x3F;

    uint8_t torqueHigh = (Data[2] >> 6) & 0x03;
    uint8_t torqueLow = Data[3] & 0x0F;
    torque = (torqueHigh << 4) | torqueLow;

    voltage = (Data[3] >> 4) & 0x0F;

    cout << "ID      = " << (int)id << endl;
    cout << "Speed   = " << (int)vel << endl;
    cout << "Accel   = " << (int)accel << endl;
    cout << "Temp    = " << (int)temp << endl;
    cout << "Torque  = " << (int)torque << endl;
    cout << "Voltage = " << (int)voltage << endl;

    cin.get();     
    cin.get();  

    return 0;
}