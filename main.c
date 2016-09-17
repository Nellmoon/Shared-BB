
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
	

//FUNCTION DECLARATIONS


int main(int argc, char **argv){  	

	//Variables Declaration  	
  	int sflag = 0;			//variable used to know if -s is present or not
  	int svalue;				//variable used to store the substraction value
  	int aflag = 0;			//variable used to know if -a is present or not
  	int avalue;				//variable used to store the addition value
  	int dflag = 0;			//variable used to know if -d is present or not
  	int dvalue;				//variable used to store the division value
  	int mflag = 0;			//variable used to know if -m is present or not
  	int mvalue;				//variable used to store the multiplication value
  	int eflag = 0;			//variable used to know if -e is present or not
  	
  	char *ovalue = NULL;	//variable used to store the name of the output file
  	int index;				//variable used to go through all the arguments in a for loop
  	opterr = 0;				//this variable from getopt is set to 0 first, if opterr is non-zero then there's an error
  	int fnumber = 0;		//variable used to know if the number is present or not
  	int number;				//number to which all operations will be made
  	int c;					//variable used to store the option character for the next command line option
 
  	
  	
  	//WE FIRST PROCEED TO READ THE OPTIONS FROM COMMAND LINE
  	
  	//while loop to read all the options
  	while ((c = getopt (argc, argv, "s:a:d:m:e")) != -1)
    	switch (c)
    	  {
    	  case 's':
    	    //-s option readed
    	  	sflag = 1;
    	    svalue = atoi(optarg);
    	  	break;
    	  case 'a':
    	  	//-a option readed
    	    aflag = 1;
    	    avalue = atoi(optarg);
    	    break;
    	  case 'd':
    	  	//-d option readed
    	    dflag = 1;
    	    dvalue = atoi(optarg);
    	    break;
    	  case 'm':
    	  	//-m option readed
    	  	mflag = 1;
    	    mvalue = atoi(optarg);
    	    break;
    	  case 'e':
    	    eflag = 1;
    	    break;
    	  case '?':
    	  	//in case of any error the program enters here
    	    if (optopt == 'o')
    	      fprintf (stderr, "Option -%c requires an argument.\n", optopt);
    	    else if (optopt == 's')
    	      fprintf (stderr, "Option -%c requires an argument.\n", optopt);
    	    else if (optopt == 'r')
    	      fprintf (stderr, "Option -%c requires an argument.\n", optopt);
    	    else if (isprint (optopt))
    	      fprintf (stderr, "Unknown option `-%c`.\n", optopt);
    	    else
    	      fprintf (stderr,
    	               "Unknown option character `\\x%x'.\n",
    	               optopt);
    	    return 1;    	    
    	  default:
    	    abort ();
    	  }
    	  
    	 
     if( !(sflag || aflag || dflag || mflag || eflag) ){
     	printf("Missing options.\n");
     	return 1;
     }
    	  
    //for loop to check if all arguments have their values and
    //to assign "number" its value 
	for (index = optind; index < argc; index++){
		if(fnumber == 0){
			number = atoi(argv[index]);
			fnumber++;
		}else{
    		printf ("Non-option argument %s\n", argv[index]);
    		return 2;
    	}
    }	
     
    //check if the number 
	if (fnumber == 0){
		printf("There's no number to do the requested operation.\n");
		return 3;
	}
	
	
    //process options now    
    if(eflag == 1){
    
    } 
    
    if(mflag == 1){
    
    }
    
    if(dflag == 1){
    
    }
    
    if(aflag == 1){
    
    }
    
    if(sflag == 1){
    
    }
    
    return 0;
}












