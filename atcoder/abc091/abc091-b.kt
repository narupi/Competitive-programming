fun main(args: Array<String>){
    val N = readLine()!!.toInt()
    val s = (1..N).map { readLine()!! }
    val M = readLine()!!.toInt()
    val t = (1..M).map { readLine()!! }
    val lst = mutableSetOf<String>()
    lst.addAll(s)
    lst.addAll(t)


    val ans = lst.map{
        s.count { item -> item == it } - t.count{ item -> item == it}
    }.max()!!

    println( if(ans > 0 ) ans else 0)


}