#include <iostream>
#include <cstdlib>
using namespace std;


//consider implementing a time out notification if the user takes longer than 5 seconds.


int main()
{
	// Seed the rand
	//srand(time(0));


	//array for the numbers

	int numbers[13][13];

	//User variables
	char response;
	int wrong_answer = 0;
	int right_answer = 0;

	//random number variables
	int rand1 = 0;
	int rand2 = 0;
	int answer = 0;
	int question = 0;

	//GABE - You hvae to declare and initialize the array.
	//Right now you're trying to set it to be a 0 wide and 0 deep array.
	//numbers[rand1][rand2];
	int numbers[13][13] = { };

	// randomize both variables
	//random_num_one = (rand()%12+1);
	//random_num_two = (rand()%12+1);
	//question = (random_num_one * random_num_two);

	//points variable
	int point_tracker = 0;





	// Welcome the User to the game -- Explain the rules
	cout << endl << endl << endl;
	cout << "Welcome to the Times Table Challenge!\n\n";
	cout << "You will be given a question (i.e 5 * 5) randomly from numbers 1 - 12.\n";
	cout <<	"If you guess a question wrong but are within 5 of the answer, "
	     << "you will get another chance.\n\n";
	cout << "*If you get 3 wrong in a row. You will lose.\n" << endl;
	cout << "*A point will be given for each right answer." << endl << endl;

	// Ask the user if they would like to play
	cout << "Would you like to play?";
	cin >> response;
	response = toupper(response);
	cout << endl << endl;

	if ( response == 'Y' )
	{
		cout << "LETS PLAY!\n\n";

		while ( wrong_answer < 3)  // || right_answer < max_right_answer )
		{

		    // Seed the rand
		    srand(time(0));
		    rand1 = (rand()%12+1);
		    rand2 = (rand()%12+1);
			
			//GABE - This is where you check the array to see if
			//you've used it before. PSUEDOCODE, not real code below.
			
			QuestionAskedBefore = numbers[rand1][rand2]
			
			If QuestionAskedBefore = 1
			{
				//We need to bail because we've asked it before.
				Continue
			}
			//Don't forget that you need up *UPDATE* the array to be set to 1 (true)
			//if you actually use the question.
			//I would do that if they get the answer right (in the if below)

		    question = (rand1 * rand2);
		    // read out randomized variables and multiply together.
		    cout << rand1 << " * " << rand2 << " = " ;
		    // read in user's answer.
		    cin >> answer;

		    if ( answer == question )
		    {
			wrong_answer = 0;

			point_tracker++;
		    	cout << "You are correct!\n";
			cout << "Points: " << point_tracker << endl;
		    	// Add a point system to track # correct answers.
		    }

		    else
		    {
		    	// Add a counter to add to wrong_answer.
			wrong_answer++;
			cout << "Sorry, you are incorrect.\n\n";
			cout << "Number of wrong answers: " << wrong_answer << endl;
			cout << "Attempts remaing: " << 3 - wrong_answer <<  endl;
			if ( wrong_answer == 3 )
			{
			    cout << "Sorry you were incorrect 3 times.\n\n\n";
			    cout << "GAME OVER!" << endl;
			}
		    }
                }
	}

	else
	{
		cout << "Awe, alright. Maybe next time!\n";
	}























	return 0;
}
