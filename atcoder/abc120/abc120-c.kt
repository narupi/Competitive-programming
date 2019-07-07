package Atcoder

fun main(args: Array<String>){
    val S = readLine()!!
    val c0 = S.count { it == '0' }
    val c1 = S.count { it == '1' }
    println(2 * Math.min(c0, c1))


}