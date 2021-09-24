#iclude<iostrem>
using namespace std;
int main()
{
    int a[3][3];
    int x[1][10];
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin>>a[i][j];
            for(int y=0;y<1;y++)
            {
                for(int w=0;w<10;y++)
                {
                    int x[y][w]=a[i][j];
                }
            }
        }
    }
return 0;
}
