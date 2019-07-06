package Atcoder

fun main(args: Array<String>){
    val (N, M) = readLine()!!.split(' ').map{ it.toLong()}
    val store = (1..N).map { readLine()!!.split(' ').map{ it.toLong() } }.sortedBy { it.first() }

    var cnt = M
    var ans = 0L

    for (i in store) {
        when {
            cnt < i[1] -> {
                ans += i[0] * cnt
                println(ans)
                return
            }
            else -> {
                ans += i[0] * i[1]
                cnt -= i[1]
            }
        }
    }

    println(ans)


}