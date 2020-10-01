import java.util.*;
class Setbits
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count_set_bits = 0;
        while(n>0)
        {
            n = n & (n - 1);
            count_set_bits++;
        }
        System.out.println(count_set_bits);
    }
}