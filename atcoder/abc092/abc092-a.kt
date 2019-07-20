package Atcoder

fun main(args: Array<String>){
    val a = readLine()!!.toInt()
    val b = readLine()!!.toInt()
    val c = readLine()!!.toInt()
    val d = readLine()!!.toInt()
    println( (if (a < b) a else b ) + (if (c < d) c else d) )
}