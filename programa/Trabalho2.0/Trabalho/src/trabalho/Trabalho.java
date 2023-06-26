
package trabalho;

import java.util.Scanner;


public class Trabalho {


    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        Agente a1 = new Agente();
        Dono d1 = new Dono();
        Carro c1 = new Carro("");
        Multa m1 = new Multa();
        
        int opcao = 0;
        
        do{
            System.out.println("\n===== SISTEMA DE TRÂNSITO =====\n");
            System.out.println("[1] CADASTRAR\n[2] ATUALIZAR\n[3] REMOVER\n[4] SAIR");
            System.out.print("\nQUAL DAS OPÇÕES DESEJA EXECUTAR? ");
            opcao = ler.nextInt();
            switch(opcao){
                case 1:
                    System.out.println("\n===== CADASTRO =====\n");
                    
                    a1.cadastrar();
                    
                    d1.cadastro();
                    
                    c1.cadastrar(null);
                    
                    m1.cadastrar();
                    
                    break;
                case 2:
                    System.out.println("\n===== ATUALIZAR =====\n");
                    System.out.println("[1] AGENTE\n[2] DONO\n[3] CARRO\n[4] MULTA\n");
                    System.out.print("QUAL DAS OPÇÕES DESEJA ATUALIZAR? ");
                    int escolha = ler.nextInt();
                    if(escolha == 1){
                        a1.atualizar();
                    } else if(escolha == 2){
                        d1.atualizar();
                    } else if(escolha == 3){
                        c1.atualizar();
                    } else if(escolha == 4){
                        m1.atualizar();
                    }else{
                        System.out.println("<<< OPÇÃO INVÁLIDA! NÃO VOU ATUALIZAR. >>>");
                    }
                    
                    break;
                case 3:
                    System.out.println("\n===== REMOVER =====\n");
                    System.out.println("[1] AGENTE\n[2] DONO\n[3] CARRO\n[4] MULTA\n");
                    System.out.print("QUAL DAS OPÇÕES DESEJA REMOVER? ");
                    escolha = ler.nextInt();
                    if(escolha == 1){
                        a1.remover();
                    }else if(escolha == 2){
                        d1.remover();
                    }else if(escolha == 3){
                        c1.remover();
                    }else if(escolha == 4){
                        m1.remover();
                    }else{
                        System.out.println("<<< OPÇÃO INVÁLIDA! NÃO VOU REMOVER. >>>");
                    }
                    
                    break;
                case 4:
                    System.out.println("\n<<<<<<<<<<<<<< SAINDO... >>>>>>>>>>>>>>\n");
                    break;
                default:
                    System.out.println("\n<<< OPÇÃO INVÁLIDA! TENTE NOVAMENTE... >>>\n");
            }
        }while(opcao !=4);
        a1.show();
        d1.show();
        c1.show();
        m1.show();
        
    }
    
}
