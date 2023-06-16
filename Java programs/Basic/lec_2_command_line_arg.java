package Basic;

public class lec_2_command_line_arg {

    public static void main(String[] args) {
        System.out.println("String is: " + args[0]);
        for (int i = 0; i < args.length; i++) {
            System.out.println(args[i]);
        }
    }
}