package Atcoder

fun main (args: Array<String>){
    val N = readLine()!!.toInt()
    val h = readLine()!!.split(' ').map { it.toInt() }.toMutableList()

    var ans = 0


    for (i in 0 until N){
        while(true) {
            val c = h[i]
            if (c==0)break
            ans++
            (i until N ).takeWhile { h[it] >= c }.forEach{ h[it]--}

        }
    }

    println(ans)


}