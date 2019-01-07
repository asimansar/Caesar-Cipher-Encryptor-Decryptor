/*
		************************************THIS PROGRAM ENCRYPTS USER ENTERED KEY WITH CAESAR CIPHER TECHNOLOGY************************************************************************************************
*/
#include <stdio.h>
#include <string.h> // for using strlen()


void main()
{
	int key;
	int keyPos;		// The key position of the second array need to be filled with in accordance with key value!
	int keyPosRes;
	int i;
	int j;
	int lenIn; // length of 'In' string
	char EncOrDec;

	char In[50];	//	array stores the user entered string
	char c[26];
	char p[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char CI[50];	//	array stores the encrypted string 
	
	
	printf("\t\t\t\t*****WELCOME TO ENCRYPTION ENGINE*****\n\n");

	printf("\n\nEncryption(E) or Decryption(D)\t:");
	scanf("%c",&EncOrDec);

	// to check whether user wants decrypion or encryption 
	if(EncOrDec == 'E' || EncOrDec == 'e'){
	printf("\n\n\t\tEnter the WORD TO encrypt(!!MUST BE IN CAPITAL):");
	scanf("%s",	In);
	
	lenIn = strlen(In);	//	Storing length of entered string 'In'
	

	printf("\n\n\t\tEnter the cypher key     : ");
	scanf("%d",	&key);

	// Caesar Cipher chart
	keyPos = key-1;		// -1 given for that's the array starts with zero 
	keyPosRes = keyPos;		// Reserving a "keyPos" value in "keyPosRes" to be used it in later
	
			//for(int i=0; i<26; i++) // Outer loop of checking value of 'i' not to exceed 26
	while(i<26)		// previously i wrote it in 'for loop' and it gone wrong when it execute just because the incrementation of 'i' is two times ( because the inner part contains already incrementation )
	{
		if(keyPos < 26)		// The loop for new array that could filled with alphabets in accordance with the "key value"
		{
			c[keyPos] = p[i];		// Assigning the Alphabetic character set to new array with concerned key value
			keyPos++; 
			i++;
		}
		else
		{
			keyPos = 0;
			if(keyPos < keyPosRes)
			{
				c[keyPos] = p[i];
				i++;
				keyPos++;
			}
		
		}
	}
//
	for( i=0; i < 26; i++)
	{
		printf(" %c",p[i]);
	}
	
	printf("\n\n\t\tThe cypher code is !!!!!!!!!!!!!!!\n\n\n");

	for(j=0; j < 26; j++)
	{
		printf(" %c",c[j]);
	}
	printf("\n\n");

//	
	i=0;
	while(i < lenIn)	//	Storing encrypted string in 'CI'
	{
		j=0;
		while(j < 26)
		{

			if(In[i] == p[j])
			{
				CI[i]=c[j];
				break;	
				
			}
			else
				j++;
			
		}
		
		i++;
	}
	
	printf("\n\t\tThe CAESAR CIPHER is \n ");
	for( i=0; i < lenIn; i++)
	{
		printf("%c", CI[i]);
	}

	printf("\n\n");
	} // the else if works here
	else if( EncOrDec == 'D' || EncOrDec == 'd'){

	printf("\n\nEnter the Caesar cipher :");
	scanf("%s",CI);

	lenIn = strlen(CI);	//	Storing length of entered string 'In'
	

	printf("\n\n\t\tEnter the cypher key     : ");
	scanf("%d",	&key);

	// Caesar Cipher chart
	keyPos = key-1;		// -1 given for that's the array starts with zero 
	keyPosRes = keyPos;		// Reserving a "keyPos" value in "keyPosRes" to be used it in later
	
			//for(int i=0; i<26; i++) // Outer loop of checking value of 'i' not to exceed 26
	while(i<26)		// previously i wrote it in 'for loop' and it gone wrong when it execute just because the incrementation of 'i' is two times ( because the inner part contains already incrementation )
	{
		if(keyPos < 26)		// The loop for new array that could filled with alphabets in accordance with the "key value"
		{
			c[keyPos] = p[i];		// Assigning the Alphabetic character set to new array with concerned key value
			keyPos++; 
			i++;
		}
		else
		{
			keyPos = 0;
			if(keyPos < keyPosRes)
			{
				c[keyPos] = p[i];
				i++;
				keyPos++;
			}
		
		}
	}


	i=0;
	while(i < lenIn)	//	Storing encrypted string in 'CI'
	{
		j=0;
		while(j < 26)
		{

			if(CI[i] == c[j])
			{
				In[i]=p[j];
				break;	
				
			}
			else
				j++;
			
		}
		
		i++;
	}
	
	printf("\n\t\t*****The Decrypted Message is***** \n ");
	for( i=0; i < lenIn; i++)
	{
		printf("%c", In[i]);
	}

	printf("\n\n");
	}


}



