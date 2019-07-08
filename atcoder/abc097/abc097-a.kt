fun main(args: Array<String>){
    val (a, b, c, d) = readLine()!!.split(' ').map{ it.toInt() }
    when {
        Math.abs(a-b) <= d && Math.abs(c-b) <= d || Math.abs(a-c) <= d-> {
            println("Yes")
        }
        else -> {
            println("No")
        }
    }

}