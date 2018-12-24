class Fib{
                   public static void main(String [] args){
                     
                             int a=0,b=1,i;
                             System.out.println(a);
                            System.out.println(b);
                            for(i=2;i<10;i++){
                           
                                  int c=a+b;
                                  a=b ;
                                  b=c;
                                  System.out.println(c);
                                                }
}
}