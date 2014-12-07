<html><head><title></title>
<link rel="stylesheet" type="text/css" href="style.css">
<script>
//ptrns = [{'n':'Creepers','e':0,'id':1},{'n':'Fade','e':1,'id':2},];
ptrns = %ptrnjson%;

function addInput(ptrn){
	var form = document.getElementById('enaf');
	form.innerHTML = form.innerHTML + "Enable:"
	var inputsel = document.createElement("INPUT");
	if(ptrn.e==1){
		inputsel.setAttribute("checked","true");	
	}
	inputsel.setAttribute("type","checkbox");
	inputsel.setAttribute("name","enable_"+ptrn.id);
	inputsel.setAttribute("value",1);
	form.appendChild(inputsel);
	form.innerHTML = form.innerHTML + " Select:  "
	var inputsel = document.createElement("INPUT");
	inputsel.setAttribute("type","radio");
	inputsel.setAttribute("name","sel");
	inputsel.setAttribute("value",ptrn.id);
	form.appendChild(inputsel);
	form.innerHTML = form.innerHTML +"  ---   "+ ptrn.n;
	form.appendChild(document.createElement("br"));
}

window.onload = function(e){

	var form = document.getElementById('enaf');
	ptrns.forEach(addInput);
	var gobutton = document.createElement("INPUT");
	gobutton.setAttribute("type","submit");
	gobutton.setAttribute("value","Set settings");
	form.appendChild(gobutton);
}
</script>
</head>
<body>
<div id="main">
<h1>G35 Strand</h1>
<p>
Set an LED or the pattern!
</p>
Enable Patterns:<br>
<form method="post" action="g35_pattern.cgi" id="enaf">
Enable Pattern Rotation: <input type="checkbox" checked="True" name="rotate" value="y"><br>
</form>
Set Single LED:<br>
<form method="post" action="g35_led.cgi">
LED: <input type="text" name="addr">
R: <input type="text" name="r">
G: <input type="text" name="g">
B: <input type="text" name="b">
Brightness: <input type="text" name="br"><br>
Fill all: <input type="checkbox" name="fill" value="y">
<input type="submit" value="Go!">
</form>
</div>
</body></html>
