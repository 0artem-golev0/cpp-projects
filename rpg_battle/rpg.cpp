#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>
using namespace std;
int main() {
    srand(time(0));
    int crit_bonus = 1+(rand() % 5);
    int* crit_damage = &crit_bonus;
    int damage = 10;
    int playdmg = damage  * *crit_damage;
    cout << "[AMARIN]: Здравствуй, Воин. Я Амарин, правитель артийской империи. На Нас напал Народ Монархов. Помоги Нам! Убей их правителя - Ангелину Великую!" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "[GAMELOG]: Твой урон - " << damage << ", но его множитель -  " << *crit_damage << ", поэтому твой урон составляет: " << playdmg << "!" << endl;
    this_thread::sleep_for(chrono::milliseconds(1500));
    cout << "[ANGELINA]: Ты захотел сражаться против меня? Узри МОЮ СИЛУ! " << endl;
    int anghp = 75;
    int playhp = 70;
    int angdmg = 20;
    while (anghp > 0 && playhp > 0) {
        
        playhp -= angdmg;
        if (playhp <= 0) {
        cout << "Ты проиграл! Амарин разачарован!" << endl;
        break;
    }
        *crit_damage = 1 + (rand() % 5); 
        int current_hit = damage * (*crit_damage); 
        cout << "[GAMELOG]: Тебя атаковали! У тебя осталось " << playhp << " единиц здоровья, а у Ангелины " << anghp << " единиц. Сражайся!" << endl;
        this_thread::sleep_for(chrono::milliseconds(1500));
        anghp -= current_hit;
        if(anghp <= 0) {
        cout << "Ты выиграл! Амарин поблагодарил тебя!" << endl;
        break;
        }
        cout << "[GAMELOG]: Ты атаковал! У Ангелины осталось " << anghp << " единиц здоровья, а у тебя " << playhp << " единиц. Продолжай!" << endl;
        this_thread::sleep_for(chrono::milliseconds(1500));
    }
    

    return 0;
}