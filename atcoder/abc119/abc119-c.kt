fun main(args: Array<String>) {
    val (n, a, b, c) = readLine()!!.split(" ").map { it.toInt() }
    val l = (1..n).map { readLine()!!.toInt() }
    println(Dfs(n,a,b,c,l).solve())
}

private class Dfs(val N: Int, val A:Int, val B:Int, val C:Int, val lst: List<Int>){
    val INF = 1000000000
    fun solve(): Int{
        return dfs(0, 0, 0, 0)
    }
    fun dfs(cur: Int, a: Int, b: Int, c:Int) : Int{
        if (cur == N){
            return if (listOf(a,b,c).min()!! > 0){
                Math.abs(a - A) + Math.abs(b - B) + Math.abs(c - C) - 30
            }else{
                INF
            }
        }

        val ret0 = dfs(cur + 1, a, b, c)
        val ret1 = dfs(cur + 1, a + lst[cur], b, c) + 10
        val ret2 = dfs(cur + 1, a, b + lst[cur], c) + 10
        val ret3 = dfs(cur + 1, a, b, c + lst[cur]) + 10
        return listOf(ret0, ret1, ret2, ret3).min()!!
    }
}