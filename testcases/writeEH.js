/*var str2write = "<iframe src='writeEH"+".html' onload='var scriptNode = document.createElement(\"script\"); scriptNode.text = \"var a = 0;\"; red = \"redirect.html\"; window.setTimeout(\"window.frames[0].location.replace(red)\",10);//window.frames[0].document.body.appendChild(scriptNode);'></ifr"+"ame>";
document.write(str2write);
*/
red = "http://www.cs.virginia.edu/~yz8ra/test/crossorigin.html"; 
window.frames[0].location.replace(red);
//document.getElementById("writeEHframe").setAttribute("src",red);