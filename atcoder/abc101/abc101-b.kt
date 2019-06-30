package Atcoder

fun main(args: Array<String>){
    val n = readLine()!!
    val sn = n.map{ it.toString().toInt() }.sum()
    println( if(n.toInt() % sn == 0) "Yes" else "No")
}