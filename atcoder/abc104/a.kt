
fun main(args: Array<String>) {
    val r = readLine()!!.toInt()
    when {
        r < 1200 -> {
            print("ABC")
        }
        r < 2800 -> {
            print("ARC")
        }
        else -> {
            print("AGC")
        }

    }

}