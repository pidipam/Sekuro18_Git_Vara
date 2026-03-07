#include <iostream>
#include <string>

using namespace std;

class RobotPemadam
{
private:
    int jarak;
    string status;
public:
    void inputSensor (int x)
    {
        jarak = x;
    }
    void prosesLogika()
    {
        if (jarak > 20) 
        {
            status = "Maju Mencari Api";
        }
        else if (jarak <= 20 && jarak > 5)
        {
            status = "UDAH DEKET NIH BRAY";
        }
        else 
        {
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }

    void cetakStatus() 
    {
        cout    << "Sensor: " << jarak 
                << " cm -> Action: " 
                << status << '\n';
    }
};

int main () 
{
    int input;
    RobotPemadam robot;

    while (true)
    {
        cout << "Masukkan angka: ";
        cin >> input;

        if (input == 67) 
            break;

        robot.inputSensor(input);
        robot.prosesLogika();
        robot.cetakStatus(); 
    }
}