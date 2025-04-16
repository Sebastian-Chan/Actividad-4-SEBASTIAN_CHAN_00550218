using System.Windows.Forms;
using System;

public class Vaca : Mamifero
{
    private double litrosDeLeche;
    
    public Vaca(string n, double p, double l) : base(n, p)
    {
        this.litrosDeLeche = l;
    }

    public void ImprimirV()
    {
        MessageBox.Show("Nombre de la vaca: " + this.GetNombre() +
        "\nPeso: " + this.peso +
        "\nLitros de leche: "+ this.litrosDeLeche);
    }
}