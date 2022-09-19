#include <iostream>

using namespace std;

int main () {
//initial variable declaration
string player_choice, player_choice_2, player_choice_2_2, player_choice_3;

//story start
cout << "It's been a strange day indeed. You've fallen down a rabbit hole." << endl;
cout << "You woke up to strange noise. You have to choose /right/ or /left/ road that go deeper into the cave." << endl;
cout << "You chose ... ";
cin >> player_choice;

//check for correct answer
while (player_choice != "left" || player_choice != "right") {
    cout << "No such path" << endl;
    cin >> player_choice;
}

//adventure logic start...
if (player_choice == "right") {
    cout << "Walking down the road to the next cave room you found a pickaxe. There is a closed /door/ in front. In the room's center, there is a /pit/ that someone seems started to be digging before (a pickaxe will be handy)." << endl;
    cin >> player_choice_2;

    if (player_choice_2 == "door") {
        bool pit_chosen = false;
        cout << "The door is locked... What did you expect?" << endl;
        cout << "Returning to previous section..." << endl;
        cout << "There is a closed /door/ in front. In the room's center, there is a /pit/ that someone seems started to be digging before." << endl;

        while (!pit_chosen) {
            cin >> player_choice_2_2;
            if (player_choice_2_2 == "pit") {
            cout << "As soon as you started digging, the floor beneath you collapsed and you fell into the lava." << endl;
            cout << "YOU DIED" << endl;
            pit_chosen = true;

            } else {
            cout << "There is a CLOSED (means it is CLOSED) /door/ in front. In the room's center, there is a /pit/ that someone seems started to be digging before." << endl;
            }

        }

    } else if (player_choice_2 == "pit") {
        cout << "As soon as you started digging, the floor beneath you collapsed and you fell into the lava." << endl;
        cout << "YOU DIED" << endl;
    }




} else if (player_choice == "left") {
    cout << "To be continued..." << endl;
}


}
