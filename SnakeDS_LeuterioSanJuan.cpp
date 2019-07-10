#include <iostream>
#include <map> // for the map DS
#include <time.h> // for the function time()
#include <windows.h> // fir the function Sleep()
#include <conio.h> // for the two functions kbhit(), getch()
#include <stdlib.h> //for the random fucntions: srand(), rand()
using namespace std;

class Node {
	friend class Snake;

	private:
		int positionX, positionY;
		Node *next;
};

class Snake {
	private:
		Node *front, *rear;

	public:
		Snake() {
			front = new Node();
			rear = new Node();
			front = NULL;
			rear = NULL;
		}

		void enqueue(int x, int y) {
			Node* newNode = new Node();
			newNode->positionX = x;
			newNode->positionY = y;
			newNode->next = NULL;

			if (rear == NULL) {
				rear = newNode;
				front = newNode;
			}
			else {
				rear->next = newNode;
				rear = newNode;
			}
		}

		void dequeue(int& x, int& y) { // It will directly put data in given variables
			if (!(this->isEmpty())) {
				x = front->positionX;
				y = front->positionY;

				Node *temp = front;
				front = front->next;

				delete temp;

				if(this->isEmpty())
					rear = NULL;
			}
			else cout << "Queue is Empty.\n";
		}

		void getFront(int& x, int& y) { // only return the node data from front of queue
			if (!(this->isEmpty())) {
				x = front->positionX;
				y = front->positionY;
			}

			else cout << "Queue is empty.\n";
		}

		bool isEmpty() {
			return (front == NULL);
		}
};

map<int, map<int, char> > frame;  // 2D map
int width = 40, height = 20; // Variables for map dimensions
float speed = 4; // Speed of snake framee per seconds.



// Dimensions
int headpositionX, headpositionY; // Variables for Snake head dimension
int bodypositionX, bodypositionY; // Snake body part dimension
int fruitpositionX, fruitpositionY;// Fruit dimension

Snake snake; // Snake queue object
// Snake body and fruit
char head = 224;  
char body_part = 240;
char fruit = 190;

int i, j; // Variables for Loop Control
int score; // Score
bool game_over; // boolian variable to tell if game is over or not

// Directions
bool direction; // 0 means vertical, 1 means horizontal
bool whichward; // In vertical: 0 means right 1 means left.
				// In horizontal: 0 means up and 1 means down


//   FUNCTION DECLARATIONS  
void initGame();
void add_partbody();
void refresh();
void create_fruit();
void navigate_direction(char dir);
void control_head();
void display_map();

// DRIVE FUNCTION
int main() {
	initGame();
	create_fruit();
	
	// loop of the game
	do {
		refresh();
		if (_kbhit()) {
			navigate_direction(_getch());
		}
	} while(game_over == false);

	cout << "Game Over, Please try again!\n\n";
	system("pause");
	return 0;
}


//	FUNCTION DEFINITION
void initGame() {
	score = 0;
	
	// outer dimension of the box
	for(i = 0; i < width; i++)
		frame[0][i] = '|';
	for(i = 1; i < height-1; i++) {
		frame[i][0] = '-';
		for(j = 1; j < width-1; j++)
			frame[i][j] = ' ';
		frame[i][j] = '-';
	}
	for(i = 0; i < width; i++)
		frame[height-1][i] = '|';
	
	// inner dimension of the box
	frame[1][1] = '\311';
	for(i = 2; i < width-2; i++)
		frame[1][i] = frame[height-2][i] = '\315';
	frame[1][i] = '\273';
	for(i = 2; i < height-2; i++)
		frame[i][1] = frame[i][width-2] = '\272';
	frame[i][1] = '\310';
	frame[i][width-2] = '\274';

	
	// Placing head at random position in start
	srand(time(NULL));
	
	headpositionX = (rand() % (width - 4)) + 4;
	headpositionY = (rand() % (height - 5)) + 2;
	
	frame[headpositionY][headpositionX] = head;
	
	snake.enqueue(headpositionX-2, headpositionY);
	frame[headpositionY][headpositionX-2] = body_part;
	snake.enqueue(headpositionX-1, headpositionY);
	frame[headpositionY][headpositionX-1] = body_part;

	display_map();

	// initializing snake direction to vertical and right
	direction = 0;
	whichward = 0;

	game_over = false;

	Sleep(1000/speed);
}

void add_partbody() { // Add a new body part (this is called when a fruit is eaten)
	control_head();
	
	display_map();

	Sleep(1000/speed);
}

void refresh() { // Updating/refresh the screen to show the next fram
	control_head();

	snake.dequeue(bodypositionX, bodypositionY);
	frame[bodypositionY][bodypositionX] = ' ';
	
	display_map();
	
	Sleep(1000/speed);
}

void create_fruit() {
	fruitpositionX = (rand() % (width - 7)) + 3;
	fruitpositionY = (rand() % (height - 6)) + 3;
	if (frame[fruitpositionY][fruitpositionX] == ' ')  // fruit will not be generated
		frame[fruitpositionY][fruitpositionX] = fruit; // where snake body is
	else create_fruit();
}

void navigate_direction(char dir) {
	if ((dir == 'w' || dir == 'W' || dir == 's' || dir == 'S') && direction == 0) { // Vertical
		if (dir == 'w' || dir == 'W')
				whichward = 0;
		else
			whichward = 1;

		direction = 1;
	}
	else if ((dir == 'a' || dir == 'A' || dir == 'd' || dir == 'D') && direction == 1) { // Horizontal
		if (dir == 'a' || dir == 'A')
			whichward = 1;
		else
			whichward = 0;

		direction = 0;
	}
}

void control_head() {   // Move head (according to its current direction) to its next node
				    //  also add score if head reaches fruit or game over when it reaches wall
	snake.enqueue(headpositionX, headpositionY);
	frame[headpositionY][headpositionX] = body_part;
	
	if (direction == 0 && whichward == 0)
		headpositionX++;
	else if (direction == 0 && whichward == 1)
		headpositionX--;
	else if (direction == 1 && whichward == 0)
		headpositionY--;
	else if (direction == 1 && whichward == 1)
		headpositionY++;

	// if head reaches the fruit
	if (headpositionX == fruitpositionX && headpositionY == fruitpositionY) {
		score++;
		add_partbody();
		create_fruit();
	}

	// if head touch the wall, game over
	if (frame[headpositionY][headpositionX] == '\315'
		|| frame[headpositionY][headpositionX] == '\272'
		|| frame[headpositionY][headpositionX] == body_part)
		game_over = true;
	
	frame[headpositionY][headpositionX] = head;
}
void display_map() { // print the frame
	system("cls");
	for(i = 0; i < height; i++) {
		for(j = 0; j < width; j++) {
				cout << frame[i][j];
			}
		if (i == 3)
			cout << "   Goal: Find and eat the bunnies! ";
		if (i == 4)
			cout << "   To move the snake, use WASD keys ";
		if (i == 5)
			cout << "     		  W";
 		if (i == 6)
			cout << "	        A + D";
		if (i == 7)
			cout << "   	     	  S";
		if (i == 9)
			cout << "   	 Current Score: " << score;
		cout << endl;
	}
}

