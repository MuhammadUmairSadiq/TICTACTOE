#include<iostream>
using namespace std;

int  main() {
	int const SIZE = 9, RANGE = 20;
	char NamePlayer1[RANGE]= "",NamePlayer2[RANGE]= "";
	int Player1,Player2,count=0,Scope=0,i=0;
	int Player1GamesWins=0,Player1GamesLoss=0,Player1GamesDraw=0,Player1GamesWinsStreak=0;
	int Player2GamesWins=0,Player2GamesLoss=0,Player2GamesDraw=0,Player2GamesWinsStreak=0;
	
	cout<<"Enter the Name of Player 1:";
	cin>>NamePlayer1;
	cout<<"Enter the Name of Player 2:";
	cin>>NamePlayer2;
	
	do {
	char arr[SIZE]={'1','2','3','4','5','6','7','8','9'};
	
	cout<<"      Welcome! This is TIC TAC TOE Game."<<endl;
	cout<<endl;
	cout<<NamePlayer1<<"[O]"<<endl;
	cout<<NamePlayer2<<"[X]"<<endl;
	cout<<endl;
	
	cout<< "         |        |        "<<endl;
	cout<< "    "<<arr[0]<<"    |    "<<arr[1]<<"   |    "<<arr[2]<<"   "<<endl;
	cout<< "   ______|________|________"<<endl;
	cout<< "         |        |        "<<endl;
	cout<< "    "<<arr[3]<<"    |    "<<arr[4]<<"   |    "<<arr[5]<<"   "<<endl;		
	cout<< "   ______|________|________"<<endl;
	cout<< "         |        |        "<<endl;
	cout<< "    "<<arr[6]<<"    |    "<<arr[7]<<"   |    "<<arr[8]<<"   "<<endl;
	cout<< "         |        |        "<<endl;

	for(int i=0;i<10;i++) {
			if(i%2==0) {
	    cout<<"Turn of "<< NamePlayer1 <<" [O]:";
		cin>>Player1;
	 	if (Player1 == 1 && arr[0] == '1') { arr[0] = 'O'; }
       		else if (Player1 == 2 && arr[1] == '2') {  arr[1] = 'O'; }
        	else if (Player1 == 3 && arr[2] == '3') {  arr[2] = 'O'; }
        	else if (Player1 == 4 && arr[3] == '4') {  arr[3] = 'O'; }
        	else if (Player1 == 5 && arr[4] == '5') {  arr[4] = 'O'; } 
			else if (Player1 == 6 && arr[5] == '6') {  arr[5] = 'O'; }
        	else if (Player1 == 7 && arr[6] == '7') {  arr[6] = 'O'; }
        	else if (Player1 == 8 && arr[7] == '8') {  arr[7] = 'O'; }
        	else if (Player1 == 9 && arr[8] == '9') {  arr[8] = 'O'; }
        	else {
            cout << "Invalid move.Try Again!";
            i--;
        }
        
		if(arr[0]==arr[1] && arr[0]==arr[2] && arr[0]==arr[2]) {
		        cout<<"Congratulations!"<<NamePlayer1<<" won the game."<<endl;
		        cout<<"Games Win By Player 1: " << Player1GamesWins++ <<endl;
		        cout<<"Games Loss By Player 1: " << Player2GamesLoss++ <<endl;
				cout<<"Games Win Streak By Player 1: " << Player1GamesWinsStreak++ <<endl;
				count=0;
				break;
		    }
	    else if(arr[3]==arr[4] && arr[3]==arr[5] && arr[3]==arr[5]) {
		        cout<<"Congratulations!"<<NamePlayer1<<" won the game."<<endl;
		        cout<<"Games Loss By Player 1: " << Player1GamesLoss++ <<endl;
		        cout<<"Games Win By Player 1: " << Player2GamesWins++ <<endl;
				cout<<"Games Win Streak By Player 1: " << Player1GamesWinsStreak++ <<endl;
				count=0;
				break;
		    }
	        else if(arr[6]==arr[7] && arr[6]==arr[8] && arr[6]==arr[8]) {
		        cout<<"Congratulations!"<<NamePlayer1<<" won the game."<<endl;
		        cout<<"Games Win By Player 1: " << Player1GamesWins+1 <<endl;
		        cout<<"Games Loss By Player 1: " << Player2GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 1: " << Player1GamesWinsStreak+1 <<endl;
				count=0;
				break;
		    }
	        else if(arr[0]==arr[3] && arr[0]==arr[6] && arr[0]==arr[6]) {
		        cout<<"Congratulations!"<<NamePlayer1<<" won the game."<<endl;
		        cout<<"Games Win By Player 1: " << Player1GamesWins+1 <<endl;
		        cout<<"Games Loss By Player 1: " << Player2GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 1: " << Player1GamesWinsStreak+1 <<endl;
				count=0;
				break;
		    }
	        else if(arr[1]==arr[4] && arr[1]==arr[7] && arr[1]==arr[7]) {
		        cout<<"Congratulations!"<<NamePlayer1<<" won the game."<<endl;
		        cout<<"Games Win By Player 1: " << Player1GamesWins+1 <<endl;
		        cout<<"Games Loss By Player 1: " << Player2GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 1: " << Player1GamesWinsStreak+1 <<endl;
				count=0;
				break;
		    }
	        else if(arr[2]==arr[5] && arr[2]==arr[8] && arr[2]==arr[8]) {
		        cout<<"Congratulations!"<<NamePlayer1<<" won the game."<<endl;
		        cout<<"Games Win By Player 1: " << Player1GamesWins+1 <<endl;
		        cout<<"Games Loss By Player 1: " << Player2GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 1: " << Player1GamesWinsStreak+1 <<endl;
				count=0;
				break;
		    }
	        else if(arr[0]==arr[4] && arr[0]==arr[8] && arr[0]==arr[8]) {
		        cout<<"Congratulations!"<<NamePlayer1<<" won the game."<<endl;
		        cout<<"Games Win By Player 1: " << Player1GamesWins+1 <<endl;
		        cout<<"Games Loss By Player 1: " << Player2GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 1: " << Player1GamesWinsStreak+1 <<endl;
				count=0;
				break;	
		    }
	        else if(arr[2]==arr[4] && arr[2]==arr[6] && arr[2]==arr[6]) {
		        cout<<"Congratulations!"<<NamePlayer1<<" won the game."<<endl;
		        cout<<"Games Win By Player 1: " << Player1GamesWins+1 <<endl;
		        cout<<"Games Loss By Player 1: " << Player2GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 1: " << Player1GamesWinsStreak+1 <<endl;
				count=0;
				break;		
		    }
		    else { count=1; } 
    cout<< "         |        |        "<<endl;
	cout<< "    "<<arr[0]<<"    |    "<<arr[1]<<"   |    "<<arr[2]<<"   "<<endl;
	cout<< "   ______|________|________"<<endl;
	cout<< "         |        |        "<<endl;
	cout<< "    "<<arr[3]<<"    |    "<<arr[4]<<"   |    "<<arr[5]<<"   "<<endl;		
	cout<< "   ______|________|________"<<endl;
	cout<< "         |        |        "<<endl;
	cout<< "    "<<arr[6]<<"    |    "<<arr[7]<<"   |    "<<arr[8]<<"   "<<endl;
	cout<< "         |        |        "<<endl;
}
		else {
	    cout<<"Turn of "<< NamePlayer2 <<" [X]:";
		cin>>Player2;
	 	if (Player2 == 1 && arr[0] == '1') { arr[0] = 'X'; }
       		else if (Player2 == 2 && arr[1] == '2') {  arr[1] = 'X'; }
        	else if (Player2 == 3 && arr[2] == '3') {  arr[2] = 'X'; }
        	else if (Player2 == 4 && arr[3] == '4') {  arr[3] = 'X'; }
        	else if (Player2 == 5 && arr[4] == '5') {  arr[4] = 'X'; } 
			else if (Player2 == 6 && arr[5] == '6') {  arr[5] = 'X'; }
        	else if (Player2 == 7 && arr[6] == '7') {  arr[6] = 'X'; }
        	else if (Player2 == 8 && arr[7] == '8') {  arr[7] = 'X'; }
        	else if (Player2 == 9 && arr[8] == '9') {  arr[8] = 'X'; }
        	else {
            cout << "Invalid move.Try Again!";
            i--;
        }
        cout<< "         |        |        "<<endl;
	cout<< "    "<<arr[0]<<"    |    "<<arr[1]<<"   |    "<<arr[2]<<"   "<<endl;
	cout<< "   ______|________|________"<<endl;
	cout<< "         |        |        "<<endl;
	cout<< "    "<<arr[3]<<"    |    "<<arr[4]<<"   |    "<<arr[5]<<"   "<<endl;		
	cout<< "   ______|________|________"<<endl;
	cout<< "         |        |        "<<endl;
	cout<< "    "<<arr[6]<<"    |    "<<arr[7]<<"   |    "<<arr[8]<<"   "<<endl;
	cout<< "         |        |        "<<endl;
	 		if(arr[0]==arr[1] && arr[0]==arr[2] && arr[0]==arr[2]) {
		        cout<<"Congratulations!"<<NamePlayer2<<" won the game."<<endl;
		        cout<<"Games Win By Player 2: " << Player2GamesWins+1 <<endl;
				cout<<"Games Loss By Player 2: " << Player1GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 2: " << Player2GamesWinsStreak+1 <<endl;
				count=0;
				break;
		    }
	        else if(arr[3]==arr[4] && arr[3]==arr[5] && arr[3]==arr[5]){
		        cout<<"Congratulations!"<<NamePlayer2<<" won the game."<<endl;
		        cout<<"Games Win By Player 2: " << Player2GamesWins+1 <<endl;
				cout<<"Games Loss By Player 2: " << Player1GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 2: " << Player2GamesWinsStreak+1 <<endl;
				count=0;
				break;
		    }
	        else if(arr[6]==arr[7] && arr[6]==arr[8] && arr[6]==arr[8]) {
		       cout<<"Congratulations!"<<NamePlayer2<<" won the game."<<endl;
		       cout<<"Games Win By Player 2: " << Player2GamesWins+1 <<endl;
				cout<<"Games Loss By Player 2: " << Player1GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 2: " << Player2GamesWinsStreak+1 <<endl;
				count=0;
				break;
		    }
	        else if(arr[0]==arr[3] && arr[0]==arr[6] && arr[0]==arr[6]) {
		        cout<<"Congratulations!"<<NamePlayer2<<" won the game."<<endl;
		        cout<<"Games Win By Player 2: " << Player2GamesWins+1 <<endl;
				cout<<"Games Loss By Player 2: " << Player1GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 2: " << Player2GamesWinsStreak+1 <<endl;
				count=0;
				break;
		    }
	        else if(arr[1]==arr[4] && arr[1]==arr[7] && arr[1]==arr[7]) {
		        cout<<"Congratulations!"<<NamePlayer2<<" won the game."<<endl;
		        cout<<"Games Win By Player 2: " << Player2GamesWins+1 <<endl;
				cout<<"Games Loss By Player 2: " << Player1GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 2: " << Player2GamesWinsStreak+1 <<endl;
	            count=0;
				break;
		    }
	        else if(arr[2]==arr[5] && arr[2]==arr[8] && arr[2]==arr[8]) {
		      cout<<"Congratulations!"<<NamePlayer2<<" won the game."<<endl;
		      cout<<"Games Win By Player 2: " << Player2GamesWins+1 <<endl;
				cout<<"Games Loss By Player 2: " << Player1GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 2: " << Player2GamesWinsStreak+1 <<endl;
		        count=0;
	            break;
		    }
	        else if(arr[0]==arr[4] && arr[0]==arr[8] && arr[0]==arr[8]) {
		       cout<<"Congratulations!"<<NamePlayer2<<" won the game."<<endl;
		       cout<<"Games Win By Player 2: " << Player2GamesWins+1 <<endl;
				cout<<"Games Loss By Player 2: " << Player1GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 2: " << Player2GamesWinsStreak+1 <<endl;
				count=0;
				break;
		    }
	        else if(arr[2]==arr[4] && arr[2]==arr[6] && arr[2]==arr[6]) {
		        cout<<"Congratulations!"<<NamePlayer2<<" won the game."<<endl;
		        cout<<"Games Win By Player 2: " << Player2GamesWins+1 <<endl;
				cout<<"Games Loss By Player 2: " << Player1GamesLoss+1 <<endl;
				cout<<"Games Win Streak By Player 2: " << Player2GamesWinsStreak+1 <<endl;
				count=0;
				break;
		    }
		    else { count=1;}
        }
}
			if(count==1) { 
			cout<<"Game is Draw";
			cout<<"Drawn Games By Player 1: " << Player1GamesDraw++ <<endl;
			cout<<"Drawn Games By Player 2: " << Player2GamesDraw++ <<endl;
			 }
			 cout<<"Press -1 to Quit. ";
			 cin>>i;
}while(i != -1);
	cout<<endl;		
	system("pause");
	return 0;
}
