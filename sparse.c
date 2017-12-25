#include<stdio.h>
struct sp
{
	int row, col, value;
};
void transpose(struct sp a[], struct sp b[])
{
	int i, j, n, k=1;
	b[0].row=a[0].row;
	b[0].col=a[0].col;
	b[0].value=a[0].value;
	n=a[0].value;
	if(n>0)
	{
		for(i=0; i<=n; i++)
		{
			for(j=1; j<=n; j++)
			{
				if(a[j].col==i)
				{
					b[k].row=a[j].col;
					b[k].col=a[j].row;
					b[k++].value=a[j].value;
				}
			}
		}
	}
}
int main()
{
	int i, j, k=1, rows, cols, count=0;
	printf("Enter the rows and cols : ");
	scanf("%d%d", &rows, &cols);
	int mat[rows][cols], tran[rows][cols];
	printf("Enter the matrix : \n");
	for(i=0; i<rows; i++)
		for(j=0; j<cols; j++)
			{
				scanf("%d", &mat[i][j]);
				if(mat[i][j]!=0)
					count++;
			}
	struct sp a[count+1], b[count+1];
	a[0].row=rows;
	a[0].col=cols;
	a[0].value=count;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(mat[i][j]!=0)
			{
				a[k].row=i;
				a[k].col=j;
				a[k++].value=mat[i][j];
			}
		}
	}
	transpose(a, b);
	printf("\n   SPARSE_MATRIX_A\nRow\tCol\tValue\n");
	for(i=0; i<=count; i++)
		printf("%d\t%d\t%d\n", a[i].row, a[i].col, a[i].value);
	printf("\n\n");
	printf("\nSPARSE_MATRIX_B (Transpose of A)\nRow\tCol\tValue\n");
	for(i=0; i<=count; i++)
		printf("%d\t%d\t%d\n", b[i].row, b[i].col, b[i].value);
	for(i=0; i<rows; i++)
		for(j=0; j<cols; j++)
			tran[i][j]=0;
	for(i=1; i<=count; i++)
		tran[b[i].row][b[i].col] = b[i].value;
	printf("\n\nTRANSPOSE OF A\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d ", tran[i][j]);
		}
		printf("\n");
	}
}