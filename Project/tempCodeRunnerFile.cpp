
                case 5:
                 return 0;
                default: printf("Invalid choice!\n");
            }
            return 0;
        }

        else
        {
            attemp--;
            printf("\nInvalid username or password!\n");
        }
    }
    printf("Too many attemp. try again later!!!\n");
}

