    #include<stdio.h>  
    int main()  
    {  
        int n, i;  
        printf("Enter the size of the array: ");  
        scanf("%d", &n);  
        int arr[n];
        printf("Enter the elements:\n");  
        for(i = 0; i < n; i++)  
        {  
            scanf("%d", &arr[i]);  
        }  
        int rev[n], j = 0;  
        for(i = n-1; i >= 0; i--)  
        {  
            rev[j] = arr[i];  
            j++;  
        }  
        printf("The Reversed array: ");  
        for(i = 0; i < n; i++)  
        {  
            printf("%d ", rev[i]);  
        }  
    }  