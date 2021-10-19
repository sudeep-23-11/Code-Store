//Generics
class data <T>
{
    private T obj;

    public void add(T obj)
    {
        this.obj=obj;
    }
    public T get()
    {
        return obj;
    }
}
public class Generics
{
    public static <E> void print(E[] arr)
    {
        int i;
        for(i=0;i<arr.length;i++)
        System.out.print(arr[i]+" ");
        System.out.println();
    }
    public static void main(String[] args)
    {
        data<Integer> d=new data<Integer>();
        d.add(10);
        System.out.println(d.get());
        Integer[] arr1={1, 2, 3, 4, 5};
        Character[] arr2={'A', 'B', 'C', 'D', 'E'};
        print(arr1);
        print(arr2);
    }
}