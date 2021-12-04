<!DOCTYPE html>
<html>
<head>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>3DAW</h1>
    <?php

        $nomes = array("Fulano", "Beltrano", "Karen");
        $emails = array("fulano@faeterj-rio.edu.br", "beltrano@faeterj-rio.edu.br", "karen@faeterj-rio.edu.br");
        $medias = array(7.5, 7.4, 6.2);

       $nome1 = "Fulano";
       $nome2 = "Beltrano";
       $nome3 = "Karen";
       $email1 = "fulano@faeterj-rio.edu.br";
       $email2 = "beltrano@faeterj-rio.edu.br";
       $email3 = "karen@faeterj-rio.edu.br";
       $media1 = 7.5;
       $media2 = 7.4;
       $media3 = 6.2;
    ?>

    <table>
        <tr>
            <td>nome</td>
            <td>email</td>
            <td>media</td>
        </tr>
        <tr>
            <td><?php echo $nome1 ?></td>
            <td><?php echo $email1 ?></td>
            <td><?php echo $media1 ?></td>
        </tr>
        <tr>
            <td><?php echo $nome2 ?></td>
            <td><?php echo $email2 ?></td>
            <td><?php echo $media2 ?></td>
        </tr>
        <tr>
            <td><?php echo $nome3 ?></td>
            <td><?php echo $email3 ?></td>
            <td><?php echo $media3 ?></td>
        </tr>
    </table>
    <br>
    <table>
        <tr>
            <td>nome</td>
            <td>email</td>
            <td>media</td>
        </tr>
        <?php
            for ($x = 0; $x <= 4; $x++){
                echo "<tr>";
                echo "<td>$nomes[$x]</td>";
                echo "<td>$emails[$x]</td>";
                echo "<td>$medias[$x]</td>";
                echo "</tr>";
            }
        ?>
    </table>
</body>
</html>