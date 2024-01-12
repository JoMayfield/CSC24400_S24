import java.util.Scanner;

public class Arrays {
	
	int myArr[];

	public static void main(String[] args) {
		// Basic way of declaring and initializing array
		int arr[] = {1, 2, 3, 4, 5};
		
		// Iterate through array to print
		// Try changing bounds
		for(int i=0; i < arr.length; i++)
			System.out.print(arr[i] + " ");
		
		// Declare array w/o knowing size or contents
		double arr2[];
		arr2 = new double[10];
		
		// Array contents are 0 by default
		System.out.println();
		for(int i=0; i < arr2.length; i++)
			System.out.print(arr2[i] + " ");
		
		// Iterate through array to alter
		System.out.println();
		for(int i=0; i < arr2.length; i++)
			arr2[i] = i*5;
		
		// Print updated array values
		for(int i=0; i < arr2.length; i++)
			System.out.print(arr2[i] + " ");
		
		// Equivalent while loop
		System.out.println();
		int counter = 0;
		while (counter < arr2.length) {
			System.out.print(arr2[counter] + " ");
			counter++;
		}
		
		// User provides size
		Scanner myObj = new Scanner(System.in);
		System.out.println();
		System.out.println();
		System.out.print("Enter size of array: ");
		int arrSize = myObj.nextInt();
		System.out.println("Array size is: " + arrSize);
		
		// Declare array of user-specified size
		int arr3[];
		arr3 = new int[arrSize];
		for(int i=0; i<arrSize; i++) {
			arr3[i] = i+1;
			System.out.print(arr3[i] + " ");
		}
		
		// Array as class attribute
		System.out.println();
		Arrays myArr2 = new Arrays();
		myArr2.myArr = new int[10]; // Array declared but still not filled
	}
}
