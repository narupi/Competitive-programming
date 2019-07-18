package Atcoder

fun main(args: Array<String>){
    val (N, K) = readLine()!!.split(" ").map(String::toInt)
    val h = (1..N).map{ readLine()!!.toInt() }.sorted()
    println( (0..N-K).map { h[it+K-1] - h[it] }.min()!! )
}