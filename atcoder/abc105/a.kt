fun main(args: Array<String>) {
    val (n, k) = readLine()!!.split(' ').map(String::toInt)
    println(if (n % k == 0) 0 else 1)
}