package Atcoder

fun main(args: Array<String>){
    val s = readLine()!!
    print(s.count{it == '+'} - s.count{it == '-'})
}