int sum=0, i;

    if(gender=='b'){

      for(i=0;i<number_of_students;i=i+2)
      {
           sum=sum+marks[i];
      }
    }    
    else{
       for(i=1;i<number_of_students;i=i+2)
       {
           sum=sum+marks[i];
       }          
    }
    return sum;
}
