package Java.ProyectosSuperclass.Mamifero;


public class TestMamifero{
    public static void main(String[] args){
        Gato meow=new Gato("Cleo",4.3,8);
        meow.imprimirG();

        Vaca moo=new Vaca("Lola",557.65,26);
        moo.imprimirV();

        Ballena moby = new Ballena("Moby Dick", 3000.0);
        System.out.println("\nBallena:");
        System.out.println("Nombre: " + moby.getNombre());
        System.out.println("Peso: " + moby.peso);
    }


    
}
