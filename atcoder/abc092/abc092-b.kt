package Atcoder

fun main(args: Array<String>){
    val N = readLine()!!.toInt()
    val (D, X) = readLine()!!.split(' ').map(String::toInt)
    val c = (1..N).map { (D - 1) / readLine()!!.toInt() + 1 }
    println(c.sum() + X)
}