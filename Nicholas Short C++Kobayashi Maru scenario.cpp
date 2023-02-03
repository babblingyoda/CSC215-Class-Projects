//Nicholas' Short C++ kobayashi maru scenario
#include <iostream>
using namespace std;

int main()
{
    //This set of code takes the name and what ship they want to command
    string name;
    cout << "Enter your name:" << endl;
    cin >> name;
    string ship;
    cout << "Enter the name of your ship:" << endl;
    cin >> ship;
    string ans;
    //This is the first stage of the story
    cout << "Captain Klingons's Approaching off the starboard bow \n I am recieving a hail from them. Should we answer it?" << endl;
    cin >> ans;
    if (ans == "Yes") {
        cout << "U.S.S. " << ship << " you are in violation of treaty by crossing our border \n prepare to be destroyed" << endl;
    }
    else {
        cout << "They are opening fire captain \n Captian the ship can handle this damage \n I cant..... \n *Ship is destroyed*" << endl;
        return 0;
    }
    //This is the second stage of the story
    cout << "Captain they are using weapons we have never seen before they are passing right through our sheilds." << endl;
    cout << "Should we warp away and alert starfleet while we still can or shall we try and disable them" << endl;
    string action;
    cin >> action;
    //This is the third and final stage to the story
    if (action == "Warp") {
        cout << "Aye sir, engaging warp engines \n SIR the warp containment system has been damaged. \n We have a warp core breach in progress. \n Their is no time to avacuate! \n *Ship is destroyed*" << endl;
        cout << "The crew of the U.S.S. "<<ship<<" have died honorbly in battle" << endl;
    }
    if (action == "Fight") {
        cout << "Sir, they disabled our sheild array \n they are boarding us" << endl;
        cout << "Klingon Captian: Captain " << name << " of the U.S.S. " << ship << " I now take your ship in the name of the Klingon empire";
       
    }
    return 0;
}
