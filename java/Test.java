import java.util.Date;

class Person {
	String name;
	String address;
	String phone;
	String email;
	public void setName(String pname) {
		name=pname;
	}
	public String getName() {
		return name;
	}
	public String toString() {
		String className = this.getClass().getSimpleName();
		return className+" "+name; 
	} 
}

class Student extends Person {
	final String []status={"freshman", "sophomore", "junior", "senior"};
	public String toString() {
		String className = this.getClass().getSimpleName();
		return className+" "+name; 
	}
}

class Employee extends Person {
	String office; 
	double salary; 
	Date date_hired;
	public String toString() {
		String className = this.getClass().getSimpleName();
		return className+" "+name;
	}
}

class Faculty extends Employee {
	String office_hours;
	String rank;
	public String toString() {
		String className = this.getClass().getSimpleName();
		return className+" "+name;
	}
}

class Staff extends Employee {
	String title;
	public String toString() {
		String className = this.getClass().getSimpleName();
		return className+" "+name;
	}
}

class MyDate {
	long year;
	int month;
	int day;
}

class Test {
	public static void main(String args[]) {
		Person p=new Person();
		p.setName("Dave");
		Student s=new Student();
		s.setName("Zussman");
		Employee e = new Employee();
		e.setName("Klau Smith");
		Faculty f=new Faculty();
		f.setName("Dr. House");
		Staff st = new Staff();
		st.setName("Prof. Peterson");
		System.out.println(p);
		System.out.println(s);
		System.out.println(e);
		System.out.println(f);
		System.out.println(st);
	}
}
