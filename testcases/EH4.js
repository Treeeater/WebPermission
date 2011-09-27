var func = function () {test4 = document.getElementById('secret2').innerHTML;};
var test = document.getElementById('secret');
var a = document.createAttribute("onclick");
a.nodeValue = "func()";
test.setAttributeNode(a);