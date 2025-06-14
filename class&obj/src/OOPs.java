class Pen {
    String Color;
    String type;
public void write(){
System.out.println("Write something : ");
}

public void peintColor(){
    System.out.println(this.Color);
}

}

class Student{
    String name;
    int age;

    public void printInfo(){
        System.out.println(this.name);
        System.out.println(this.age);
    }
}



public class OOPs{
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "Alif";
        s1.age = 22;
        s1.printInfo();
    }
}
