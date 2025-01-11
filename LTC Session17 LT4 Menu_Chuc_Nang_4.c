#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main () 
{
    int n, i, choice;
    
    int *arr = NULL;

    do 
    {
        printf("\n=============== MENU ===============\n");
        
        printf("\n1. Nhap vao so phan tu va gia tri cac phan tu.\n");
        
        printf("\n2. Hien thi cac phan tu la so chan trong mang.\n");
        
        printf("\n3. Hien thi cac phan tu la so nguyen to trong mang.\n");
        
        printf("\n4. Dao nguoc cac phan tu trong mang.\n");
        
        printf("\n5. Sap xep mang.\n\na) Tang dan.\nb) Giam dan.");

        printf("\n\n6. Nhap phan tu va tim kiem phan tu trong mang.\n");
        
        printf("\n7. Thoat.\n");

        printf("\n====================================\n");
        
        printf("\nLua chon cua ban: ");
        
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:

            {
                
                printf("\nNhap so phan tu cua mang: ");
                
                scanf("%d", &n);
                
                arr = (int *)malloc(n * sizeof(int));
                
                if (arr == NULL) 
                {
                    printf("\nCap phat bo nho khong thanh cong!\n");
                    
                    return 1;
                }
                
                for (i = 0; i < n; i++) 
                {
                    printf("\nNhap phan tu thu %d: ", i);
                    
                    scanf("%d", (arr + i));
                }
                
                printf("\nNhap phan tu cho mang thanh cong!\n");
                
                break;

            }

            case 2:

            {

                printf("\nCac phan tu la so chan trong mang: ");
                
                for(int i = 0; i < n; i++)
                    {
                        if(*(arr + i) % 2 == 0)
                            {
                                printf("%d ",*(arr + i));
                            }
                    }

                printf("\n");
                
                break;

            }

            case 3:
                
            {
            
            printf("\nCac phan tu la so nguyen to trong mang: ");

            for(int x = 0; x < n; x++)
                {
                    int isPrime = 1;

                    if(*(arr + x) < 2)
                        {
                            isPrime = 0;
                        }

                        for(int j = 2; j <= sqrt(arr[x]); j++)
                            {
                                if(*(arr + x) % j == 0)
                                    {
                                        isPrime = 0;

                                        break;
                                    }
                            }
                if(isPrime)
                    {
                        printf("%d ", *(arr + x));
                    }
                
                }

            printf("\n");

            break;
            
            }

            case 4:

            {
                printf("\nMang sau khi dao nguoc la:\n\n ");

                for(int i = 0; i < n / 2; i++)
                    {
                        int temp = *(arr + i);

                        *(arr + i) = *(arr + n - i - 1);

                        *(arr + n - i - 1) = temp;
                    }

                for(int j = 0; j < n; j++)
                    {                
                        printf("%d ", *(arr + j));
                    }

                printf("\n");
 
                break;

            }

            case 5:
            
            {

            int sortChoice;

                printf("\na) Sap xep mang tang dan\n\nb) Sap xep mang giam dan\n\nLua chon cua ban: ");

                scanf("%d", &sortChoice);

                for (int i = 0; i < n - 1; i++) 
                {

                    for (int j = i + 1; j < n; j++) 
                    {

                        if ((sortChoice == 1 && *(arr + i) > *(arr + j)) || (sortChoice == 2 && *(arr + i) < *(arr + j))) {

                            int temp = *(arr + i);

                            *(arr + i) = *(arr + j);

                            *(arr + j) = temp;

                        }

                    }

                }

                printf("\nMang sau khi duoc sap xep:\n\n");

                for (int i = 0; i < n; i++) 
                {

                    printf("%d ", *(arr + i));

                }

                printf("\n");

                break;

            }
    

            case 6:

            int found = 0;

            int findValue;

            printf("\nNhap phan tu ma ban muon tim kiem trong mang: \n\n");

            scanf("%d", &findValue);

            for(int z = 0; z < n; z++)
                {
                    if(arr[z] == findValue)
                        {
                            printf("\nPhan tu %d duoc tim thay tai vi tri %d trong mang!", findValue, z);

                            found = 1;
                        }
                }

            if(found != 1)
                {
                    printf("\nKhong tim thay phan tu %d trong mang!");
                }

            printf("\n");
            
            break;
            
            case 7:
                
                printf("\nThoat chuong trinh!\n\n");
                
                break;

            default:
                
                printf("\nLua chon khong hop le, vui long chon lai!\n");
                
                break;
        }
    } while (choice != 7);

    if (arr != NULL) 
        {
            free(arr);
        }
    
    return 0;
}
