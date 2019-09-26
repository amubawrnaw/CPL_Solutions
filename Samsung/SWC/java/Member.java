public class Member{
	Member parent;
	List children;
	String name;
	int id;
	int date;
	int points;
	public Member(String n, int i, int d, int p, Member m){
		parent = m;
		name = n;
		id = i;
		date = d;
		points = p;
		children = new List();
	}

	public void insertSibling(Member m){
		
	}
}