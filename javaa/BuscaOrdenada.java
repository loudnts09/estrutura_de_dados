import java.util.Scanner;

public class BuscaOrdenada {

    public static void burbleSort(int[] array, int tamanho){
        int aux;
        for(int i = 0; i < tamanho; i++){
            for(int j = 0; j < tamanho - 1; j++){
                if(array[j] > array[j+1]){
                    aux = array[j+1];
                    array[j+1] = array[j];
                    array[j] = aux;
                }
            }
        }
    }


    public static void busca(int[] array, int tamanho, int numero){
        boolean encontrado = false;

        for(int i = 0; i < tamanho; i++){
            if(numero == array[i]){
                if(numero == array[0]){
                    System.out.println("O número " + numero + " está presente na posição 0 do array.");
                }
                else{
                    System.out.println("O número " + numero + " está presente na posição " + (i) + " do array. Onde possui o número " + array[0] + " na posição 0.");      
                }
            encontrado = true;
            }
        }
        if(encontrado == false){
            System.out.println("O número " + numero +" não está presente no array.");
        }
    }

    public static void main(String[] args){
        int[] array = {5, 1, 39, 28, 104, 90, 80, -39};
        int tamanho = array.length;

        burbleSort(array, tamanho);

        Scanner input = new Scanner(System.in);
        System.out.print("Digite o número que deseja encontrar no array ");
        for(int i = 0; i < tamanho; i++){
            if(i == 0){
                System.out.print("[");
            }
            System.out.print(array[i]);

            if(i < tamanho - 1){
                System.out.print(", ");
            }
            else if(i == tamanho - 1){
                System.out.print("]: ");
            }
        }
        int numero = input.nextInt();
        
        busca(array, tamanho, numero);
    }
}
