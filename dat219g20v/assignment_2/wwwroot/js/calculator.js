'use strict';

$(document).ready(function() {
    
    $(".numbers").click(function() {
        $("#display").val($("#display").val() + $(this).text());
    });

    $(".symbols").click(function() {
        $("#display").val(insertSymbol($("#display").val(), $(this).text()));
    });
    
    $("#equals").click(function () {
        $("#display").val(calculate($("#display").val()));
    });
    
    $("#reset").click(reset);
    
    $("#clear").click(clear);
});

function reset() {
    $('#display').val("");
}

function clear() {
    $('#display').val($('#display').val().slice(0, -1));
}

function calculate(str) {
    return eval(str)
}

function insertSymbol(str, char) {
    var last = str.charAt(str.length-1);
    if(last==='*' || last==='/' || last==='+' || last==='-' || last==='.' || (str.length===0 && last==="-")) {
        return str;
    }
    else
        return str + char;
}