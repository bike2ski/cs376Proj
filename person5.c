#include <stdlib.h>
void html(char ** text){
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;
  int startI = 0;
  int startK = 0;
  int endI = 0;
  int endK = 0;
  int startBoolean = 0;
  int endBoolean = 0;
  for(i=0;text[i]!=NULL;i++){
    for(k=0;text[i][k]!='\0';k++){
      if(text[i][k]=='<'){
	startI = i;
	startK = k;
	startBoolean = 1;
      }
      if(text[i][k]=='>'){
	endI = i;
	endK = k;
	endBoolean = 1;
      }
      if(startBoolean==1 && endBoolean==1){
	for(j=startI;j<=endI;j++){
	  for(l=startK;l<=endK;l++){
	    text[j][l]=' ';
	    startBoolean = 0;
	    endBoolean = 0;
	  }
	}
      }
    }
  }
}

