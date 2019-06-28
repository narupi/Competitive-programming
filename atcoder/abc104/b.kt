fun main(args: Array<String>){
    val s:String = readLine()!!.toString()
    print(if(s.first() == 'A'  && s.subSequence(2, s.length-1).filter {it == 'C'}.length == 1 && s.filter{it != 'A' && it != 'C'}.filter{ it.isUpperCase() }.isEmpty() )
        "AC"
        else "WA"
    )
}