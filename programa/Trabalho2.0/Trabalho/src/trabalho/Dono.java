
package trabalho;

import java.util.Scanner;


public class Dono {
    private String nome;
    private String cpf;
    private int idade;
    
    public void cadastro(){
        Scanner leitura = new Scanner(System.in);
        System.out.println("\n=== DONO ===\n");
        System.out.print("INFORME O NOME DO DONO DO CARRO: ");
        //String erro2 = ler.nextLine();
        String nome = leitura.nextLine();
        System.out.print("IFORME O CPF DO DONO DO CARRO: ");
        String cpf = leitura.next();
        System.out.print("INFORME A IDADE DO DONO DO CARRO: ");
        int idade = leitura.nextInt();
        this.setNome(nome);
        this.setCpf(cpf);
        this.setIdade(idade);
        System.out.println("------------------------------");
        System.out.println("DONO CADASTRADO COM SUCESSO!");
        System.out.println("------------------------------");
    }
    public void atualizar(){
        Scanner leitura = new Scanner(System.in);
        System.out.println("\n=== DONO ===\n");
        System.out.print("INFORME O NOME DO DONO DO CARRO: ");
        String nome = leitura.nextLine();
        System.out.print("IFORME O CPF DO DONO DO CARRO: ");
        String cpf = leitura.next();
        System.out.print("INFORME A IDADE DO DONO DO CARRO: ");
        int idade = leitura.nextInt();
        this.setNome(nome);
        this.setCpf(cpf);
        this.setIdade(idade);
        System.out.println("------------------------------");
        System.out.println("DONO ATUALIZADO COM SUCESSO!");
        System.out.println("------------------------------");
    }
    public void remover(){
        this.setNome("INDEFINIDO!");
        this.setCpf("INEXISTENTE!");
        this.setIdade(0);
    }
    
    
    public void show(){
        System.out.println("");
        System.out.println("===========================================");
        System.out.println("");
        System.out.println("NOME DO DONO DO CARRO: "+this.getNome());
        System.out.println("CPF DO DONO DO CARRO: "+this.getCpf());
        System.out.println("IDADE DO DONO DO CARRO: "+this.getIdade());
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
