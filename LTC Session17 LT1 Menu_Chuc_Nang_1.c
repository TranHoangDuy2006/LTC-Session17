#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i, choice;
    
    int *arr;
    
    int sum = 0, max;

    do 
    {
        printf("\n=============== MENU ===============\n");
        
        printf("\n1. Nhap vao so phan tu va gia tri cac phan tu.\n");
        
        printf("\n2. Hien thi cac phan tu trong mang.\n");
        
        printf("\n3. Hien thi do dai cua mang.\n");
        
        printf("\n4. Tong cac phan tu trong mang.\n");
        
        printf("\n5. Hien thi phan tu lon nhat trong mang.\n");
        
        printf("\n6. Thoat\n");

        printf("\n====================================\n");
        
        printf("\nLua chon cua ban: ");
        
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                
                printf("\nNhap so phan tu cua mang: ");
                
                scanf("%d", &n);
                
                arr = (int *)malloc(n * sizeof(int));
                
                for (i = 0; i < n; i++) 
                {
                    printf("\nNhap phan tu thu %d: ", i);
                    
                    scanf("%d", arr + i);
                }
                
                printf("\nDa nhap phan tu cho mang thanh cong!\n");
                
                break;

            case 2:
                
                if (n <= 0) 
                    {
                        printf("\nMang khong co phan tu nao!\n");
                    } 
                    
                    else 
                        {
                            printf("\nCac phan tu trong mang la: ");
                            
                            for (i = 0; i < n; i++) 
                                {
                                    printf("\t%d", *(arr + i));
                                }
                    
                    printf("\n");
                }
                
                break;

            case 3:
                
                printf("\nDo dai cua mang la: %d\n", n);
                
                break;

            case 4:
                
                if (n <= 0) 
                {
                    printf("\nMang khong co phan tu nao\n");
                } 
                    else 
                        {
                            sum = 0;
                            
                            for (i = 0; i < n; i++) 
                                {
                                    sum += *(arr + i);
                                }
                    
                    printf("\nTong cua cac phan tu trong mang la: %d\n", sum);
                }
                
                break;

            case 5:
                
                if (n <= 0) 
                    {
                        printf("\nMang khong co gia tri nao!\n");
                    } 
                        else 
                            {
                                max = *arr;
                                
                                for (i = 1; i < n; i++) 
                                    {
                                        if (*(arr + i) > max) 
                                            {
                                                max = *(arr + i);
                                            }
                                    }
                    printf("\nGia tri cua phan tu lon nhat trong mang la: %d\n", max);
                }
                
                break;

            case 6:
                
                printf("\nThoat chuong trinh!\n\n");
                
                break;

            default:
                
                printf("\nLua chon khong hop le, vui long chon lai!\n\n");
                
                break;
        }
    
    } while (choice != 6);

    if (arr != NULL) 
        {
            free(arr);
        }
    
    return 0;
}
