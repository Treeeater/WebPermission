//var cwrite = "document.write('<scr'+'ipt>bbn=0;</scr'+'ipt>');"
//var str2write = "<div onclick='func()'"+">writtenByWrite<"+"/div><scr"+"ipt>var func = function() {test = top.document.getElementById('secret').innerHTML;};"+cwrite+"test2 = top.document.getElementById('secret2').innerHTML;</scr"+"ipt><scr"+"ipt src='naive.js'></sc"+"ript><scr"+"ipt>ccc=0</scr"+"ipt>";
third = 0;
func = function() { third = document.cookie };
func();
var str2write="<img src='test.png'"+"></im"+"g><di"+"v>abc</di"+"v><scr"+"ipt>fsa=0</scr"+"ipt><scr"+"ipt src='naive.js'></sc"+"ript>"+"<div onclick='func()'"+">writtenByWrite<"+"/div>";
document.write(str2write);
document.write("<scr"+"ipt>ccc=0</scr"+"ipt>");
alert("write");