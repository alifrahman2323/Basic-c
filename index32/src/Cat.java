public class Cat {
    private String name;
    private int age;

    public Cat(){
        this.name = "Pussy";
        this.age = 0;
    }
    public String getname() {
        return name;
    }
    public int getAge() {
        return age;

    }

    public static void main(String[] args) throws Exception {
        Cat myCat = new Cat();
        System.out.println("Cat Name : "+myCat.getname());
        System.out.println("Cat age : "+myCat.getAge());
    }
}

