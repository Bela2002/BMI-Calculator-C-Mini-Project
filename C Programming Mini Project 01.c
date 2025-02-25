#include<stdio.h>
void main()
{ 
   int username,password,kg,g,feet,inches;
   float weight,height,bmi,hw1,hw2;
   
   printf("........PERSONAL HEALTH SYSTEM........ \n\n\n\n");
   printf("-LOGIN DETAILS- \n\n");
   
   printf("Enter the username: ");
   scanf("%d",&username);
   
   if(username==9999)
   { 
     printf("\nEnter the password: ");
     scanf("%d",&password);
      
     if(password==1234)
     { 
       printf("\n\n\n......LOGIN SUCCESSFUL......\n\n\n\n");
       printf("____Let's check your BMI value____\n\n\n");
       printf("-HEALTH DETAILS- \n\n");
       
          
       printf("Enter your weight \n");
       printf("kg: ");
       scanf("%d",&kg);
       printf("g: ");
       scanf("%d",&g);
      
       if(kg>0 && g>=0)
       { 
         printf("\n\n\nEnter your height \n");
         printf("feet: ");
         scanf("%d",&feet);
         printf("inches: ");
         scanf("%d",&inches);
         
	   
         if(feet>0 && inches>=0)
         { 
           printf("\n\n\n____YOUR PERSONAL HEALTH RECORD____\n\n\n");
       
           height=(float)feet*30/100 + (float)inches*2.5/100;
           weight=(float)kg+ (float)g/1000;
           bmi=(float)weight/(height*height);
       
           hw1=(float)18.5*height*height;
           hw2=(float)24.9*height*height;
        
        
           printf("Height  :     %.2f m",height);
           printf("\nWeight  :     %.3f kg",weight);
           printf("\nBMI     :     %.2f",bmi);
         
         

           if(bmi<18.5)
           {  
             printf("\nStatus  :     Under Weight\n\n");
	       }
	       else
	       {  
	         if(bmi>=18.5 && bmi<=24.9)
	         { 
	           printf("\nStatus  :     Healthy Weight\n\n");
		     }
		     else
		     { 
		       printf("\nStatus  :     Over Weight\n\n");
		     }
		 
	       }  
	   
	       printf("\n-HEALTH ADVICES-\n\n");
	       printf("Best BMI range is 18.5 to 24.9");
	       printf("\nKeep your weight between %.2f kg and %.2f kg \n\n\n\n",hw1,hw2);
	       printf("***  Press Any Key To Exit  ***");
        
	     }
	     
		 else
		 {
		   printf("\nError: Height Must Be A Positive Value\n\n\n\n");
           printf("***  Press Any Key To Exit  ***"); 
	     } 
		         
	   }
	   else
	   { 
	   	 printf("\nError: Weight Must Be A Positive Value\n\n\n\n");
         printf("***  Press Any Key To Exit  ***");   
	   } 

	 }
	 else
	 { 
	   printf("\nError: INVALID PASSWORD\n\n\n\n");
       printf("***  Press Any Key To Exit  ***"); 
	 }
	  
   }
   else
   { 
     printf("\nError: INVALID USERNAME\n\n\n\n");
     printf("***  Press Any Key To Exit  ***");
   }
   
   getch();
}
