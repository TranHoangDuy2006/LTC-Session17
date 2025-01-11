#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int n, i, choice;
    
    char *str = NULL;

    do 
    {
        printf("\n=============== MENU ===============\n");
        
        printf("\n1. Nhap vao chuoi ki tu.\n");
        
        printf("\n2. Hien thi chuoi ki tu.\n");
        
        printf("\n3. So luong chu cai trong chuoi ki tu.\n");
        
        printf("\n4. So luong chu so trong chuoi ki tu.\n");
        
        printf("\n5. So luong ki tu dac biet trong chuoi ki tu.\n");
        
        printf("\n6. Thoat\n");

        printf("\n====================================\n");
        
        printf("\nLua chon cua ban: ");
        
        scanf("%d", &choice);

        getchar();

        switch (choice) 
        {
            case 1:
                
                char str1[50];

                printf("\nNhap vao chuoi ki tu: \n\n");
                
                fgets(str1, sizeof(str1), stdin);

                str1[strcspn(str1, "\n")] = '\0';

                str = (char *)malloc(strlen(str1) + 1);

                if(str == NULL)
                    {
                        printf("\nKhong the cap phat bo nho!\n");

                        return 1;
                    }

                    strcpy(str, str1);

                    printf("\nBan da nhap chuoi thanh cong!\n");
                
                break;

            case 2:
                
                if (str == NULL) 
                    {
                        printf("\nBan chua nhap chuoi ki tu!\n");
                    }
                        else
                            {
                                printf("\nChuoi ki tu ban vua nhap la: \n");

                                printf("\n%s", str);
                            } 
                    
                    printf("\n");
                
                break;

            case 3:
            
            {
                
                if(str == NULL)
                    {
                        printf("\nBan chua nhap chuoi ki tu!");

                        return 1;
                    }
                        else
                            {
                                int countLetterDigit = 0;

                                for(char *p = str; *p != '\0'; p++)
                                    {
                                        if(*p >= 'a' && *p <= 'z' || *p >= 'A' && *p <= 'Z')
                                            {
                                                countLetterDigit++;
                                            }
                                    }
                            
                                    printf("\nSo chu cai co trong chuoi ki tu la: %d", countLetterDigit);

                                    printf("\n");
                            }
                
                break;
            }

            case 4:
                
                {
                
                if(str == NULL)
                    {
                        printf("\nBan chua nhap chuoi ki tu!");

                        return 1;
                    }
                        else
                            {
                                int countNumber = 0;

                                for(char *p = str; *p != '\0'; p++)
                                    {
                                        if(*p >= '0' && *p <= '9')
                                            {
                                                countNumber++;
                                            }
                                    }
                            
                                    printf("\nSo chu so co trong chuoi ki tu la: %d", countNumber);

                                    printf("\n");
                            }
                
                break;
            }

            case 5:
                
                {
                
                if(str == NULL)
                    {
                        printf("\nBan chua nhap chuoi ki tu!");

                        return 1;
                    }
                        else
                            {
                                int specialEscapeChar = 0;

                                for(char *p = str; *p != '\0'; p++)
                                    {
                                        if(!(*p >= 'a' && *p <= 'z' || *p >= 'A' && *p <= 'Z' || *p >= '0' && *p <= '9'))
                                            {
                                                specialEscapeChar++;
                                            }
                                    }
                            
                                    printf("\nSo ki tu dac biet co trong chuoi la: %d", specialEscapeChar);

                                    printf("\n");
                            }
                
                break;
            }
            case 6:
                
                printf("\nThoat chuong trinh\n");
                
                break;

            default:
                
                printf("\nLua chon khong hop le, vui long chon lai!\n");
                
                break;
        }
    } while (choice != 6);

    if (str != NULL) 
        {
            free(str);
        }
    
    return 0;
}
