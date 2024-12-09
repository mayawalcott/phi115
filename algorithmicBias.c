#include <stdio.h>

//--------------------------------------------------------------------------------------------------------------------------------

int main(void) {

    //variable declaractions 
    int userinput2;
    int attempts = 3;
    char userinput, userinput3, characterinput, userinput4;

    printf("Hi! My name is Echo and I will be your teacher on algorithmic bias!\n");
    printf("Press (Y or N) if you would like to learn: ");

    // implementation of a for loop so that the users have a limit on how many attempts they have
    
    for (int i = 0; i < attempts; i++) {

        //reading input
        scanf(" %c", &userinput);

        if (userinput == 'Y' || userinput == 'y') {

            printf("The Definition of Algorithmic Bias is the systemic and repeatable errors in a computer system that create unfair outcomes, such as privileging one group over another\n");

            printf("Enter 0 to continue to hear about my philosophy lab and what I found difficult! ");
            scanf("%d", &userinput2);

            if (userinput2 == 0) {

                printf("In my assignment, we talked about a 2015 black developer who realized Google’s photo recognition software tagged pictures of him with racist tags and it was found that a facial recognition scanner had trouble reading black faces.\n");

                printf("Have you heard of what unintended biases are? (Y or y, no No option): ");
                scanf(" %c", &userinput3);

                if (userinput3 == 'Y' || userinput3 == 'y') {
                    printf("Unintended biases can be described as systematic errors in a computer's program much like myself (Echo) that can lead to unfair outcomes!\n");

                    printf("Can you identify which one is an unintended bias? a). An image of an individual is deemed as cool b). A picture of any woman is associated with being ugly from an A.I. \n");
                    scanf(" %c", &characterinput);

                    if (characterinput == 'B' || characterinput == 'b') {

                        printf("Correct!\n");
                        printf("What I found difficult is trying to figure out who would be responsible for the upkeep of the A.I. and who is to blame if algorithmic bias occurs. My perspective after reading this was that the individual engineers are morally responsible for the kind of data violence in these cases because they are carrying with them what they believe is normal and coding based off of that which can lead to the program having inherent bias against a specific group of people\n");

                        printf("Do you need further clarification as to why I think this way? (Y or y, no No option): ");
                        scanf(" %c", &userinput4);

                        if (userinput4 == 'Y' || userinput4 == 'y'){

                                printf("In simpler terms, think about a situation with an older kid and a younger kid. If the older kid (lets say about 5 years older than the younger kid age 5) is telling the younger kid to go swear at someone, they will do it because they don't know any better. But the older kid DOES know better because of their age; they know right from wrong and it is not okay to lead them in a negative direction.\n A software engineer cannot be pushing their tools in a negative direction because of things that they believe are okay morally. Before doing something that could cause potential harm, they need to consult others to prevent causing harm.");

                                printf("In conclusion, the choices we take when we code can lead to 'harmful or fatal outcomes' and it is important to code with care. Thank you for listening!\n");

                        } // end of if

                    } else {
                        printf("Incorrect! The right answer is option 'b'.\n");
                    }

                } else {

                    printf("You did not answer 'Y'! Echo says bye!\n");
                }

            }

            break; 

        } else if (userinput == 'n' || userinput == 'N') {

            printf("You selected 'N'. Goodbye!\n");
            break; 

        } else {
            
            printf("Invalid input :( Please press (Y or N). You have %d attempts left!\n", attempts - (i + 1));
        }

    
        if (i == attempts - 1) {
            printf("Too many invalid attempts!\n");
        }
    }

    return 0; 
}

