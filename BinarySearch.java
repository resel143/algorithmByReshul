/******************************************************************************

                            Made by Reshul on 25 June 2021.

*******************************************************************************/
import java.util.Scanner;
public class Main
{
    static int Bsearch(int arr[], int num, int left , int right){
        int mid = (left+right)/2;
        if(arr[mid]==num) return mid;
        if(arr[mid]>num){
            right = mid-1;
            Bsearch(arr, num, left, right);
        }else if(arr[mid]<num){
            left = mid+1;
            Bsearch(arr,num,left,right);
        }
    }
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
		System.out.println("Enter element to be searched: ");
		int num = sc.nextInt();
		int left = 0;
		int right = arr.length;
		int answer = Bsearch(arr, num, left, right);
		System.out.println(answer);
	}
}
