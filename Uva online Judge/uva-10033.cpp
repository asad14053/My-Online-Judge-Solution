#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int StoI(string s)
{
	int R;
	R = (s[0] - '0')*100;
	R += (s[1]- '0')*10;
	R += (s[2]- '0');
	return R;
}

string ItoS(int I)
{
	string R = "000";
	R[2] = I%10 + '0';
	I /= 10;
	R[1] = I%10 + '0';
	I /= 10;
	R[0] = I%10 + '0';

	return R;
}
int main()
{
	int N, nCommands;
	char C1, C2, C3;
	char d, n,s,a;
	char instr[5];

	scanf("%d", &N);
	fgets(instr, sizeof(instr), stdin);
	fgets(instr, sizeof(instr), stdin);

	bool exit = false;
	string RAM[1000];
	string Ts;
	vector<int>Results;
	int PC;

	for (int i=0; i<N; i++)
	{
		for (int j=0; j<1000; j++) RAM[j] = "000";
		PC=0;

		while(fgets(instr, sizeof(instr), stdin) != NULL)
		{

			if (instr[0] == '\n') break;

			RAM[PC][0] = instr[0];
			RAM[PC][1] = instr[1];
			RAM[PC++][2] = instr[2];

		}

		string Registers[10];
		int T;
		for (int j=0; j<10; j++) Registers[j] = "000";
		nCommands =0;
		exit = false;
		PC=0;
	while(!exit)
	{
		nCommands++;
			switch(RAM[PC][0])
			{
				case '1':
					exit = true;
					PC++;
				break;

				case '2':
					d = RAM[PC][1];
					n = RAM[PC][2];

					Registers[d - '0'] =  ItoS(n - '0');
					PC++;

				break;

				case '3':
					d = RAM[PC][1];
					n = RAM[PC][2];

					Registers[d - '0'] = ItoS((StoI(Registers[d - '0']) + (n - '0'))%1000);
					PC++;
				break;

				case '4':
					d = RAM[PC][1];
					n = RAM[PC][2];
					Registers[d - '0'] = ItoS((StoI(Registers[d - '0'])*(n - '0'))%1000);
					PC++;
				break;

				case '5':
					d = RAM[PC][1];
					s = RAM[PC][2];
					Registers[d - '0'] = Registers[s - '0'];
					PC++;
				break;

				case '6':
					d = RAM[PC][1];
					s = RAM[PC][2];
					Registers[d - '0'] = ItoS((StoI(Registers[d - '0']) + StoI(Registers[s - '0']))%1000);
					PC++;
				break;

				case '7':
					d = RAM[PC][1];
					s = RAM[PC][2];
					Registers[d - '0'] = ItoS((StoI(Registers[d - '0']) * StoI(Registers[s - '0']))%1000);
					PC++;
				break;

				case '8':
					d = RAM[PC][1];
					a = RAM[PC][2];

					Registers[d - '0'] = RAM[ StoI(Registers[a - '0'])];
					PC++;

				break;

				case '9':
					s = RAM[PC][1];
					a = RAM[PC][2];
					PC++;
					RAM[StoI(Registers[a - '0'])] = Registers[s - '0'];
				break;

				case '0':
					d = RAM[PC][1];
					s = RAM[PC][2];

					if (StoI(Registers[s - '0']) != 0)
						PC = StoI(Registers[d - '0']);
					else PC++;
				break;

			}

	}
		cout << nCommands << endl;
		if (i < N-1) cout << endl;

	}

	return 0;
}
