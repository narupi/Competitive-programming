fun main(args: Array<String>){
    val n = readLine()!!.toLong()
    val l = readLine()!!.split(' ').map{ it.toLong()}
    var ans = l[0]
    for (i in 1 until l.size){
        ans = gcd(ans, l[i])
    }
    println(ans)
}

fun gcd(a: Long, b:Long): Long{
    return if(b >   0L){
        gcd(b, a%b.toLong())
    } else{
        a
    }
}