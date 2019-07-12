fun main(args: Array<String>){
    val (n, x) = readLine()!!.split(' ').map{ it.toInt() }
    val lst = (1..n).map{ readLine()!!.toInt() }
    println( n+ (x-lst.sum())/lst.min()!! )


}