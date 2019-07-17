fun main(args: Array<String>) {
    val (A, B, K) = readLine()!!.split(" ").map(String::toInt)
    for(i in A..B){
        if(i < A+K || i > B - K){println(i)}
    }
}