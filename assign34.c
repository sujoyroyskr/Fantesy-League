#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

	/*Structure representing nodes of linked list forming the team. */
	struct Node
	{
    		float run;
       		struct Node *next;
	};

	/*Function to create a node of a linked list*/	
	void create_node(int x,struct Node **temp)
	{
    	struct Node *r, *z;
    	z = *temp;
    	if(z == NULL)
    	{
        r =(struct Node*)malloc(sizeof(struct Node));
        r->run = x;
        *temp = r;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    	}
    	else
    	{
        r->run = x;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    	}
	}

	/*Function to display the linked lists*/
	void show(struct Node *node)
	{
	while(node->next != NULL)
    	{
    	printf("%f , ", node->run);
    	node = node->next;
    	}
	}
	
	
	void main()
	{
		struct Node *team1 = NULL , *team2 = NULL , *fteam = NULL ;
		float run1,run2,bow1,bow2,wc1 ;

		printf("Enter the runs and wickets taken by Team-1: \n ");
		printf("Enter the run scored by 1st player of Team-1:");
		scanf("%f" , &run1);
		printf("Enter the run scored by 2nd player of Team-1:");
		scanf("%f" , &run2);
		printf("Enter the wickets taken by 1st bowler player of Team-1:");
		scanf("%f" , &bow1);
		printf("Enter the wickets taken by 2nd bowler player of Team-1:");
		scanf("%f" , &bow2);
		wc1 = ((bow1 + bow2)*50)*0.5 ;

		create_node(run1, &team1);
		create_node(run2, &team1);
		create_node(wc1, &team1);
		create_node(bow1, &team1);
		create_node(bow2, &team1);
		
		printf("DISPLAY TEAM-1 :");
		show(team1);

		float run21,run22,bow21,bow22,wc2 ;

		printf("\nEnter the runs and wickets taken by Team-2: \n ");
		printf("Enter the run scored by 1st player of Team-2:");
		scanf("%f" , &run21);
		printf("Enter the run scored by 2nd player of Team-2:");
		scanf("%f" , &run22);
		printf("Enter the wickets taken by 1st bowler player of Team-2:");
		scanf("%f" , &bow21);
		printf("Enter the wickets taken by 2nd bowler player of Team-2:");
		scanf("%f" , &bow22);
		wc2 = ((bow21 + bow22)*50)*0.5 ;

		create_node(run21, &team2);
		create_node(run22, &team2);
		create_node(wc2, &team2);
		create_node(bow21, &team2);
		create_node(bow22, &team2);
		
		
		printf("\nDISPLAY TEAM-2");
		show(team2);

		float run[4];
		run[0] = run1;
		run[1] = run2;
		run[2] = run21;
		run[3] = run22;

		float bow[4];
		bow[0] = bow1;
		bow[1] = bow2;
		bow[2] = bow21;
		bow[3] = bow22;
		
		int trun[4];
		int tbow[4];
		int a,b;
		/*Sorting the run array in descending order*/
		for (int i = 0; i < 4; ++i) 
		 {
		for (int j = i + 1; j <4;++j) 
		 {
			if (run[i] < run[j]) 
			{a = run[i];
			 run[i] = run[j];
			 run[j] = a;
			}
		}
		}
			
		/*Checking which Batsman is from which team*/
		if(run[0]==run1 || run[0]==run2)
		{trun[0]=1;}
		else
		{trun[0]=2;}

		if(run[1]==run1 || run[1]==run2)
		{trun[1]=1;}
		else
		{trun[1]=2;}

		if(run[2]==run1 || run[2]==run2)
		{trun[2]=1;}
		else
		{trun[2]=2;}	

		if(run[3]==run1 || run[3]==run2)
		{trun[3]=1;}
		else
		{trun[3]=2;}

		/*Sorting the bow array in descending order*/
		for (int i = 0; i < 4; ++i) 
		 {
		for (int j = i + 1; j < 4;++j) 
		 {
			if (bow[i] < bow[j]) 
			{b = bow[i];
			 bow[i] = bow[j];
			 bow[j] = b;
			}
		}
		}

		/*Checking which Bowler is from which team*/
		if(bow[0]==bow1 || bow[0]==bow2)
		{tbow[0]=1;}
		else
		{tbow[0]=2;}

		if(bow[1]==bow1 || bow[1]==bow2)
		{tbow[1]=1;}
		else
		{tbow[1]=2;}

		if(bow[2]==bow1 || bow[2]==bow2)
		{tbow[2]=1;}
		else
		{tbow[2]=2;}	

		if(bow[3]==bow1 || run[3]==bow2)
		{tbow[3]=1;}
		else
		{tbow[3]=2;}

		float frun1 , frun2 , fbow1 , fbow2 , fwc;
		/*Checking whether the contribution of the team exceeds 3 or not and froming the team*/
		if(trun[0]==trun[1] && tbow[0]==tbow[1] && trun[0]==tbow[0])
		{
			frun1 = run[0];
			frun2 = run[1];
			fbow1 = bow[0];
			fbow2 = bow[2];
			fwc = ((fbow1+fbow2)*50)*0.5;
		}
		else
		{
			frun1 = run[0];
			frun2 = run[1];
			fbow1 = bow[0];
			fbow2 = bow[1];
			fwc = ((fbow1+fbow2)*50)*0.5;

		}

		float ba1 = frun1;
		float ba2 = frun2;
		float bw1 = 50*fbow1 ;
		float bw2 = 50*fbow2 ;

		/*Create the fanntasy league team*/

		create_node(frun1, &fteam);
		create_node(frun2, &fteam);
		create_node(fwc, &fteam);
		create_node(bw1, &fteam);
		create_node(bw2, &fteam);

		/*Dispaly the Fantasy league team*/
		printf("\nFANTASY LEAGUE :");
		show(fteam);
		
		/*Checking which member is from which team*/
		printf("\n||TEAM SELECTION||");
		if(frun1 == run1 || frun1 == run2)
		{printf("\n1st batsman -> Team-1");}
		else if(frun1 == run21 || frun1 == run22)
		{printf("\n1st batsman -> Team-2");}
	
		if(frun2 == run1 || frun2 == run2)
		{printf("\n2nd batsman -> Team-1");}
		else if(frun2 == run21 || frun2 == run22)
		{printf("\n2nd batsman -> Team-2");}

		if(wc1>wc2)
		{printf("\nWicket Keeper -> Team-1");}
		else
		{printf("\nWicket Keeper-> Team-2");}
		
		if(fbow1 == bow1 || fbow1 == bow2)
		{printf("\n1st Bowler -> Team-1");}
		else if(fbow1 == bow21 || fbow1 == bow22)
		{printf("\n1st Bowler -> Team-2");}

		if(fbow2 == bow1 || fbow2 == bow2)
		{printf("\n2nd Bowler -> Team-1");}
		else if(fbow2 == bow21 || fbow2 == bow22)
		{printf("\n2nd Bowler -> Team-2");}

		float arr[5] ;
		arr[0] = ba1;
	        arr[1] = ba2;
		arr[2] = fwc;
		arr[3] = bw1;
		arr[4] = bw2;
		float captain; 
		captain = arr[0];
   	        for (int i = 0; i < 5; i++) 
		{
        	if (arr[i] > captain) 
		{
	            captain = arr[i];
	        }
		}

		float sbow1 = bow1*50;
		float sbow2 = bow2*50;
		float sbow21 = bow21*50;
		float sbow22 = bow22*50;

		printf("\n ||CAPTAIN SELECTION||");
		if(captain == run1)
		{printf("\nCAPTAIN -> 1ST Batsman of TEAM-1");}
		else if(captain == run2)
		{printf("\nCAPTAIN -> 2nd Batsman of TEAM-1");}
		else if(captain == sbow1)
		{printf("\nCAPTAIN -> 1ST Bowler of TEAM-1");}
		else if(captain == sbow2)
		{printf("\nCAPTAIN -> 2nd Bowler of TEAM-1");}
		else if(captain == run21)
		{printf("\nCAPTAIN -> 1ST Batsman of TEAM-2");}
		else if(captain == run22)
		{printf("\nCAPTAIN -> 2nd Batsman of TEAM-2");}
		else if(captain == sbow21)
		{printf("\nCAPTAIN -> 1ST Bowler of TEAM-2");}
		else if(captain == sbow22)
		{printf("\nCAPTAIN -> 2nd Bowler of TEAM-2");}
		else if(captain == fwc)
		{
			if(wc1 > wc2)
			{printf("\nCAPTAIN -> Wicket Keeper of TEAM-1");}
			else
			{printf("\nCAPTAIN -> Wicket Keeper of TEAM-2");}
		}
		
		
		float totalscore;
		printf("\n ||TOTAL SCORE||");
		if(captain==frun1)
		{totalscore = (frun1*2)+frun2+(fbow1*50)+(fbow2*50)+fwc;
		printf("\nTotal Score of the FANTASY LEAGUE : %f" , totalscore);
		}

		else if(captain==frun2)
		{totalscore = frun1+(frun2*2)+(fbow1*50)+(fbow2*50)+fwc;
		printf("\nTotal Score of the FANTASY LEAGUE : %f" , totalscore);
		}

		else if(captain==fwc)
		{totalscore = frun1+frun2+(fbow1*50)+(fbow2*50)+fwc;
		printf("\nTotal Score of the FANTASY LEAGUE : %f" , totalscore);
		}

		else if(captain==fwc)
		{totalscore = frun1+frun2+(fbow1*50)+(fbow2*50)+fwc;
		printf("\nTotal Score of the FANTASY LEAGUE : %f" , totalscore);
		}

		else if(captain==bw1)
		{totalscore = frun1+frun2+(fbow1*100)+(fbow2*50)+ (((fbow1*100)+(fbow2*50))*0.5);
		printf("\nTotal Score of the FANTASY LEAGUE : %f" , totalscore);
		}

		else if(captain==bw2)
		{totalscore = frun1+frun2+(fbow1*50)+(fbow2*100)+ (((fbow1*50)+(fbow2*100))*0.5);
		printf("\nTotal Score of the FANTASY LEAGUE : %f" , totalscore);
		}

		
	}
		
		

		



                    

                 		
