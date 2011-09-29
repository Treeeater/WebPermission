var a = document.createElement('a');
a.textContent = "clickme!";
document.body.appendChild(a);
a.setAttribute('href','javascript: test=document.getElementById("secret").innerHTML;');
document.getElementById('anchor').setAttribute('href', 'javascript: test2=document.getElementById("secret2").innerHTML;');