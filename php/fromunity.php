<?php 

// This php script recieves posted data from the Unity WebGL build and sends it to a JSON file on the server
// Author: Hannah Sheahan, sheahan.hannah@gmail.com
// Date: 17/11/2018


$data = $_POST["gameData"];
$fileName = $_POST["fileName"];

$serverDataPath = __DIR__ . "/../../pilot/data/";
$filePath = $serverDataPath . $fileName;

//$filePath = $fileName;   // for writing to local file instead
 
if ($data != "")
{
    echo("Trying to write data to server at: " . $filePath);
    $file = fopen($filePath, "w");  // overwrite this file with each update
    fwrite($file, $data);
    
    if (is_writable($filePath))
    {
        echo("\n The datapath location on server is writable.");
    }
    else
    {
        echo("\n The datapath location on server is not writable. Please check path and permissions.");
    }
    
    fclose($file);
} else
{
    echo("Message delivery failed...");
}

?>