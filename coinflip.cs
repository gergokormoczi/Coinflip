using System;

public class Coinflipping
{
    public static void Main(string[] args)
    {
        int times;
        int head = 0;
        int tail = 0;
        int dif = 0;
        int ran;
        Console.WriteLine ("How many times should I flip the coin? ");
        times = Convert.ToInt32(Console.ReadLine());
        Random random = new Random();
        for(int i = 0; i < times;i ++){
            ran = random.Next(2);
            if(ran == 0){
                head++;
            }
            else{
                tail++;
            }
        }
        Console.WriteLine("Number of heads: {0}", head);
        Console.WriteLine("Number of tails: {0}", tail);
        if(head > tail){
            Console.WriteLine("head wins");
            dif = head - tail;
        }
        else if(tail > head){
            Console.WriteLine("tail wins");
            dif = tail - head;
        }
        else{
            Console.WriteLine("draw");
        }
        Console.WriteLine("The difference: {0}", dif);
    }
}