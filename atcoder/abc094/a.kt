fun main(args: Array<String>){
    val (A, B, X) = readLine()!!.split(' ').map{ it.toInt() }
    println( if(A <= X && X <= A+B) "YES" else "NO")
}
