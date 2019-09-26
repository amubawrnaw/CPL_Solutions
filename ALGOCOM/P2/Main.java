import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;

import static java.util.stream.Collectors.*;
import static java.util.Map.Entry.*;

public class Main{
	public static void analyze (String input) {
		//put your code here and the print statements for the output.
		char[] uppercase = input.toUpperCase().toCharArray();
		Map<Character, Integer> hmap = new HashMap<Character, Integer>();
		char[] alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
		for (int i = 0; i < 26; i++) {
			hmap.put(alphabet[i], 0);
		}
		char c;
		int index;
		for(int i = 0; i < uppercase.length; i++) {
			c = uppercase[i];
			
			if (hmap.containsKey(c)) {
				hmap.put(c,hmap.get(c)+1);
			}
		}
		Map<Character, Integer> sortMap = hmap
		        .entrySet()
		        .stream()
		        .sorted(Collections.reverseOrder(Map.Entry.comparingByValue()))
		        .collect(toMap(Map.Entry::getKey, Map.Entry::getValue, (e1, e2) -> e2,LinkedHashMap::new));
		        sortMap.entrySet().forEach(entry->{
		        	System.out.println(entry.getKey() + " " + entry.getValue());  
		 });
	}
	public static void countSwaps (int length, int[] carriageNumbers) {
		//put your code here and the print statements for the output.
		int swapCount = 0;
		int temp;
		boolean swap = false;
		while(!swap){
			swap = true;
			for(int i = 0 ; i < length - 1 ; i++){
				if(carriageNumbers[i] > carriageNumbers[i+1]){
					swap = false;
					swapCount++;

					temp = carriageNumbers[i];
					carriageNumbers[i] = carriageNumbers[i+1];
					carriageNumbers[i+1] = temp;
				}
			}
		}
		
		System.out.println("The most optimal train swaps: " + swapCount);
	}

	public static void checkHarvest (int numVillages, int costToFeed, int[] harvests) {
		//put your code here and the print statements for the output.
		long fud = 0;
		for(int i = 0 ; i < harvests.length; i++){
			fud += harvests[i];
		}
		long food = numVillages * costToFeed;
		String ans = "";
		if(food == fud){
			ans = "JUST ENOUGH FOR EVERYONE";
		}else if(food > fud){
			ans = "NOT ENOUGH FOOD";
		}else{
			ans = "PARTY!";
		}
		System.out.println(ans);
	}
	public static StringBuilder sb_comb = new StringBuilder();
	public static void combRecurse(int[] options, int[] curr, int cmax, int currind, int curropt){
		if(currind == cmax){
			for(int i = 0 ; i < cmax ; i++){
				sb_comb.append(curr[i] + " ");
			}
			sb_comb.append("\n");
		}else if(curropt < options.length){
			curr[currind] = options[curropt];
			combRecurse(options, curr, cmax, currind+1, curropt+1);
			combRecurse(options, curr, cmax, currind, curropt+1);
		}
	}

	public static void printCombination (int N, int K) {
		//put your code here and the print statements for the output.
		int[] arr = new int[N];
		for(int i = 1 ; i <= N ;i++){
			arr[i-1] = i;
		}
		combRecurse(arr, new int[K], K, 0, 0);
		System.out.println(sb_comb.toString());
	}
	public static void main(String[] args){
		/*
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		int[] arr = new int[n];
		for(i = 0 ; i < n ; i++){
			arr[i] = sc.nextInt();
		}
		checkHarvest(n,m,arr);
		
		
		long startTime = System.nanoTime();
		//20c10 is worst case i think
		printCombination(20, 10);
		countSwaps(4, new int[]{4,3,2,1});
		countSwaps(2, new int[]{2,1});
		countSwaps(4, new int[]{1,2,4,3});
		
		int[] worsecase = new int[10000];
		for(int i = 10000, j = 0 ; i > 0 ; i--, j++){
			worsecase[j] = i;
		}
		countSwaps(10000, worsecase);
		

		analyze("GUACAMOLE ABCDEFGHIJKLMNOPQRSTUVWXYZABARLMKAWEAJGUACAMOLE ABCDEFGHIJKLMNOPQRSTUVWXYZABARLMKAWEAJGUACAMOLE ABCDEFGHIJKLMNOPQRSTUVWXYZABARLMKAWEAJGUACAMOLE ABCDEFGHIJKLMNOPQRSTUVWXYZABARLMKAWEAJGUACAMOLE ABCDEFGHIJKLMNOPQRSTUVWXYZABARLMKAWEAJGUACAMOLE ABCDEFGHIJKLMNOPQRSTUVWXYZABARLMKAWEAJGUACAMOLE ABCDEFGHIJKLMNOPQRSTUVWXYZABARLMKAWEAJGUACAMOLE ABCDEFGHIJKLMNOPQRSTUVWXYZABARLMKAWEAJGUACAMOLE ABCDEFGHIJKLMNOPQRSTUVWXYZABARLMKAWEAJGUACAMOLE ABCDEFGHIJKLMNOPQRSTUVWXYZABARLMKAWEAJ");
		long endTime = System.nanoTime();
		System.out.println((endTime - startTime)/1000000 + "ms");
		*/
		analyze("NIGGA");
	}
}
