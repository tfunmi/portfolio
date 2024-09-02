#include <iostream>

int main() {

    int peter_lara_relationshipscore = 0;

    std::string choice1;
    std::string choice2;
    std::string choice3;

    //choice 1

    std::cout << "Welcome to this storyline adventure based off of To All the Boys I've Loved Before!\n";
    std::cout << "This story begins with a girl named Lara Jean who has a huge crush on her neighbor, Josh.\n";
    std::cout << "She spent her whole life liking him until he inevitably shut her down :( while at school trying to get over her embarassment, Lara is running laps around the track for PE when she bumps into Peter Kavinsky! Lara decides to:\n";
    std::cout << "(Choose wisely! Certain choices will get you more or less points, which leads to certain outcomes/consequences.)\n";

    std::cout << "A) Ignore him\n";
    std::cout << "B) Introduce herself\n";
    std::cout << "C) Kiss him to avoid embarassment\n";

    std::cin >> choice1;

    while(choice1 != "A" && choice1 != "B" && choice1 != "C") {
        std::cout << "Please select one of the options by choosing a provided letter (make sure it's uppercase!).\n";
        std::cin >> choice1;
    }

    if(choice1 == "A") {
        peter_lara_relationshipscore -= 1;
    } else if(choice1 == "B") {
        peter_lara_relationshipscore += 1;
    } else if(choice1 == "C") {
        std::cout << "Peter was initially taken aback, but was then intrigued! He wanted to help her get over her rejection from Josh, so he offered to be her fake boyfriend.\n";
        std::cout << "As a result, Lara Jean and Peter strike up a deal to be fake boyfriend + girlfriend. They maintain this ruse through cute social media media posts, not real (but very possibloy real dates), and back pocket holding ;)\n";
        peter_lara_relationshipscore += 2;
    }

    std::cout << "\n";

    //choice 2

    std::cout << "At a party, Lara and Peter meet up again and make GREAT eye contact. Lara decides to:\n";

    std::cout << "A) Turn the other way\n";
    std::cout << "B) Spill her drink on him (why not shake things up a bit)\n";
    std::cout << "C) Strike up nice, healthy conversation\n";

    std::cin >> choice2;

    while(choice2 != "A" && choice2 != "B" && choice2 != "C") {
        std::cout << "Please select one of the options by choosing a provided letter (make sure it's uppercase!).\n";
        std::cin >> choice2;
    }

    if(choice2 == "A") {
        peter_lara_relationshipscore -= 1;
    } else if(choice2 == "B") {
        std::cout << "Peter jumped up from his seat and looked to Lara in surprise, but she profusely apologized and offered to help him clean his shirt.\n";
        std::cout << "To her delightful surprise, Peter led her to the bathroom where he took his shirt off and started running it under water while asking her to hand him the bar of soap.\n";
        std::cout << "'You've really made a mess of things Covey', he said to her with a cheeky grin on his face :)\n";
        std::cout << "AUTHOR'S NOTE: please do not take this seriously lol and dont spill drinks on people to 'make things interesting'\n";
        std::cout << "\n";

        peter_lara_relationshipscore += 2;
    } else if(choice2 == "C") {
        peter_lara_relationshipscore += 2;
    } 

    std::cout << "\n";

//possible end for some users 
    if(peter_lara_relationshipscore <= 0){
        std::cout << "Sorry, Lara and Peter are just strangers and nothing happened between them since she didn't do anything. Btw: Lara is still reeling from Josh's rejection to this day :(\n";
        return 0;
    }

    //choice3
    std::cout << "At the annual senior ski trip (after baking cookies together, listening to Laufey, and watching 10 Things I Hate About You) Lara goes to the hot tub for some time alone and sees Peter there!\n";
    std::cout << "She decides to: (only one answer gets a point here!)\n";

    std::cout << "A) Leave him alone and let him have his space, since she thinks they already spent too much time together\n";
    std::cout << "B) Hop in the tub and start talking to him\n";
    std::cout << "C) Ask if he's ok and wait for him to invite her in\n";

    std::cin >> choice3;

    while(choice3 != "A" && choice3 != "B" && choice3 != "C") {
            std::cout << "Please select one of the options by choosing a provided letter (make sure it's uppercase!).\n";
            std::cin >> choice3;
        }

    if(choice3 == "A") {
        std::cout << "Peter looked over longingly at her retreating form, wondering what could've been.\n";

        peter_lara_relationshipscore += 0;
    } else if(choice3 == "B") {
        std::cout << "Peter enjoyed Lara's company, but wished she asked before coming in since he kind of wanted a moment to himself.\n";
        std::cout << "While she talked he zoned out and only mentally checked in when she asked him a question, giving her a half-smile and nod.\n";

        peter_lara_relationshipscore += 0;
    } else if(choice3 == "C") {
        std::cout << "Peter appreciates Lara's concern, invites her in, and the rest is history (iykyk :))\n";
        peter_lara_relationshipscore += 10;
    }

    std::cout << "\n";

    //calucation of scores 
    std::cout << "Your final score is: " << peter_lara_relationshipscore << "!\n";
    std::cout << "\n";

    //im tired rn so later add condionals to explain what certain scores get different endings 
    if(peter_lara_relationshipscore <= 2) {
        std::cout << "Lara and Peter are nothing more than acquaintences.\n";
    } else if((peter_lara_relationshipscore > 2) && (peter_lara_relationshipscore <= 4)) {
        std::cout << "Lara and Peter had a few good interactions, and are cool with each other-- nothing more, nothing less. They are friends, and laugh at the crazy things they have done together.\n";
    } else if(peter_lara_relationshipscore > 4) {
        std::cout << "Peter and Lara got very close and are now officially boyfriend and girlfriend!\n";
    }

    return 0;
}