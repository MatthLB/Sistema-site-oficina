
package trabalho;

import java.util.Scanner;

public class Agente {
    private String nome;
    private String cpf;
    private int idade;

    public void cadastrar(){
        Scanner leitura = new Scanner(System.in);
        System.out.println("\n=== AGENTE ===\n");
        System.out.print("INFORME O NOME DO AGENTE: ");
        String nome = leitura.nextLine();
        System.out.print("IFORME O CPF DO AGENTE: ");
        String cpf = leitura.next();
        System.out.print("INFORME A IDADE DO AGENTE: ");
        int idade = leitura.nextInt();          
        this.setNome(nome);
        this.setCpf(cpf);
        this.setIdade(idade);
        System.out.println("------------------------------");
        System.out.println("AGENTE CADASTRADO COM SUCESSO!");
        System.out.println("------------------------------");
       
    }
    
    public void atualizar(){
        Scanner leitura = new Scanner(System.in);
        System.out.println("\n=== AGENTE ===\n");
        System.out.print("INFORME O NOME DO NOVO AGENTE: ");
        String nome = leitura.nextLine();
        System.out.print("INFORME O CPF DO NOVO AGENTE: ");
        String cpf = leitura.next();
        System.out.print("INFORME A IDADE DO NOVO AGENTE: ");
        int idade = leitura.nextInt();
        this.setNome(nome);
        this.setCpf(cpf);
        this.setIdade(idade);
        System.out.println("------------------------------");
        System.out.println("AGENTE ATUALIZADO COM SUCESSO!");
        System.out.println("------------------------------");
    }
    
    public void remover(){
        this.setNome("INDEFINIDO!");
        this.setCpf("INEXISTENTE!");
        this.setIdade(0);
        System.out.println("----------------------------");
        System.out.println("AGENTE REMOVIDO COM SUCESSO!");
        System.out.println("----------------------------");
    }
    
    public void show(){
        System.out.println("");
        System.out.println("");
        System.out.println("NOME DO AGENTE: "+this.getNome());
        System.out.println("CPF DO AGENTE: "+this.getCpf());
        System.out.println("IDADE DO AGENTE: "+this.getIdade());
        System.out.println("");
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    
    
   
}
