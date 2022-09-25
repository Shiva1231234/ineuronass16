Assignment =16
Q=1
/*

#include <stdio.h>

void main() {
    // Write C code here
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("enter 4 number of matrix\n");
    for(i=0;i<=1;i++)
    {
    for(j=0;j<=1;j++)
    {
    scanf("%d",&a[i][j]);
    }
    }
    printf("enter 4 number of matrix");
    for(i=0;i<=1;i++)
    {
    for(j=0;j<=1;j++)
    {
    scanf("%d",&b[i][j]);
    }
    }
    printf("sum of matrix");
    for(i=0;i<=1;i++)
    {
    for(j=0;j<=1;j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    printf("%d\n",c[i][j]);
}
}
}

Q=2
/*

#include <stdio.h>

void main() {
    // Write C code here
    int a[2][2],b[2][2],c[2][2],i,j,k,sum;
    printf("enter 4 number of matrix\n");
    for(i=0;i<=1;i++)
    {
    for(j=0;j<=1;j++)
    {
    scanf("%d",&a[i][j]);
    }
    }
    printf("enter 4 number of matrix");
    for(i=0;i<=1;i++)
    {
    for(j=0;j<=1;j++)
    {
    scanf("%d",&b[i][j]);
    }
    }
    printf("multiply of matrix");
    for(i=0;i<=1;i++)
    for(j=0;j<=1;j++)
    {
        sum=0;
        for(k=0;k<=1;k++)
        sum=sum+a[i][k]*b[k][j];
        c[i][j]=sum;
        printf("%d\n",c[i][j]);
}

}
*\
Q=3
/*
#include <stdio.h>

int  main() {
    // Write C code here
    int a[2][2],transpose[2][2],i,j;
    printf("enter 4 number of matrix\n");
    for(i=0;i<=1;i++)
    {
    for(j=0;j<=1;j++)
    {
    scanf("%d",&a[i][j]);
    }
    }

    printf("transpose  of matrix");
    for(i=0;i<=1;i++)
    for(j=0;j<=1;j++)
    {
        transpose[j][i]=a[i][j];
    }
    for(i=0;i<=1;i++)
    for(j=0;j<=1;j++)
    {
        printf("%d\n",transpose[i][j]);
}
}
*\
Q=4
/*

#include <stdio.h>

int  main() {
    // Write C code here
    int a[3][3],i,j,sum=0;
    printf("enter 4 number of matrix\n");
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
    {
        printf("enter element in the pocket [%d] [%d]\t",i,j);
    scanf("%d",&a[i][j]);
    }
    }


    printf("sum of diagonal in  matrix");
    for(i=0;i<=2;i++)

    for(j=0;j<=2;j++)

     if(i==j)
     {
         sum=sum+a[i][j];
     }
    printf(" [%d]\t",sum);


}

Q=5
/*
#include <stdio.h>

void main()

   {
     int i,j,arr1[50][50],sum=0,n,m=0;

       printf("\n\nFind sum of left diagonals of a matrix :\n");
       printf("---------------------------------------\n");

	 printf("Input the size of the square matrix : ");
     scanf("%d", &n);
         m=n;
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }
// calculate the sum of left diagonals
	 for(i=0;i<n;i++)
	 {
           m=m-1;
	   for(j=0;j<n ;j++)
            {
              if (j==m)
                {
                  sum= sum+arr1[i][j];
                }

            }
	 }
       printf("Addition of the  left Diagonal elements is :%d\n",sum);
    }

    Q=6
    /*
    /*
    #include <stdio.h>

void main()
{
     int i,j,k,arr1[10][10],rsum[10],csum[10],n;

       printf("\n\nFind the sum of rows an columns of a Matrix:\n");
       printf("-------------------------------------------\n");


     printf("Input the size of the square matrix : ");
     scanf("%d", &n);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

     /* Sum of rows */
     for(i=0;i<n;i++)
     {
	  rsum[i]=0;
	  for(j=0;j<n;j++)
	  rsum[i]=rsum[i]+arr1[i][j];
     }

      /* Sum of Column */
      for(i=0;i<n;i++)
      {
	  csum[i]=0;
	  for(j=0;j<n;j++)
		csum[i]=csum[i]+arr1[j][i];
      }

      printf("The sum or rows and columns of the matrix is :\n");
      for(i=0;i<n;i++)
      {
	   for(j=0;j<n;j++)
	      printf("% 4d",arr1[i][j]);
	   printf("% 8d",rsum[i]);
	   printf("\n");
       }
       printf("\n");
	    for(j=0;j<n;j++)
             {
	        printf("% 4d",csum[j]);
             }
            printf("\n\n");
  }
  *\
  Q=7
  /*
  #include <stdio.h>

void main()
   {
  int arr1[10][10],i,j,n;
  float determinant=0;


       printf("\n\nDisplay the lower triangular of a given matrix :\n");
       printf("----------------------------------------------------\n");


     printf("Input the size of the square matrix : ");
     scanf("%d", &n);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

   printf("\nSetting zero in lower triangular matrix\n");
   for(i=0;i<n;i++){
      printf("\n");
      for(j=0;j<n;j++)
           if(i<=j)
             printf("% 4d",arr1[i][j]);
           else
             printf("% 4d",0);
  }
       printf("\n\n");
}
*\
Q=8
/*
#include <stdio.h>

void main()
 {
  int arr1[10][10],i,j,n;
  float determinant=0;


 printf("\n\nDisplay the upper triangular of a given matrix :\n");
       printf("----------------------------------------------\n");

     printf("Input the size of the square matrix : ");
     scanf("%d", &n);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

   printf("\nSetting zero in upper triangular matrix\n");
   for(i=0;i<n;i++)
     {
      printf("\n");
      for(j=0;j<n;j++)
           if(i>=j)
             printf("% 4d",arr1[i][j]);
           else
             printf("% 4d",0);
  }
       printf("\n\n");
}
*\
Q=9
/*
#include <stdio.h>

/*A sparse martix is matrix which  has more zero elements than nonzero elements */
/*
void main ()
{
	static int arr1[10][10];
	int i,j,r,c;
	int ctr=0;
     printf("\n\nDetermine whether a matrix is a sparse matrix :\n");
     printf("----------------------------------------------------\n");
     printf("Input the number of rows of the matrix : ");
     scanf("%d", &r);
     printf("Input the number of columns of the matrix : ");
     scanf("%d", &c);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
			if (arr1[i][j]==0)
			{
				++ctr;
			}
            }
        }
	if (ctr>((r*c)/2))
	{
		printf ("The given matrix is sparse matrix. \n");
	}
	else
		printf ("The given matrix is not a sparse matrix.\n");

	printf ("There are %d number of zeros in the matrix.\n\n",ctr);
}
*\

