public class App {
    public static void main(String[] args) throws Exception {
        StringBuilder str = new StringBuilder("Alif rahman");
        System.out.println("Str = "+str);

        str.append("ASIF");
 str.reverse();
 System.out.println(str);

 str.delete(2, 5);
 System.out.println(str);
    }
}
