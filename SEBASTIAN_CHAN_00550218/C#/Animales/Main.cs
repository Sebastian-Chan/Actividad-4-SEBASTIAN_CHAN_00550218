using System;

public class MainClass
{
    public static void Main(string[] args)
    {
        Gato meow = new Gato("Cleo", 4.3, 8);
        meow.ImprimirG();

        Vaca moo = new Vaca("Lola", 557.65, 26);
        moo.ImprimirV();

        Ballena moby = new Ballena("Moby Dick", 3000.0);
        Console.WriteLine("\nBallena:");
        Console.WriteLine("Nombre: " + moby.GetNombre());
        Console.WriteLine("Peso: " + moby.GetPeso());
    }
}