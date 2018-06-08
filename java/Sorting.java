import java.util.Scanner;

class Sorting{
    void Insertion_sort(int arr[]){
        int n = arr.length;
        for (int i=1; i<n; ++i){
            int key = arr[i];
            int j = i-1;
            while (j>=0 && arr[j] > key){
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
        }
    }

    int partition(int arr[], int low, int high){
        int pivot = arr[high]; 
        int i = (low-1);
        for (int j=low; j<high; j++){
            if (arr[j] <= pivot){
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
 
        int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;
        return i+1;
    }
 
    void Quick_sort(int arr[], int low, int high){
        if (low < high){
            int pi = partition(arr, low, high);
            Quick_sort(arr, low, pi-1);
            Quick_sort(arr, pi+1, high);
        }
    }

    void merge(int arr[], int l, int m, int r){

        int n1 = m - l + 1;
        int n2 = r - m;
 
        int L[] = new int [n1];
        int R[] = new int [n2];
 
        for (int i=0; i<n1; ++i)
            L[i] = arr[l + i];
        for (int j=0; j<n2; ++j)
            R[j] = arr[m + 1+ j];

        int i = 0, j = 0;
        int k = l;
        while (i < n1 && j < n2){
            if (L[i] <= R[j]){
                arr[k] = L[i];
                i++;
            }
            else{
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1){
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2){
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    void Merge_sort(int arr[], int l, int r){
        if (l < r){

            int m = (l+r)/2;
 
            Merge_sort(arr, l, m);
            Merge_sort(arr , m+1, r);
 
            merge(arr, l, m, r);
        }
    }

    void Selection_sort(int arr[]){
        int n = arr.length;
 
        for (int i = 0; i < n-1; i++){
            int min_idx = i;
            for (int j = i+1; j < n; j++)
                if (arr[j] < arr[min_idx])
                    min_idx = j;
 
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }

    static void printArray(int arr[]){
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i] + " ");
 
        System.out.println();
    }
 
    public static void main(String args[]) {   
    	Scanner scan = new Scanner(System.in);
      	System.out.print("HOW MANY NUMBER TO SORT>>> ");
      	int count = Integer.parseInt(scan.nextLine());
      	int[] arr = new int[count];
	int choice=1;
      	System.out.print("ENTER NUMBERS>>> ");
      	for(int i = 0;i < count;i++)
      		arr[i] = scan.nextInt();

	System.out.print("\n1> Insertion Sort\n2> Quick Sort\n3> Merge Sort\n4> Selection Sort\nSelect sorting algorithm>>> ");
	choice = scan.nextInt();
	Sorting ob = new Sorting();
	switch (choice) {
	case 1:
		//Insertion Sort
        	ob.Insertion_sort(arr);
		break;
	case 2:
		//Quick Sort
        	ob.Quick_sort(arr, 0, arr.length-1);
		break;
	case 3:
		//Merge Sort
        	ob.Merge_sort(arr, 0, arr.length-1);
		break;
	case 4:
		//Selection Sort
        	ob.Selection_sort(arr);
		break;
	default:
		System.out.println("Invalid input! Exiting program!");
	}
        System.out.println("OUTPUT: \n");  
        printArray(arr);
    }
}
