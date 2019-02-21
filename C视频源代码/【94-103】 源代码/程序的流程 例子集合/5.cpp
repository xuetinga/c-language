int partion(int *a, int low, int high)
{
   int  value = a[low];
   int  t;

   while (low < high)
   {
      while( high > low && a[high] >= value)
		 high--;  //������8�е�whileȥִ�У�������ת��10��ȥִ��if���
      if(high != low)
      {
	       t = a[low];
	       a[low] = a[high];
	       a[high] = t;
      }

      while(low < high && a[low] <= value)
		low++;
      
	  if(low != high)
      {
       	 t = a[low];
      	 a[low] = a[high];
      	 a[high] = t;
      }
   }
   return low;
}