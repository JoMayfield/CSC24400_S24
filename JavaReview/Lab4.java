import java.util.Random;
import java.util.Scanner;

public class Lab4 {
		
	public static void main(String[] args) {
			int guessesLeft = 10;
			int guessNumber = 0;
			int randomNumber = new Random().nextInt(100)+1;
			int userGuess = 0;

			Scanner kbd = new Scanner(System.in);
			
			while(userGuess != randomNumber && guessesLeft > 0)
			{
				System.out.print("You have " + guessesLeft + " guesses left.  Enter your guess (1-100): ");
				userGuess=kbd.nextInt();
				
				guessesLeft--;
				guessNumber++;
				
				if (userGuess < randomNumber)
				{
					System.out.println("Sorry, your guess # "+ guessNumber + " was too small");
				}
				else if (userGuess > randomNumber)
				{
					System.out.println("Sorry, your guess # " + guessNumber + " was too large");
				}
				
			}
			
			if (userGuess==randomNumber)
			{
				System.out.println("You got it, in " + (guessNumber) + " guesses!");
			}
			else if (guessesLeft == 0)
			{
				System.out.println("You ran out of guesses. My Number: " + randomNumber);
			}
			
			kbd.close();	
		}
}
