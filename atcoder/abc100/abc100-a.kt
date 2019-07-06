fun main(args : Array<String>){
    val (A, B) = readLine()!!.split(' ').map{ it.toInt() }
    print( if( A <= 8 && B <= 8) "Yay!" else ":(" )

}