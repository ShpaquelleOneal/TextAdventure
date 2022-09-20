#include <iostream>

using namespace std;

int main () {
//initial variable declaration
string player_choice, player_choice_2, player_choice_2_2, player_choice_3, player_choice_3_1;

//story start
cout << "It's been a strange day indeed. You've fallen down a rabbit hole." << endl;
cout << "You woke up to strange noise. You have to choose /right/ or /left/ road that go deeper into the cave." << endl;
cout << "You chose ... ";

//correct answer collection
bool correct_choice = false;
while (!correct_choice) {
    cin >> player_choice;
    if (player_choice == "right" || player_choice == "left") {
        correct_choice = true;
    } else {
    cout << "Incorrect input. Try again...";
    }
}

//adventure logic start...
if (player_choice == string("right")) {
    cout << "\nWalking down the road to the next cave room you found a pickaxe. There is a closed /door/ in front. In the room's center, there is a /pit/ that someone seems started to be digging before (a pickaxe will be handy)." << endl;
    cout << "You chose ... ";
    cin >> player_choice_2;

    if (player_choice_2 == string("door")) {
        bool pit_chosen = false;
        cout << "\nThe door is locked... What did you expect?" << endl;
        cout << "Returning to previous section..." << endl;
        cout << "There is a closed /door/ in front. In the room's center, there is a /pit/ that someone seems started to be digging before." << endl;

        while (!pit_chosen) {
            cin >> player_choice_2_2;
            if (player_choice_2_2 == string("pit")) {
            cout << "\nAs soon as you started digging, the floor beneath you collapsed and you fell into the lava." << endl;
            cout << "YOU DIED" << endl;
            pit_chosen = true;

            } else {
            cout << "\nThere is a CLOSED (means it is CLOSED) /door/ in front. In the room's center, there is a /pit/ that someone seems started to be digging before." << endl;
            }

        }

    } else if (player_choice_2 == string("pit")) {
        cout << "\nAs soon as you started digging, the floor beneath you collapsed and you fell into the lava." << endl;
        cout << "YOU DIED" << endl;
    }




} else if (player_choice == string("left")) {
    cout << "\nDuring the path between the cave rooms, you found a golden coin." << endl;
    bool room_end = false;
    bool has_a_coin;
    while (!room_end) {
        cout << "\nIn the cave room, there is a beautiful /fountain/ and a wooden /chest/." << endl;
        cout << "Your choice: ";
        cin >> player_choice_3;

        if (player_choice_3 == "fountain") {
            cout << "\nYou went closer to the fountain. Water shimmers from the light of a torch..." << endl;
            cout << "You might have a coin to toss for a wish." << endl;
            cout << "Toss it? /yes/ or /no/." << endl;
            cin >> player_choice_3_1;
            if (player_choice_3_1 == "yes" && has_a_coin) {
                cout << "\nYou tossed a coin." << endl;
                cout << "The floor lit up  with blue underneath you." << endl;
                cout << "..." << endl;
                cout << "You closed your eyes and after a few seconds you got teleported to the surface." << endl;
                cout << "Congratulations, you survived!" << endl;
                room_end = true;
            } else if (player_choice_3_1 == "no" && has_a_coin) {
                cout << "\nYou decided to return to room's center." << endl;
            } else if (!has_a_coin) {
                cout << "\nYou have already wasted your coin..." << endl;
                cout << "You have no chances left to survive." << endl;
                cout << "You starved to death." << endl;
                cout << "Rats ate you guts and eyeballs..." << endl;
                cout << "YOU DIED" << endl;
                room_end = true;

            }

        } else if (player_choice_3 == "chest" && has_a_coin) {
            string player_choice_3_2_1;
            cout << "\nAfter observing a chest, you thought that it might be a mimic." << endl;
            cout << "Toss a coin into a chest? /yes/ or /no/" << endl;
            cin >> player_choice_3_2_1;
            if (player_choice_3_2_1 == "yes" && has_a_coin) {
                cout << "\nYou noticed that the chest moved a bit after it got hit with a coin." << endl;
                cout << "You went back to the room's center." << endl;
                has_a_coin = false;

            } else {
                cout << "\nYou don't have a coin anymore..." << endl;
                cout << "You went back to the room's center." << endl;

            }

        } else if (player_choice_3 == "chest" && !has_a_coin) {
            cout << "\nYou approached the chest again." << endl;
            cout << "Mimic opened his mouth and swallowed you up." << endl;
            cout << "You knew that that was a mimic. What did you expect?" << endl;
            cout << "YOU DIED" << endl;
            room_end = true;
        }

    }

} else {
cout << "No such path" << endl;
}

}
