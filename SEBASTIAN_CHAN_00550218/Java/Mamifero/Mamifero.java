package Java.ProyectosSuperclass.Mamifero;


public class Mamifero {
    private String nombre;
    protected double peso;
    
    public Mamifero(String nombre, double peso){
        this.nombre=nombre;
        this.peso=peso;
    }
    
    public void setNombre(String nombre){
        this.nombre=nombre;
    }
    public String getNombre(){
        return this.nombre;
    }
            
    
}
