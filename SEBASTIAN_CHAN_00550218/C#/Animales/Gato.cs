using System;
public class Gato : Mamifero
{
    private int nBigotes;
    
    public Gato(string nombre, double peso, int b) : base(nombre, peso)
    {
        this.nBigotes = b;
    }
    
    public void ImprimirG()
    {
        Console.WriteLine("Nombre del gato: " + this.GetNombre());
        Console.WriteLine("Peso: "+ this.peso);
        Console.WriteLine("Numero bigotes: " + this.nBigotes);
    }
}
