#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog eats some food
dog.eat();
//  action 3: the dog sleeps 
dog.sleep();

//  2)
//  Noun: flashLight (i.e. pocket light)
//  action 1: emit steady light
emitContintuousLight();
//  action 2: emit pulsating light
blink();
//  action 3: recharge from power supply
recharge();

//  3)
//  Noun: television
//  action 1: show selected programm
showProgram();
//  action 2: switch to a different program
switchProgram();
//  action 3: show on-screen menu
showMenu();

//  4) 
//  Noun: horse
//  action 1: the horse walks
walk();
//  action 2: the horse trots
trot();
//  action 3: the horse gallops
gallop();

//  5) swimmer (i.e. swimming athlete)
//  Noun:
//  action 1: the swimmer swims
swim();
//  action 2: the swimmer turns at the end of the lane
turn();
//  action 3: the swimmer finishes at the end of the lane
finish();

//  6)
//  Noun: submarine
//  action 1: the submarine emerges from the water
emerge();
//  action 2: the submarine submerges into the water
submerge();
//  action 3: the submarine raises its periscope
raiseTelescope();

//  7)
//  Noun: balloon (i.e. a hot-air balloon)
//  action 1: the open blast valve of the balloon's burner unit
openBlastValveOfBurner();
//  action 2: heat up the air by burning gas
heatAirByBurningGas();
//  action 3: the balloon releases hot air through its vent
releaseHotAirThroughVent();

//  8)
//  Noun: microwaveOven
//  action 1: start heating 
startHeating();
//  action 2: cancel heating
cancelHeating();
//  action 3: release the door lock
releaseDoor();

//  9)
//  Noun: digitalThermometer (i.e. thermometer for measuring room temperature)
//  action 1: toggle scale for displaying temperature (Fahrenheit/Celsius scale)
//  I am using 'toggle' rather than 'set' because there are no parameters yet.
toggleScale();
//  action 2: the thermometer clears its long-term aggregated values
clearAggregatedValues();
//  action 3: show 24 hour aggregated values or all-time aggregated values
// Again, I use a toggle since there are no parameters yet.
toggleAggregationStyle();

//  10)
//  Noun: turntable (i.e. record player)
//  action 1: the turntable makes its disk rotate
rotate();
//  action 2: the turntable lifts its arm
liftArm();
//  action 3: the turntable lowers its arm 
lowerArm();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
