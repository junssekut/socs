#include<stdio.h>

int main()
{
    int t;
    int hitung;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int temp = 0, counter = 0, counter1 = 0, n;
        scanf("%d", &n);
        int arr[n];
        for(int j=0; j<n; j++)
        {
            arr[j]=0;
            scanf("%d", &arr[j]);
            if (j>0){

            }
        }
        for (int a = 0; a < n; a++) {
            for (int b = a+1; b < n; b++) {
               if(arr[a] < arr[b]) {
                   temp = arr[a];
                   arr[a] = arr[b];
                   arr[b] = temp;
               }
            }
        }

        for(int j=0; j<n; j++)
        {
            if (counter1 == 1){
                counter1 = 0;
            }
            for(int k=j+1;k<n;k++)
            {
                if (counter1 == 1){
                    break;
                }

                for(int l=k+1; l<n; l++)
                {
                    if (j==k || j==l || k==l){
                        continue;
                    }
                    if(arr[k]+arr[l]==arr[j]){
                        hitung = "%d + %d = %d\n", arr[k], arr[l], arr[j];
                        counter++;
                        counter1 = 1;
                        break;
                    }
                }
            }
        }
        printf("Case #%d: %d", i, counter);
        printf("\n");
		}
        return 0;
}
