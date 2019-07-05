fun main(args: Array<String>){
    val (a, b) = readLine()!!.split(' ').map{it.toInt()}
    println( (b-a) * (b - a + 1) / 2 - b )

}