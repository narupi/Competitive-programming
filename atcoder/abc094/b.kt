fun main(args: Array<String>){
    val (n, m, x) = readLine()!!.split(' ').map{ it.toInt() }
    val a = readLine()!!.split(' ').map { it.toInt() }
    val left = a.count{ it < x}
    val right = a.count{ it > x}
    println(Math.min(left, right))
}
