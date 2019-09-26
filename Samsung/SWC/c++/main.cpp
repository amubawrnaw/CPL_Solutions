#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <stdio.h>

#define ADD 1
#define EDIT 2
#define DELETE 3
#define GET_TOTAL 4
#define SEARCH 5

#define TYPE_NAME 0
#define TYPE_DATE 1

using namespace std;

extern void init();
extern int addMember(int id_Number, char name[100], int head_id, char date_joined[100], int points);
extern int editMember(int id_number, char name[100], int head_id, int points);
extern int deleteMember(int id_number);
extern int getTotalPoints(int id_number);
extern int search(int search_type, char name[100]);

int run() {
	int score = 0;
	int num_apis, api_number;
	int result, check_sum;
	int a;

	cin >> num_apis;

	// Read each APi
	for (a = 1; a <= num_apis; a++) {
		// Read API to execute
		cin >> api_number;

		// Result variables for APIs that returns a result
		result = 0;

		// Read the parameters for each API (If there are any)
		// Execute the API
		// Store the result then compare to expected result
		int id, head_id, points;
		char name[100], year[100], value[100];
		int type;

		cin >> id;
		switch (api_number) {
		case ADD:
			cin >> name >> head_id >> year >> points;
			result = addMember(id, name, head_id, year, points);
			break;
		case EDIT:
			cin >> name >> head_id >> points;
			result = editMember(id, name, head_id, points);
			break;
		case DELETE:
			result = deleteMember(id);
			break;
		case GET_TOTAL:
			result = getTotalPoints(id);
			break;
		case SEARCH:
			type = id;
			cin >> value;
			result = search(id, value);
			break;
		default:
			break;
		}

		// Check the result against the expected result
		cin >> check_sum;
		if (check_sum == result) {
			score++;
		}
	}

	return score;
}

int main(void) {
	int num_test_case;	// Total number of test cases
	int score = 0;			// The score for each test case
	int total_score = 0;	// The total score after executing all test cases

	freopen("sample_input.txt", "r", stdin);

	cin >> num_test_case;
	clock_t TOTAL_TIME = 0;

	//Run each test case
	for (int test_case = 1; test_case <= num_test_case; test_case++) {
		// Run init per test case
		clock_t TIME = clock();
		init();

		// Add the score per test case to the total score
		score = run();
		TIME = (clock() - TIME) / (CLOCKS_PER_SEC / 1000);
		TOTAL_TIME += TIME;
		total_score += score;

		// Print the score after executing the APIs
		// Score must be equal to num_apis to be considered perfect
		cout << "#" << test_case << " " << total_score << endl;
	}
	cout << "execution_time:" << TOTAL_TIME << endl;
	cout << "Total Score: " << total_score << endl;

	return 0;
}