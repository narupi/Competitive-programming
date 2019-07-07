fun main(args: Array<String>) {
    val N = readLine()!!.toLong()
    val l = Array(5) { readLine()!!.toLong() }
    print((N-1) / (l.min()!!) + 5)
}