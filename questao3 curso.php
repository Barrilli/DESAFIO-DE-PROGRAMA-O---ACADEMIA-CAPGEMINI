<?php
$nome = $_POST['nome'];
echo str_shuffle($nome);
?>
<form method="post" action="<?php echo $_SERVER["PHP_SELF"];?>"> 
  <b>Digite o nome: </b> <input type="text" name="nome">

</form>