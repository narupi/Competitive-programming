fun main(args: Array<String>) {
    val (D, N) = readLine()!!.split(' ').map{it.toInt()}
    val C = Math.pow(100.0, D.toDouble()).toInt()
    println(if (N == 100) C * 101 else C * N)
}
