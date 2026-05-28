#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void selectWord(char words[][30],char correct_word[],char clues[][60],char clue[]) 
{
  int index=rand()%14;
  strcpy(correct_word,words[index]);
  strcpy(clue,clues[index]);
}
void initWordHolder(char word_holder[],int length) 
{
  for(int i=0;i<length;i++) 
  {
    word_holder[i]='_';
  }
  word_holder[length]='\0';
}
void displayWordHolder(char word_holder[],int length) 
{
  printf("\n");
  for(int i=0;i<length;i++) 
  {
    printf("%c ", word_holder[i]);
  }
  printf("\n");
}
int checkGuess(char correct_word[],char word_holder[],char guess,int length) 
{
  int found=0;
  for(int i=0;i<length;i++) 
  {
    if(guess==correct_word[i]) 
    {
      word_holder[i]=guess;
      found=1;
    }
  }
  return found;
}
int checkWin(char word_holder[]) 
{
  return strchr(word_holder,'_')==0;
}
void drawHangman(char hangman_pics[][120],int stage) 
{
  printf("%s",hangman_pics[stage]);
}
int main() 
{
  system("clear");
  int lives=6,no=0;
  char guess;
  char words[14][30]=
  {
    "apple",
    "banana",
    "orange",
    "grapes",
    "mango",
    "elephant",
    "tiger",
    "rabbit",
    "giraffe",
    "zebra",
    "lion",
    "monkey",
    "pineapple",
    "strawberry"
  };
  char clues[14][60]=
  {
    "Fruit which includes the letter p",
    "Fruit which includes the letter a",
    "Fruit which includes the letter a",
    "Fruit which includes the letter r",
    "Fruit which includes the letter g",
    "Animal which includes the letter t",
    "Animal which includes the letter t",
    "Animal which includes the letter r",
    "Animal which includes the letter g",
    "Animal which includes the letter b",
    "Animal which includes the letter n",
    "Animal which includes the letter y",
    "Fruit which includes the letters p",
    "Fruit which includes the letters r"
  };
  char hangman_pics[7][120]=
  {
    "  +---+\n"
    "  |   |\n"
    "      |\n"
    "      |\n"
    "      |\n"
    "      |\n"
    "=========\n",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    "      |\n"
    "      |\n"
    "      |\n"
    "=========\n",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    "  |   |\n"
    "      |\n"
    "      |\n"
    "=========\n",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|   |\n"
    "      |\n"
    "      |\n"
    "=========\n",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|\\  |\n"
    "      |\n"
    "      |\n"
    "=========\n",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|\\  |\n"
    " /    |\n"
    "      |\n"
    "=========\n",

    "  +---+\n"
    "  |   |\n"
    "  O   |\n"
    " /|\\  |\n"
    " / \\  |\n"
    "      |\n"
    "=========\n"
  };
  srand(time(0));
  char correct_word[30];
  char clue[60];
  selectWord(words,correct_word,clues,clue);
  int length=strlen(correct_word);
  char word_holder[30];
  initWordHolder(word_holder,length);
  printf("====================================================\n");
  printf("                  HANGMAN GAME\n");
  printf("====================================================\n\n");
  printf("\n");
  printf("Hint : %s\n",clue);
  printf("Lives: %d\n",lives);
  printf("Word Length: %d letters\n\n",length);
  drawHangman(hangman_pics,0);
  displayWordHolder(word_holder,length);
  int check=0;
  while(lives!=0) 
  {
    printf("\nEnter one letter: ");
    scanf(" %c",&guess);
    int found=checkGuess(correct_word,word_holder,guess,length);
    if(!found)
    {
        no++;
        lives--;
    }
    system("clear");
    printf("====================================================\n");
    printf("                  HANGMAN GAME\n");
    printf("====================================================\n\n");
    printf("Hint : %s\n", clue);
    printf("Lives: %d\n", lives);
    printf("Word Length: %d letters\n\n",length);
    drawHangman(hangman_pics,no);
    if(found)
    {
      printf("\nCorrect Guess!\n");
    }
    else
    {
      printf("\nWrong Guess!\n");
    }
    displayWordHolder(word_holder,length);
    if(checkWin(word_holder)) 
    {
      printf("\nCongratulations! You guessed the word!\n");
      check = 1;
      break;
    }
  }
  if(lives==0) 
  {
    printf("\nGame Over!\n");
    printf("The correct word was: %s\n",correct_word);
  }
  return 0;
}
