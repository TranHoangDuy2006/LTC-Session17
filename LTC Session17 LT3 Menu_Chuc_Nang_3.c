#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main() 
{
    int n, i, choice;

    char *str = NULL;
    
    char *str1 = NULL;
    
    char *str2 = NULL;

    do 
    {
        printf("\n=============== MENU ===============\n");
        
        printf("\n1. Nhap vao chuoi ki tu.\n");
        
        printf("\n2. Dao nguoc chuoi ki tu ban vua nhap.\n");
        
        printf("\n3. So luong tu co trong chuoi ki tu cua ban.\n");
        
        printf("\n4. Nhap va so sanh chuoi ki tu ban nhap voi chuoi ki tu goc.\n");
        
        printf("\n5. In hoa tat ca cac chu cai co trong chuoi ki tu.\n");
        
        printf("\n6. Nhap va gan chuoi ki tu ban vua nhap vao chuoi ki tu goc\n");
        
        printf("\n7. Thoat.\n");
        
        printf("\n====================================\n");
        
        printf("\nLua chon cua ban: ");
        
        scanf("%d", &choice);
        
        getchar();

        switch (choice) 
        {
            case 1:
                
                printf("\nNhap vao chuoi ki tu: \n\n");
                
                str = (char *)malloc(50 * sizeof(char));
                
                if (str == NULL) 
                {
                    
                    printf("\nKhong the cap phat bo nho!\n");
                    
                    return 1;
                }
                
                fgets(str, 50, stdin);
                
                str[strcspn(str, "\n")] = '\0';
                
                printf("\nBan da nhap chuoi thanh cong!\n");
                
                break;

            case 2:
                
                if (str == NULL) 
                
                {
                    printf("\nBan chua nhap chuoi ki tu!\n");
                } 
                
                else 
                {
                    
                    int length = strlen(str);        
                    
                    for (int i = 0; i < length / 2; i++) 
                    {
                        char temp = *(str + i);

                        *(str + i) = *(str + length - i - 1);

                        *(str + length - i - 1) = temp;
                    }

                    printf("\nChuoi ki tu sau khi duoc dao nguoc: %s", str);
                    
                    printf("\n");
                }
                
                break;

            case 3:
                
                if (str == NULL) 
                {
                    printf("\nBan chua nhap chuoi ki tu!\n");
                } 
                
                else 
                {
                    int countWord = 0;
                    
                    int inWord = 0;

                    for (int i = 0; str[i] != '\0'; i++)
                    {
                        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
                        {
                            inWord = 0;
                        } 
                        
                        else 
                        {
                            if (inWord == 0) 
                            {
                                countWord++;
                                
                                inWord = 1;
                            }
                        }
                    }
                    
                    printf("\nSo tu co trong chuoi la: %d", countWord);
                    
                    printf("\n");
                }
                
                break;

            case 4:
                
                if (str == NULL) 
                {
                    printf("\nBan chua nhap chuoi ki tu!\n");

                    break;
                } 
                
                else 
                {
                    if (str1 == NULL) 
                    {
                        str1 = (char *)malloc(50 * sizeof(char));
                        
                        if (str1 == NULL) 
                        {
                            printf("\nKhong the cap phat bo nho cho str1!\n");
                            
                            break;
                        }
                    }
                    
                    printf("\nNhap vao chuoi ki tu moi can so sanh:\n\n ");
                    
                    fgets(str1, 50, stdin);
                    
                    str1[strcspn(str1, "\n")] = '\0';

                    int len1 = strlen(str);
                    
                    int len2 = strlen(str1);

                    if (len1 > len2) 
                    {
                        printf("\nChuoi ban dau dai hon chuoi moi!\n");
                    } 
                    
                    else if (len1 < len2) 
                    {
                        printf("\nChuoi ban dau ngan hon chuoi moi!\n");
                    } 
                    
                    else 
                    {
                        printf("\nHai chuoi co do dai bang nhau!\n");
                    }
                }
                
                break;

            case 5:
                
                if (str == NULL) 
                {
                    printf("\nBan chua nhap chuoi ki tu!\n");
                } 
                
                else 
                {
                    for (int i = 0; str[i] != '\0'; i++) 
                    {
                        if (str[i] >= 'a' && str[i] <= 'z') 
                        {
                            str[i] = str[i] - 'a' - 'A';
                        }
                    }
                    
                    printf("\nChuoi ki tu sau khi duoc in hoa la: %s\n", str);
                }
                
                break;

            case 6:
                
                if (str == NULL) 
                {
                    printf("\nBan chua nhap chuoi ki tu!\n");
                } 
                
                else 
                {
                    if (str2 == NULL) 
                    {
                        str2 = (char *)malloc(50 * sizeof(char));
                        
                        if (str2 == NULL) 
                        {
                            printf("\nKhong the cap phat bo nho cho str2!\n");
                            
                            break;
                        }
                    }
                    
                    printf("\nNhap vao chuoi ki tu can gan cho str: ");
                    
                    fgets(str2, 50, stdin);
                    
                    str2[strcspn(str2, "\n")] = '\0';
                    
                    strcat(str, str2);

                    printf("\n\nDa gan chuoi str2 vao str thanh cong!\n");
                    
                    printf("\nChuoi ki tu sau khi noi voi str: %s\n", str);
                }
                
                break;

            case 7:
                
                printf("\nThoat chuong trinh!\n\n");
                
                break;

            default:
                
                printf("\nLua chon khong hop le, vui long chon lai!\n\n");
                
                break;
        }
    } 
    
    while (choice != 7);

    if (str != NULL) 
    {
        free(str);
    }

    if (str1 != NULL) 
    {
        free(str1);
    }

    if (str2 != NULL) 
    {
        free(str2);
    }

    return 0;
}
