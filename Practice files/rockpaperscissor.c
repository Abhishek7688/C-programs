// Create Rock Paper Scissor Game

// pleyer 1: rock
// player 2: (computer): scissor --> player 1 gets 1 point

// rock vs scissor - rock wins
// paper vs scissor - scissor wins
// paper vs rock - paper wins

// Write a c program to allows user to play three times with computer. Log the scores of the computer and the player.
// Display the name of the winner at the end.
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
      srand(time(NULL)); // srand takes seed as an input and is defined inside (stdlib.h).
      return rand() %n;
}

int greater(char char1, char char2) //For rock,paper,scissor = Return 1 if c1>c2 and 0 otherwise. If c1==c2 it will return -1.
{
      if (char1 == char2)
      {
            return -1;
      }
      else if ((char1 == 'r') && (char2 == 's'))
      {
            return 1;
      }
      else if ((char2 == 'r') && (char1 == 's'))
      {
            return 0;
      }
      else if ((char1 == 'p') && (char2 == 'r'))
      {
            return 1;
      }
      else if ((char2 == 'p') && (char1 == 'r'))
      {
            return 0;
      }
      else if ((char1 == 's') && (char2 == 'p'))
      {
            return 1;
      }
      else if ((char2 == 's') && (char1 == 'p'))
      {
            return 0;
      }
}

int main()
{
      int PlayerScore = 0, compScore = 0, temp;
      char PlayerChar, compChar;
      char dict[] = {'r', 'p', 's'};

      printf("Welcome two the Rock,Paper,Scissor Game. \n");
      for (int i = 0; i < 3; i++)
      {
            // Take player 1's input.

            printf("Choose 1 for Rock, 2 for paper, 3 for scissor.\n");
            printf("Player 1's Turn:\n ");
            scanf("%d", &temp);
            getchar();
            PlayerChar = dict[temp - 1];
            printf("You choose %c\n\n", PlayerChar);

            // Generate computer's input.

            printf("Computer's Turn:\n ");
            temp = generateRandomNumber(3) + 1;
            compChar = dict[temp - 1];
            printf("Coumputer choose %c\n", compChar);

            // compare this score.

            if (greater(compChar, PlayerChar) == 1)
            {
                  compScore += 1;
                  printf("Computer Got it!.\n");
            }
            else if (greater(compChar, PlayerChar) == -1)
            {
                  compScore += 1;
                  PlayerScore += 1;
                  printf("It's a Draw!.\n");
            }
            else
            {
                  PlayerScore += 1;
                  printf("You got it!.\n");
            }
            printf("You :%d\nComputer:%d\n\n", PlayerScore,compScore);
      }

      if (PlayerScore > compScore)
      {
            printf("You win the game.\n");
      }
      else if (PlayerScore < compScore)
      {
            printf("Computer win the game.\n");
      }
      else
      {
            printf("It's a draw.\n");
      }

      return 0;
}