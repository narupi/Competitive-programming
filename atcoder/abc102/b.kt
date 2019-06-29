fun main(args: Array<String>) {
    val N = readLine()!!.toInt()
    val A = readLine()!!.split(' ').map(String::toInt).sorted()
    print(A.max()!! - A.min()!!)
}
