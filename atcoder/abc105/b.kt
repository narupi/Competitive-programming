fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    when {
        n == 1 || n == 2 || n == 3 || n == 5 || n == 6 || n == 9 || n == 10 || n == 13 || n == 17 -> {
            println("No")
        }
        else -> {
            println("Yes")
        }
    }

}
