import java.util.*;
import java.lang.*;
import java.io.*;

class ZMBI3
{
	public static void main(String[] args)throws IOException {
		
		Scanner ob=new Scanner(System.in);
		int n,k,d,i,start,end,maxlength,currlength,t;
		t=ob.nextInt();
		while(t-->0) {
			n=ob.nextInt();
			k=ob.nextInt();
			d=ob.nextInt();
			int arr[]=new int[n];
			for(i=0;i<n;i++) {
				arr[i]=ob.nextInt();
			}
			start=0;
			end=0;
			maxlength=0;
			currlength=0;
			while(end<n) {
                System.out.println(start+"\n"+end+"\n");
				if(k<0) {
					while(arr[start]>=d)
					start++;
					k++;
					end++;
					start++;
					currlength=end-start;
				}
				else {
					if(arr[end]<d) {
						k--;
					}
					if(k>=0){
	                    end++;
	                    currlength++;
	                }
				}
				if(maxlength<currlength)
                    maxlength=currlength;
                    
            }
        
			System.out.println(maxlength+"\n");
		}
	}
}
