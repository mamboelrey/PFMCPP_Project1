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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)          
//  Noun:       river
//  action 1:   the river flows
river.flows();
//  action 2:   the river erodes
river.erodes();
//  action 3:
river.swirls();
//  2)          
//  Noun:       sun 
//  action 1:   the sun shines
sun.shine();
//  action 2:   the sun burns
sun.burn();
//  action 3:   the sun heats
sun.heat();
//  3)
//  Noun:       wind
//  action 1:   the wind blows
wind.blow();
//  action 2:   the wind cools
wind.cool();
//  action 3:   the wind moves objects
wind.movesObjects() ;
//  4)
//  Noun:       plane
//  action 1:   the plane flies
plane.flies();
//  action 2:   the plane lands
plane.lands();
//  action 3:   the plane takes off
plane.takesOff();
//  5)
//  Noun:       student
//  action 1:   the student codes
student.codes();
//  action 2:   the student learns
student.learn();
//  action 3:   the student sits 
student.sit();
//  6)
//  Noun:       tornado
//  action 1:   the tornado spins
tornado.spins();
//  action 2:   the tornado destroys
tornado.destroy();
//  action 3:   the tornado moves
tornado.move(); 
//  7)
//  Noun:       fireman
//  action 1:   the fireman extinguishes fire
fireman.extinguishFire();
//  action 2:   the fireman drives truck
fireman.driveTruck();
//  action 3:   the fireman cooks chili
fireman.cookChili();
//  8)
//  Noun:       dog owner
//  action 1:   the dog owner walks dog
dogOwner.walksDog();
//  action 2:   the dog owner buys food
dogOwner.buysFood();
//  action 3:   the dog owner plays fetch
dogOwner.playsFetch();
//  9)
//  Noun:       cat
//  action 1:   the cat meows
cat.meow();
//  action 2:   the cat purrs
cat.purr();
//  action 3:   the cat jumps
cat.jump();
//  10)
//  Noun:       soccer player
//  action 1:   the soccer player kicks ball
soccerPlayer.kicksBall();
//  action 2:   the soccer player scores goal
soccerPlayer.scoreGoal();
//  action 3:   the soccer player slide tackles
soccerPlayer.slideTackle();


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
