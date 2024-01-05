import java.util.*;

 class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int n = scanner.nextInt();
        int[] a = new int[n]; 
        for(int i = 0; i < n; i++) { 
            a[i] = scanner.nextInt();
        }  
        Stack<Integer> st = new Stack<>();//pushing the index only 
        st.push(n-1); 

        int[] nge = new int[a.length]; 
        nge[n-1] = n; 
        
        for(int i = n-2; i >= 0; i--) {  
            while(st.size() > 0  && a[i] >= a[st.peek()]) { 
                st.pop(); 
            }
            if(st.size() == 0) { 
                nge[i] = n; 
            } else { 
                nge[i] =  st.peek(); 
            } 
            st.push(i);
        }
        for(int i = 0; i < nge.length; i++) { 
            System.out.print(nge[i] + " ");
        } 
    }
}
