fun main(args: Array<String>){
    val (N, Q) = readLine()!!.split(" ").map{ it.toInt() }
    val s = readLine()!!
    val lr = (1..Q).map { readLine()!!.split(" ").map { it.toInt() -1 }}

    val ac = IntArray(N)

    //Cumulative sum
    for (i in 1..N-1) {
        if(s[i-1] == 'A' && s[i] == 'C') ac[i] = ac[i-1] + 1
        else ac[i] = ac[i-1]
    }

    val ans = lr.map {
        val (l, r) = it
        ac[r] - ac[l]
    }
    ans.forEach { println(it) }
}
