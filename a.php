@ -0,0 +1,10 @@
#!/usr/bin/php
<?php
foreach (file('/usr/share/dict/words') as $line) {
    // 文字列 "xy" が含まれるかどうかをチェック
    if (strpos($line, 'xy') !== false) {
        // 単語を表示
        echo $line;
    }
}
?>
