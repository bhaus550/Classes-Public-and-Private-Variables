#include <iostream>
using namespace std;
class CounterType{
private:
    int counter;
public:
    CounterType();
    CounterType(int countThings);
    void counter_up();
    void counter_down();
    void out();
    int get_count();
    void finalout();
};
int main() {
    CounterType counter;
    int input;
    bool CountContinue = true;
    while(CountContinue == true){
        cout << "Press 1 to increase count\n Press 2 to decrease count\n Press 3 to exit program" << endl;
        cin >> input;
        if(input ==1){
            counter.counter_up();
            counter.get_count();
            counter.out();
            continue;
        }
        if(input == 2){
            counter.counter_down();
            counter.get_count();
            counter.out();
            continue;
        }
        if(input == 3){
            CountContinue = false;
        }
    }
    while (CountContinue==false){
        counter.finalout();
        return 0;
    }

}

CounterType::CounterType(): counter(0){
}

CounterType::CounterType(int countThings){
    if(countThings < 0){
        cout << "The count was a negative number. It cannot be negative." << endl;
    }
    else{
        counter = countThings;
    }
}
void CounterType::counter_up(){
    counter++;
    if(counter < 0){
        cout << "Count was negative. Restart program" << endl;
    }
}
void CounterType::counter_down(){
    counter--;
    if(counter < 0){
        cout << "Count was negative. Restart program" << endl;
    }
}
int CounterType::get_count(){
    return counter;
}
void CounterType::out(){
    cout << "The count is: " << counter << endl;

}
void CounterType::finalout(){
    cout << "The final count is: " << counter << endl;
}
/*Press 1 to increase count
 Press 2 to decrease count
 Press 3 to exit program
1
The count is: 1
Press 1 to increase count
 Press 2 to decrease count
 Press 3 to exit program
1
The count is: 2
Press 1 to increase count
 Press 2 to decrease count
 Press 3 to exit program
1
The count is: 3
Press 1 to increase count
 Press 2 to decrease count
 Press 3 to exit program
2
The count is: 2
Press 1 to increase count
 Press 2 to decrease count
 Press 3 to exit program
2
The count is: 1
Press 1 to increase count
 Press 2 to decrease count
 Press 3 to exit program
3
The final count is: 1
 */

