public class List{
	class MemberLink{
		Member m, front, back;
		public MemberLink(Member m){
			front = null;
			back = m.parent;
		}
		public boolean isNull(){
			return (m == null);
		}
	}

	MemberLink first;
	public List(){
		this(new MemberLink(null));
	}
	public List(MemberLink m){
		first = m;
	}
	public void add(Member m){
		MemberLink temp = first;
		while(!temp.isNull()){
			temp = temp.front;
		}
		temp = m;
	}
	public Member getBest(){


	}
}