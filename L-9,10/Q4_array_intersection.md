This problem say we need to find the intersection(common element)  in two array A(n size) and B(m size) and if not present  then print -1 and ye jo array vo sorted in no-dec order.
SOl:
METHOD -1  
        LOGIC : let say A=[1|2|3] abd B=[3|4]
            toh me 1 ho pick krruga and compare krruga B se ki present h ki nhi, similarily baki sb elements ko  bi check krruga and if present hoga to 
            print kr dunga warna and B array me us number ko update krduga koi temp value se. 
            B = [temp|4] and dono array sorted(asc order) hai, matllab age A array ka element < B array ke element then break qki aage 
        **par ye solution TLE marega i.e optimic sultion nhi h**
METHOD - 2 : TWO POINTER APPROACH
        LOGIC : case 1 - arr[i]<arr[j] => i++
                case 2 - arr[i]=arr[j] => print & i++ & j++
                case 3 - arr[i] >arr[j] =>j++
    
**link for the question and solution is : [https://bit.ly/3Il0c7n]**
