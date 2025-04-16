package Java.ProyectosSuperclass.Mamifero;
import javax.swing.JOptionPane;


public class Vaca extends Mamifero{
    private double litrosDeLeche;
    
    public Vaca(String n, double p, double l){
        super(n,p);
        this.litrosDeLeche=l;
    }

    public void imprimirV(){
        JOptionPane.showMessageDialog(null,"Nombre de la vaca: " + this.getNombre()+
        "\nPeso: " + this.peso +
        "\nLitros de leche: "+this.litrosDeLeche);
    }
    
}
