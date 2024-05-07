import java.util.Scanner;


public class BuscaSequencial {

    public static void busca(int[] array, int tamanho, int numero){
        for(int i = 0; i < tamanho; i++) {
            if(numero == array[i]) {
              System.out.print("O número " + numero + " está presente na posição " + (i+1) + " do array.");
            }
            else{
                System.out.print("O número " + numero +" não está presente no array.");
            }
        }
    }
    public static void main(String[] args){
        int[] array = {5, 1, 39, 28, 104, 90, 80, -39};
        int tamanho = array.length;
        
        Scanner input = new Scanner(System.in);
        System.out.print("Digite o número que deseja encontrar no array " + array + "");
        int numero = input.nextInt();

        busca(array, tamanho, numero);
    }
}