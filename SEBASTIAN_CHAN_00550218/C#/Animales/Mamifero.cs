using System;
public class Mamifero
{
    private string nombre;
    protected double peso;
    
    public Mamifero(string nombre, double peso)
    {
        this.nombre = nombre;
        this.peso = peso;
    }
    
    public void SetNombre(string nombre)
    {
        this.nombre = nombre;
    }
    
    public string GetNombre()
    {
        return this.nombre;
    }
    public void SetPeso(double peso){
        this.peso=peso;
    }
    public double GetPeso(){
        return this.peso;
    }
}


