
package trabalho;

import java.util.Scanner;


public class Carro {
    private String placa;
    private String marca;
    private float quilometragem;

    public Carro(String placa) {
        this.placa = placa;
    }
      
    public void cadastrar(String placa){
        Scanner leitura = new Scanner(System.in);
        System.out.println("\n=== CARRO ===\n");
        System.out.print("INFORME A PLACA DO CARRO: ");
        placa = leitura.nextLine().replaceAll(" ","");
        this.setPlaca(placa);
        while("".equals(placa)){
            System.out.println("<<< ERRO: VOCÊ NÃO DIGITOU A PLACA DO CARRO! >>>\n<<< TENTE NOVAMENTE... >>>");
            System.out.print("INFORME A PLACA DO CARRO: ");
            placa = leitura.nextLine().replaceAll(" ", "");
            this.setPlaca(placa);
        }
        System.out.print("IFORME A MARCA DO CARRO: ");
        String marca = leitura.next();
        System.out.print("INFORME A QUILOMETRAGEM DO CARRO: KM ");
        float quilometragem = leitura.nextFloat();
        this.setMarca(marca);
        this.setQuilometragem(quilometragem);
        System.out.println("------------------------------");
        System.out.println("CARRO CADASTRADO COM SUCESSO!");
        System.out.println("------------------------------");
    }
    
    public void atualizar(){
        Scanner leitura = new Scanner(System.in);
        System.out.println("\n=== CARRO ===\n");
        System.out.print("INFORME A PLACA DO CARRO: ");
        placa = leitura.nextLine().replaceAll(" ","");
        this.setPlaca(placa);
        while("".equals(placa)){
            System.out.println("<<< ERRO: VOCÊ NÃO DIGITOU A PLACA DO CARRO! >>>\n<<< TENTE NOVAMENTE... >>>");
            System.out.print("INFORME A PLACA DO CARRO: ");
            placa = leitura.nextLine().replaceAll(" ", "");
            this.setPlaca(placa);
        }
        System.out.print("IFORME A MARCA DO CARRO: ");
        String marca = leitura.next();
        System.out.print("INFORME A QUILOMETRAGEM DO CARRO: KM ");
        float quilometragem = leitura.nextFloat();
        this.setMarca(marca);
        this.setQuilometragem(quilometragem);
        System.out.println("------------------------------");
        System.out.println("CARRO ATUALIZADO COM SUCESSO!");
        System.out.println("------------------------------");
    }
    
    public void remover(){
        this.setPlaca("SEM PLACA!");
        this.setMarca("NULA");
        this.setQuilometragem(0f);
        System.out.println("------------------------------");
        System.out.println("CARRO REMOVIDO COM SUCESSO!");
        System.out.println("------------------------------");
    }
    
    public void show(){
        System.out.println("");
        System.out.println("===========================================");
        System.out.println("");
        System.out.println("PLACA DO CARRO: "+this.getPlaca());
        System.out.println("MARCA DO CARRO: "+this.getMarca());
        System.out.println("QUILOMETRAGEM DO CARRO: "+this.getQuilometragem());
        System.out.println("");
    }
    
    public String getPlaca() {
        return placa;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public float getQuilometragem() {
        return quilometragem;
    }

    public void setQuilometragem(float quilometragem) {
        this.quilometragem = quilometragem;
    }
    
    
}
