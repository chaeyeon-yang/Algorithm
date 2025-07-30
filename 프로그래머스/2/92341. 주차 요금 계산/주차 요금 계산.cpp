#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>

using namespace std;

int stayTime(string a, string b) {
    int hour1 = stoi(a.substr(0, 2));
    int hour2 = stoi(b.substr(0, 2));
    int min1 = stoi(a.substr(3, 2));
    int min2 = stoi(b.substr(3, 2));
    return (hour2*60+min2)-(hour1*60+min1);
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    int basic_time = fees[0];
    int basic_fee = fees[1];
    int charge_time = fees[2];
    int charge_fee = fees[3];
    
    map<string, string> in_car; // 차량 입실 시간
    map<string, int> charge;
    
    for(int i=0; i<records.size(); i++) {
        stringstream ss(records[i]);
        string car_no, time, check;
        getline(ss, time, ' ');
        getline(ss, car_no, ' ');
        getline(ss, check, ' ');
        
        bool isIn = check=="IN" ? true : false;
        
        if (isIn) {
            in_car[car_no] = time;
        } else {
            int total = stayTime(in_car[car_no], time);
            in_car[car_no] = "";
            charge[car_no] += total;
        }
    }
    
    for(auto car: in_car) {
        if (car.second != "") {
            int total = stayTime(car.second, "23:59");
            charge[car.first] += total;
        }
    }
    for(auto car_charge: charge) {
        int car_time = car_charge.second;
        int tmp = basic_fee;
        if (car_time > basic_time) {
            int now = (car_time-basic_time)/charge_time;
            if ((car_time-basic_time)%charge_time != 0) now+=1;
            tmp += now*charge_fee;
        }
        answer.push_back(tmp);
    }
    
    return answer;
}