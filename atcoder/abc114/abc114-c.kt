fun main(args: Array<String>){
    val N = readLine()!!.toLong()
    var ans = 0L


    fun dfs(s:Long){
        if(s> N){return }
        if(s.toString().contains("7") && s.toString().contains("5") && s.toString().contains("3")){
            ans++
        }
        dfs(s*10+3)
        dfs(s*10+5)
        dfs(s*10+7)
    }
    dfs(0)
    println(ans)
}
