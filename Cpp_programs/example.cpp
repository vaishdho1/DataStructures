 #include <iostream>
    #include <iomanip>
    using namespace std;
    static int stackdepth=0;
    void mergesort(int[],int,int);
    void merge(int[],int,int,int);
    void  space(int);
    int main(int argc,char *argv[])
    {
        int a[8]={5,7,1,4,9,3,2,0};
        mergesort(a,0,7);
        //for(int i=0;i<10;i++)
    //  cout<<a[i]<<endl;
        return 0;
    }
    void mergesort(int a[],int low,int high)
    {
        int mid;

        if(low<high)
        {

            mid=(low+high)/2;
            space(stackdepth);
            cout<<"First Recursion Enter";
            cout<<" Low :"<<low<<" Mid :"<<mid<<endl;
            stackdepth++;
            mergesort(a,low,mid);
            stackdepth--;
            space(stackdepth);
            cout<<"First Recursion Exit";
            cout<<" Low :"<<low<<" Mid :"<<mid<<endl;
            space(stackdepth);
            stackdepth++;
            cout<<"Second Recursion Enter";
            cout<<" Mid+1 :"<<mid+1<<" High :"<<high<<endl;
            mergesort(a,mid+1,high);
            stackdepth--;
            space(stackdepth);
            cout<<"Second Recursion Exit";
            cout<<" Low :"<<mid+1<<" High :"<<high<<endl;
            space(stackdepth);
            cout<<"Merge Low :"<<low<<" Mid :"<<mid<<"High :"<<high<<endl;
            merge(a,low,mid,high);
            cout<<endl;
            space(stackdepth);
            cout<<"------------------------------------------------------------------------------------------"<<endl;
        }
    }
    void space(int stackdepth)
    {
        for(int i=0;i<stackdepth;i++)
        cout<<"                     ";

    }
    void merge(int a[],int low,int mid,int high)
    {
    //  cout<<endl;
    //  cout<<"Merging Begins"<<endl;
        int b[8];
        int i,k,j;
        i=low;k=low;j=mid+1;
        while(i<=mid && j<=high)
        {
            if(a[i]<a[j])
            {
                    b[k++]=a[i++];
            }
            else
            {
                b[k++]=a[j++];
            }
        }
        while(i<=mid)
            b[k++]=a[i++];
        while(j<=high)
            b[k++]=a[j++];
        space(stackdepth);
        for(int i=low;i<=high;i++)
        {
            a[i]=b[i];
        cout<<a[i]<<" ";
        }
            //cout<<"Low :"<<low<<" Mid :"<<mid<<" High :"<<high<<endl;
        //  cout<<"Merging Ends"<<endl;
        //  cout<<endl;
    }
