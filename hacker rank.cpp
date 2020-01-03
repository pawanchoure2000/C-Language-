vector<int> gradingStudents(vector<int> grades,int count) {

vector<int> res;
int i , temp;
for(i=0;i<count;++i)
{
    if(res[i]>=38)
    {
        if(temp=res[i]%5>=3)    //3 4 
        {
            if(temp==4)
            res[i]+=1;
            else 
            res[i]+=2;
        }
        else{}
    }
    else
    {}

}

return res;
}

