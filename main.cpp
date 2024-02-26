#include <iostream>
#include <vector>
using namespace std;

void print_vec(vector<int> &vec){
    if (vec.size() == 0){
        cout << "The list is empty.\n" << endl;
    }
    else {
        cout << "[ ";
        for (int i{0}; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << " ]\n\n";
    }
}

void add_vec(vector<int> &vec){
    int num {};
    cout << "Enter your number to add to the list: ";
    cin >> num;
    vec.push_back(num);
    cout << num << " has been added.\n" << endl;
}

void avg_vec(vector<int> &vec){
    if (vec.size() == 0){
        cout << "Unable to calculate the mean - no data" << endl;
    }
    else {
        int sum {0};
        float avg {0.0};
        for (int i{0}; i < vec.size(); i++){
            sum += i;
        }
        avg = sum / vec.size();
        cout << "The Average: " <<  avg << endl << endl;
    }
}

//void swap(vector<int> &vec, int i, int j){
//    int temp = vec[i];
//    vec[i] = vec[j];
//    vec[j] = temp;
//}

void findTheSmallestVal(vector<int> &vec){
    if (vec.size() == 0){
        cout << "Unable to determine the smallest number - list is empty" << endl;
    }
    else {
        int min {vec[0]};
            for (int j {1}; j < vec.size(); j++){
                if (vec[j] < vec[j]){
                    vec[j] = min;
                }
            }
        cout << "The smallest value of the list is " << min << endl << endl;
    }
}

void findTheLargestVal(vector<int> &vec){
        if (vec.size() == 0){
            cout << "Unable to determine the largest number - list is empty" << endl;
        }
        else {
            int max {vec[0]};
            for (int j {1}; j < vec.size(); j++){
                if (vec[j] > max){
                    max = vec[j];
                }
            }
            cout << "The largest value of the list is " << max << endl << endl;
        }
    }

int main() {
    char selection {};
    vector<int> vec {};

    while(true){
        cout << "Press P to print all integers in the list." << endl;
        cout << "Press A to add to the list." << endl;
        cout << "Press M to calculate the mean or the average of the list." << endl;
        cout << "Press S to display the smallest number in the list." << endl;
        cout << "Press L to display the largest number in the list." << endl;
        cout << "Press Q to quit the program.\n" << endl;

        cout << "Enter your choice: ";
        cin >> selection;

        if (selection == 'P' || selection == 'p'){
            print_vec(vec);
        }
        else if (selection == 'A' || selection == 'a'){
            add_vec(vec);
        }
        else if (selection == 'M' || selection == 'm'){
            avg_vec(vec);
        }
        else if(selection == 'S' || selection == 's'){
            findTheSmallestVal(vec);
        }
        else if(selection == 'L' || selection == 'l'){
            findTheLargestVal(vec);
        }
        else if(selection == 'Q' || selection == 'q'){
            cout << "Goodbye." << endl;
            break;
        }
        else{
            cout << "Invalid input." << endl;
        }
    }
    return 0;
}
