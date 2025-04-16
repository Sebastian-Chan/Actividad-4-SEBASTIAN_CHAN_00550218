package Java.ProyectosSuperclass.Mamifero;


public class Gato extends Mamifero {
    private int nBigotes;
    
    
    
    public Gato(String nombre, double peso, int b){
        super(nombre,peso);
        this.nBigotes=b;
        
    }
    
    public void imprimirG(){
        System.out.println("Nombre del gato: " + this.getNombre());
        System.out.println("Peso: "+this.peso);
        System.out.println("Numero bigotes: " + this.nBigotes);
    }
    
}
