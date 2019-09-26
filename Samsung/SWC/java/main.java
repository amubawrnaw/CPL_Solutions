import java.io.FileInputStream;
import java.util.Scanner;

public class main {
	static long totalTime = 0;
	private static final int API_ADD = 1;
    private static final int API_EDIT = 2;
    private static final int API_DELETE = 3;
    private static final int API_GETTOTAL = 4;
    private static final int API_SEARCH = 5;
    
    public static final int TYPE_NAME = 0;
    public static final int TYPE_DATE = 1;

    private static Scanner sc;
    private static mysolution userSolution;

    private static int run() {
		int score = 0;
		int numAPIs, apiNumber;
		int result, checkSum;
		int a, argument;

        numAPIs = sc.nextInt();

        // Read each API
        for (a = 1; a <= numAPIs; a++) {
            // Read API to execute
            apiNumber = sc.nextInt();

            // Result variables for APIs that returns a result
            result = 0;

            // Read the parameters for each API (If there is any)
            // Execute the API in UserSolution
            // Store the result then compare to expected result
            int id;
            String name;
            int headId;
            String year;
            int points;
            switch (apiNumber) {
            case API_ADD:
                id = sc.nextInt();
                name = sc.next();
                headId = sc.nextInt();
                year = sc.next();
                points = sc.nextInt();
                result = userSolution.addMember(id, name, headId, year, points);
                break;
            case API_EDIT:
                id = sc.nextInt();
                name = sc.next();
                headId = sc.nextInt();
                points = sc.nextInt();
                result = userSolution.editMember(id, name, headId, points);
                break;
            case API_DELETE:
                id = sc.nextInt();
                result = userSolution.deleteMember(id);
                break;
            case API_GETTOTAL:
            	id = sc.nextInt();
                result = userSolution.getTotalPoints(id);
                break;
            case API_SEARCH:
            	int type = sc.nextInt();
            	String value = sc.next();
            	result = userSolution.search(type, value);
            default:
                // No API with this integer equivalent exists
                break;
            }

            // Check the result against the expected result
            int checksum = sc.nextInt();
            //System.out.println("result " + result + " checksum " +checksum);
            if (checksum == result) {
           	//System.out.println("result " + result +   "correct ");
                score++;
            }
        }

        return score;
    }

    public static void main(String args[]) throws Exception {
	    int totalScore = 0; // The total score after executing all test cases
	    int score = 0; // The score for each test case
		int numTestCases = 0; // The total number of test cases

        System.setIn(new FileInputStream("sample_input.txt"));
        sc = new Scanner(System.in);
        userSolution = new mysolution();

        numTestCases = sc.nextInt();

        // Run each test case
        for (int t = 1; t <= numTestCases; t++) {
		    // Run init per test case
			long time = System.currentTimeMillis();
            userSolution.init();

            // Add the score per test case to the total score
            score = run();
            totalScore += score;
			time = (System.currentTimeMillis() - time);
			totalTime += time; 

            // Print the score after executing the APIs
            // Score must be equal to numAPIs to be considered perfect
            System.out.println("#" + t + " " + score);
        }
		System.out.println("execution_time:" + totalTime);
		System.out.println("Total Score: " + totalScore);
        sc.close();
		
    }

}
