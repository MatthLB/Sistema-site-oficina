
package trabalho;

import java.util.Scanner;


public class Multa {
    private int codigo;
    private String descricao;
    private float valor;
    
    public void cadastrar(){
        Scanner leitura = new Scanner(System.in);
        System.out.println("\n\n=== MULTA ===\n");
        System.out.print("INFORME O CÓDIGO DA MULTA: ");
        int codigo = leitura.nextInt();
        System.out.print("IFORME A DESCRIÇÃO DA MULTA: ");
        String erro4 = leitura.nextLine();
        String descricao = leitura.nextLine();
        System.out.print("INFORME O VALOR DA MULTA: R$ ");
        float valor = leitura.nextFloat();
        this.setCodigo(codigo);
        this.setDescricao(descricao);
        this.setValor(valor);
        System.out.println("------------------------------");
        System.out.println("MULTA CADASTRADA COM SUCESSO!");
        System.out.println("------------------------------");
    }
    
    public void atualizar(){
        Scanner leitura = new Scanner(System.in);
        System.out.println("\n\n=== MULTA ===\n");
        System.out.print("INFORME O CÓDIGO DA MULTA: ");
        int codigo = leitura.nextInt();
        System.out.print("IFORME A DESCRIÇÃO DA MULTA: ");
        String erro = leitura.nextLine();
        String descricao = leitura.nextLine();
        System.out.print("INFORME O VALOR DA MULTA: R$ ");
        float valor = leitura.nextFloat();
        this.setCodigo(codigo);
        this.setDescricao(descricao);
        this.setValor(valor);
        System.out.println("------------------------------");
        System.out.println("MULTA ATUALIZADA COM SUCESSO!");
        System.out.println("------------------------------");
    }
    
    public void remover(){
        this.setCodigo(0);
        this.setDescricao("VAZIA");
        this.setValor(0f);
        System.out.println("------------------------------");
        System.out.println("MULTA REMOVIDA COM SUCESSO!");
        System.out.println("------------------------------");
    }
    
    public void show(){
        System.out.println("");
        System.out.println("===========================================");
        System.out.println("");
        System.out.println("CÓDIGO DA MULTA: "+this.getCodigo());
        System.out.println("DESCRIÇÃO DA MULTA: "+this.getDescricao());
        System.out.println("VALOR DA MULTA: "+this.getValor());
        System.out.println("");
    }
    
    
    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public float getValor() {
        return valor;
    }

    public void setValor(float valor) {
        this.valor = valor;
    }
    
    
}
