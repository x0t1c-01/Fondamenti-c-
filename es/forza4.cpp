#include<iostream>

using namespace std;

bool control(int mat[][100],int Bsize,int giocatore){
    int cont=0;
    for(int i=0;i<Bsize;++i){
    for(int j=0;j<Bsize;++j){
        if(c4Board[i][j].getbState()==p){  							// controllo veritcale
            if(i+3<Bsize){
                if((c4Board[i+1][j].getbState() == p)&&(c4Board[i+2][j].getbState() == p )&&(c4Board[i+3][j].getbState() == p)){
                    if(p==1)
                        return true;
                    else
                        return false;
                }
            }
            if(j+3<Bsize){ 											// controllo orizzontale
                if((c4Board[i][j+1].getbState() == p)&& (c4Board[i][j+2].getbState() == p)&&(c4Board[i][j+3].getbState() == p)){
                    if(p==1)
                        return true;
                    else
                        return false;
                }
            }
            if((i<Bsize-3)&&(j<Bsize-3)){							// controllo diagonale da sinistra a destra
                if((c4Board[i+1][j+1].getbState()==p)&&(c4Board[i+2][j+2].getbState() ==p)&&(c4Board[i+3][j+3].getbState() == p)){
                    if(p==1)
                        return true;
                    else
                        return false;
                }
            }
            if((i<Bsize-3)&&(j-3>=0)) {								 // controllo diagonale da destra a sinistra
                if((c4Board[i+1][j-1].getbState() == p)&&(c4Board[i+2][j-2].getbState() == p )&&(c4Board[i+3][j-3].getbState() == p)){
                    if(p==1)
                        winnerFrame(1);
                    else
                        return false;
                }
            }
        }
    }
}
    return false;

}

void inserisci(int mat[][100],int r,int c,int colonna,int giocatore){
    bool cond=false;
    for(int i=r-1;i>=0;i--){
        if(mat[i][colonna]==0){
            mat[i][colonna]=giocatore;
            cond=true;
        }
        if(cond)
            break;
    }
        if(!cond)
            cout<<"COLONNA PIENA, INSERISCI UN'ALTRO NUMERO"<<endl;
}

bool piena(int mat[][100],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]==0)
                return false;
        }
    }
    return true;
}

int main(){
int mat[100][100]={0};
int colonna;
int r,c;
cin>>r>>c;
bool cond1=false,cond2=false,piena=false,turno=true;
int giocatore1=1,giocatore2=2;
    while(!cond1&&!cond2&&!piena){
        cout<<endl<<"INSERISCI NUMERO COLONNA"<<endl;
        cin>>colonna;
        if(turno){
            if(!piena){
            inserisci(mat,r,c,colonna,giocatore1);
            if(control(mat,c,giocatore1))
                cond1=true;
            turno=false;
        }
        }
        else{
            if(!piena){
            inserisci(mat,r,c,colonna,giocatore2);
            if(control(mat,c,giocatore2))
                cond2=true;
            turno=true;
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<mat[i][j]<<"  ";
            }
            cout<<endl<<endl;
        }
    }
    if(piena)
        cout<<"PAREGGIO";
    if(cond1)
        cout<<"HA VINTO IL GIOCATORE 1";
    if(cond2)
        cout<<"HA VINTO IL GIOCATORE 2";

    return 0;
}
