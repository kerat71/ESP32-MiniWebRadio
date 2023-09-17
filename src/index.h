/*
 *  index.h
 *
 *  Created on: 04.10.2018
 *  Updated on: 25.08.2023
 *      Author: Wolle
 *
 *  successfully tested with Chrome and Firefox
 *
 */

#ifndef INDEX_H_
#define INDEX_H_

#include "Arduino.h"

// file in raw data format for PROGMEM
//

const char index_html[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html>
<head>
    <title>MiniWebRadio</title>
    <meta name="generator" content="Bluefish 2.2.10" >
    <meta name="author" content="Wolle" >
    <meta name="date" content="2019-10-11T20:07:54+0200" >
    <meta name="copyright" content="schreibfaul1">
    <meta name="keywords" content="">
    <meta name="description" content="index">
    <meta name="ROBOTS" content="NOINDEX, NOFOLLOW">
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
    <meta http-equiv="content-style-type" content="text/css">
    <meta http-equiv="expires" content="0">

    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jqueryui/1.12.1/jquery-ui.min.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jsgrid/1.5.3/jsgrid.min.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jsgrid/1.5.3/jsgrid-theme.min.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/toastr.js/latest/css/toastr.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/jstree/3.2.1/themes/default/style.min.css">

<!--   <link rel="stylesheet" href="SD/css/jstree-style.css">  -->
<!--   <link rel="stylesheet" href="SD/css/jquery-ui.css">     -->
<!--   <link rel="stylesheet" href="SD/css/jsgrid.css">        -->
<!--   <link rel="stylesheet" href="SD/css//jsgrid-theme.css"> -->

    <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/jsgrid/1.5.3/jsgrid.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/xlsx/0.17.0/xlsx.full.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/FileSaver.js/1.3.8/FileSaver.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/toastr.js/latest/toastr.min.js"></script>
    <script src="https://code.jquery.com/ui/1.12.0/jquery-ui.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/jstree/3.2.1/jstree.min.js"></script>

<!--  <script src="SD/js/jstree.js"></script>    -->
<!--  <script src="SD/js/jquery.js"></script>    -->
<!--  <script src="SD/js/jquery-ui.js"></script> -->
<!--  <script src="SD/js/jsgrid.js"></script>    -->
<!--  <script src="SD/js/xlsx.js"></script>      -->
<!--  <script src="SD/js/FileSaver.js"></script> -->


    <style>           /* optimized with csstidy */
        html {  /* This is the groundplane */
            font-family : serif;
            height : 100%;
            font-size: 16px;
            color : DarkSlateGray;
            background-color : navy;
            margin : 0;
            padding : 0;
        }
        #dialog {
            display: none;
        }
        #content {
            min-height : 550px;
            min-width : 725px;
            overflow : hidden;
            background-color : lightskyblue;
            margin : 0;
            padding : 5px;
        }
        #tab-content1 {
            font-size: 15px;
            display : block;
            padding : 5px 0;
            max-width: 100%;
            height: 440px;
        }
        #tab-content2 {
            display : none;
            margin : 20px;
        }
        #tab-content3 {
            display : none;
            margin : 20px;
        }
        #tab-content4 {
            display : none;
            margin : 20px;
        }
        #tab-content5 {
            display : none;
            margin : 20px;
        }
        #tab-content6 {
            display : none;
            margin : 20px;
        }
        #tab-content7 {
            display : none;
            margin : 20px;
        }
        .button {
            width : 80px;
            height : 30px;
            background-color : #128F76;
            border : none;
            color : #FFF;
            text-align : center;
            text-decoration : none;
            display : inline-block;
            font-size : 16px;
            cursor : pointer;
            border-radius : 5px;
            margin : 4px 2px;
        }
        .buttonblue {
            background-color : blue;
            width : 120px;
        }
        .buttongreen {
            background-color : #128F76;
            width : 120px;
        }
        #label-logo-s {
            margin-left : 20px;
            border-color: black;
            border-style: solid;
            border-width: 2px;
            display : inline-block;
            background-image : url(SD/common/unknown.jpg);
            width : 96px;
            height : 96px;
            margin-top: 5px;
        }
        #label-logo-m {
            margin-left : 40px;
            border-color: black;
            border-style: solid;
            border-width: 2px;
            display : inline-block;
            background-image : url(SD/unknown.jpg);
            width : 128px;
            height : 128px;
            margin-top: 5px;
        }
        #div-logo-s{
          display: none;
        }
        #div-logo-m{
          display: none;
        }
        #div-tone-s{
          display: none;  /* audioI2S SW decoder */
        }
        #div-tone-h{
          display: none;  /* vs1053 HW decoder */
        }
        canvas {
            left : 0;
            margin-left : 0;
            display : inline-block;
            /* width : 96px;
               height : 96px; */
            border : #000 solid 2px;
        }
        .jsgrid-header-cell {
            padding : 0.1em !important ;
        }
        .jsgrid-cell {
            overflow : hidden !important ;
            white-space : nowrap !important ;
            padding : 0.1em 0.2em !important ;
        }
        .ui-widget-header {
            background : #11e9e9 !important ;
        }
        .ui-dialog .ui-dialog-buttonpane {
            margin-top : 0 !important ;
            border-width : 0 !important ;
            padding : 0 0 0 1em !important ;
        }
        .ui-dialog .ui-dialog-content {
            margin-top : 0.3em !important ;
            padding : 0.1em !important ;
        }
        .boxstyle {
            height : 36px;
            padding-top : 0;
            padding-left : 5px;
            padding-bottom : 0;
            background-color: white;
            font-size : 16px;
            line-height : normal;
            border-color: black;
            border-style: solid;
            border-width: thin;
            border-radius : 5px;
        }
        .boxstyle_s {
            height : 36px;
            width : 40px;
            padding-top : 0;
            padding-left : 5px;
            padding-bottom : 2px;
            background-color: white;
            font-size : 16px;
            line-height : normal;
            border-color: black;
            border-style: solid;
            border-width: thin;
            border-radius : 5px;
        }
        .table_cell1 {
            padding-top : 0;
            padding-left : 5px;
            font-size : 16px;
        }
        .table_cell2 {
            padding-top : 0;
            padding-left : 5px;
            font-size : 15px;
        }
        .sdr_lbl_left {
            display: inline-block;
            float: left;
            text-align:right;
            height: 40px;
            width: 100px;
            padding-top: 0px;
            padding-right: 5px;
            padding-bottom: 0px;
        }
        .sdr_lbl_right {
            display: inline-block;
            float: left;
            text-align:right;
            height: 40px;
            width: 45px;
            padding-top: 0px;
            padding-left: 5px;
            padding-bottom: 0px;
        }
        .sdr_lbl_measure {
            display: inline-block;
            float: left;
            text-align:left;
            height: 40px;
            width: 40px;
            padding-top: 0px;
            padding-bottom: 0px;
        }
        #preloaded-images{
            display: none;
        }
        #dialog {
            display: none;
        }
        #BODY {
            display:block;
        }
        .filetree-container {
            position: relative;
            background-color: white;
            height: 420px !important;
            overflow: auto;
        }
        .progress-bar{
            display:-ms-flexbox;
            display:flex;
            -ms-flex-direction:column;
            flex-direction:column;
            -ms-flex-pack:center;
            justify-content:center;
            overflow:hidden;
            color:#fff;
            text-align:center;
            white-space:nowrap;
            background-color:#007bff;
            transition:width
        }
    </style>
</head>

<script>

// global variables and functions
/* eslint-disable no-unused-vars, no-undef */
var I2S_eq_DB = ['-40', '-37', '-34', '-31', '-28', '-25', '-22', '-19',
  '-16', '-13', '-10', ' -7', ' -4', '  0', ' +3', ' +6']

var I2S_eq_Val = [-40, -37, -34, -31, -28, -25, -22, -19, -16, -13, -10, -7, -4, 0, +3, +6]

var trebleDB = ['-12,0', '-10,5', ' -9,0', ' -7,5', ' -6,0', ' -4,5', ' -3,0', ' -1,5',
  '  0,0', ' +1,5', ' +3,0', ' +4,5', ' +6,0', ' +7,5', ' +9,0', '+10,5']

var trebleVal = [8, 9, 10, 11, 12, 13, 14, 15, 0, 1, 2, 3, 4, 5, 6, 7]

var tft_size = 0        // (0)320x240, (1)480x320
var audio_decoder  = 0  // (0)vs1053,  (1)SW_Decoder

// ---- websocket section------------------------

var socket = undefined
var host = location.hostname
var tm
var IR_addr = ""

function ping() {
    if (socket.readyState == 1) { // reayState 'open'
        socket.send("ping")
        console.log("send ping")
        tm = setTimeout(function () {
            toastr.warning('The connection to the MiniWebRadio is interrupted! Please reload the page!')
        }, 10000)
    }
}

function connect() {
    socket = new WebSocket('ws://'+window.location.hostname+':81/');

    socket.onopen = function () {
        console.log("Websocket connected")
        socket.send('get_tftSize')
        socket.send('get_decoder')
        socket.send('to_listen')
        socket.send("getmute")
        socket.send("get_timeAnnouncement")
        socket.send("gettone=")   // Now load the tones (tab Radio)
        socket.send("getnetworks=")
        socket.send("change_state=" + "0")
        socket.send("getTimeFormat")

        setInterval(ping, 20000)
    };

    socket.onclose = function (e) {
        console.log(e)
        console.log('Socket is closed. Reconnect will be attempted in 1 second.', e)
        socket = null
        setTimeout(function () {
            connect()
        }, 1000)
    }

    socket.onerror = function (err) {
        console.log(err)
    }

    socket.onmessage = function(event) {
        var socketMsg = event.data

        var n   = socketMsg.indexOf('=')
        var msg = ''
        var val = ''
        if (n >= 0) {
            var msg  = socketMsg.substring(0, n)
            var val  = socketMsg.substring(n + 1)
            // console.log("para ",msg, " val ",val)
        }
        else {
            msg = socketMsg
        }

        switch(msg) {
            case "pong":            clearTimeout(tm)
                                    console.log("pong")
                                    toastr.clear()
                                    break
            case "mute":            if(val == '1'){ document.getElementById('Mute').src = 'SD/png/Button_Mute_Red.png'
                                                    resultstr1.value = "mute on"
                                                    console.log("mute on")}
                                    if(val == '0'){ document.getElementById('Mute').src = 'SD/png/Button_Mute_Green.png'
                                                    resultstr1.value = "mute off"
                                                    console.log("mute off")}
                                    break
            case "tone":            resultstr1.value = val  // text shown in resultstr1 as info
                                    break
            case "settone":         lines = val.split('\n')
                                    for (i = 0; i < (lines.length - 1); i++) {
                                      parts = lines[i].split('=')
                                      setSlider(parts[0], parts[1])
                                    }
                                    break
            case "stationNr":       document.getElementById('preset').selectedIndex = Number(val)
                                    break
            case "stationURL":      station.value = val
                                    break
            case "stationLogo":     if(tft_size == 0) showLogo('label-logo-s', val)
                                    if(tft_size == 1) showLogo('label-logo-m', val)
                                    break
            case "streamtitle":     cmd.value = val
                                    break
            case "homepage":        window.open(val, '_blank') // show the station homepage
                                    break
            case "icy_description": resultstr1.value = val
                                    break
            case "AudioFileList":   getAudioFileList(val)
                                    break
            case "tftSize":         if(val == 's')  { tft_size = 0; // 320x240px
                                                        document.getElementById('div-logo-m').style.display = 'none';
                                                        document.getElementById('div-logo-s').style.display = 'block';
                                                        document.getElementById('canvas').width  = 96;
                                                        document.getElementById('canvas').height = 96;
                                                        console.log("tftSize is s");
                                    }
                                    if(val == 'm')  { tft_size = 1;
                                                        document.getElementById('div-logo-s').style.display = 'none';
                                                        document.getElementById('div-logo-m').style.display = 'block';
                                                        document.getElementById('canvas').width  = 128;
                                                        document.getElementById('canvas').height = 128;
                                                        console.log("tftSize is m");
                                    }
                                    break
            case  "decoder":        if(val == 'h')  { audio_decoder = 0; // vs1053 HW decoder
                                                        document.getElementById('div-tone-s').style.display = 'none';
                                                        document.getElementById('div-tone-h').style.display = 'block';
                                                        console.log("vs1053");
                                    }
                                    if(val == 's')  { audio_decoder = 1; // audioI2S SW decoder
                                                        document.getElementById('div-tone-h').style.display = 'none';
                                                        document.getElementById('div-tone-s').style.display = 'block';
                                                        console.log("audioI2S");}
                                    break
            case  "volume":         resultstr1.value = "Volume is now " + val;
                                    break
            case  "SD_playFile":    resultstr3.value = "Audiofile is " + val;
                                    break

            case  "stopfile":       resultstr3.value = val;
                                    break

            case  "resumefile":     resultstr3.value = val;
                                    break

            case  "timeAnnouncement": console.log("timeAnnouncement=" + val)
                                    if(val == '0') document.getElementById('chk_timeSpeech').checked = false;
                                    if(val == '1') document.getElementById('chk_timeSpeech').checked = true;
                                    break

            case "clearDLNA":       clearDLNAServerList(0)
                                    break

            case "DLNA_Names":      addDLNAServer(val) // add to Serverlist
                                    break
            case "Level1":          show_DLNA_Content(val, 1)
                                    break
            case "Level2":          show_DLNA_Content(val, 2)
                                    break
            case "Level3":          show_DLNA_Content(val, 3)
                                    break
            case "Level4":          show_DLNA_Content(val, 4)
                                    break
            case "Level5":          show_DLNA_Content(val, 5)
                                    break
            case "networks":        var networks = val.split('\n')
                                    select = document.getElementById('ssid')
                                    for (i = 0; i < (networks.length); i++) {
                                        opt = document.createElement('OPTION')
                                        opt.value = i
                                        console.log(networks[i])
                                        opt.text = networks[i]
                                        select.add(opt)
                                    }
                                    break
            case "test":            resultstr1.value = val
                                    break
            case "IR_address":      if(IR_addr != val){
                                        IR_addr = val
                                        ir_address.value=val
                                        socket.send("setIRadr=" + val)
                                    }
                                    break
            case "IR_command":      ir_command.value=val
                                    break
            case "timeFormat":      var radiobtn;
                                    if     (val == '12') radiobtn = document.getElementById("h12")
                                    else if(val == '24') radiobtn = document.getElementById("h24")
                                    else{console.log("wrong timeFormat ", val); break;}
                                    radiobtn.checked = true;
                                    break;
            default:                console.log('unknown message', msg, val)
        }
    }
}
// ---- end websocket section------------------------


document.addEventListener('readystatechange', event => {
    if (event.target.readyState === 'interactive') { // same as:  document.addEventListener('DOMContentLoaded'...
        // same as  jQuery.ready
        console.log('All HTML DOM elements are accessible')
        document.getElementById('dialog').style.display = 'none' // hide the div (its only a template)
    }
    if (event.target.readyState === 'complete') {
        console.log('Now external resources are loaded too, like css,src etc... ')
        connect();  // establish websocket connection
        loadGridFileFromSD()
        showExcelGrid()
        audioPlayer_buildFileSystemTree("/")
        dlnaPlayer_buildFileSystemTree("/")
    }
})

toastr.options = {
    "closeButton": false,
    "debug": false,
    "newestOnTop": false,
    "progressBar": false,
    "positionClass": "toast-top-right",
    "preventDuplicates": true,
    "preventOpenDuplicates": true,
    "onclick": null,
    "showDuration": "300",
    "hideDuration": "1000",
    "timeOut": "20000",
    "extendedTimeOut": "1000",
    "showEasing": "swing",
    "hideEasing": "linear",
    "showMethod": "fadeIn",
    "hideMethod": "fadeOut"
}

function showTab1 () {
    console.log('tab-content1 (Radio)')
    document.getElementById('tab-content1').style.display = 'block'
    document.getElementById('tab-content2').style.display = 'none'
    document.getElementById('tab-content3').style.display = 'none'
    document.getElementById('tab-content4').style.display = 'none'
    document.getElementById('tab-content5').style.display = 'none'
    document.getElementById('tab-content6').style.display = 'none'
    document.getElementById('tab-content7').style.display = 'none'
    document.getElementById('btn1').src = 'SD/png/Radio_Yellow.png'
    document.getElementById('btn2').src = 'SD/png/Station_Green.png'
    document.getElementById('btn3').src = 'SD/png/MP3_Green.png'
    document.getElementById('btn4').src = 'SD/png/Button_DLNA_Green.png'
    document.getElementById('btn5').src = 'SD/png/Search_Green.png'
    document.getElementById('btn6').src = 'SD/png/About_Green.png'
    socket.send("change_state=" + "0")
    socket.send("getmute")
}

function showTab2 () {
    console.log('tab-content2 (Stations)')
    document.getElementById('tab-content1').style.display = 'none'
    document.getElementById('tab-content2').style.display = 'block'
    document.getElementById('tab-content3').style.display = 'none'
    document.getElementById('tab-content4').style.display = 'none'
    document.getElementById('tab-content5').style.display = 'none'
    document.getElementById('tab-content6').style.display = 'none'
    document.getElementById('tab-content7').style.display = 'none'
    document.getElementById('btn1').src = 'SD/png/Radio_Green.png'
    document.getElementById('btn2').src = 'SD/png/Station_Yellow.png'
    document.getElementById('btn3').src = 'SD/png/MP3_Green.png'
    document.getElementById('btn4').src = 'SD/png/Button_DLNA_Green.png'
    document.getElementById('btn5').src = 'SD/png/Search_Green.png'
    document.getElementById('btn6').src = 'SD/png/About_Green.png'
    $('#jsGrid').jsGrid('refresh')
}

function showTab3 () {
    console.log('tab-content3 (Audio Player)')
    document.getElementById('tab-content1').style.display = 'none'
    document.getElementById('tab-content2').style.display = 'none'
    document.getElementById('tab-content3').style.display = 'block'
    document.getElementById('tab-content4').style.display = 'none'
    document.getElementById('tab-content5').style.display = 'none'
    document.getElementById('tab-content6').style.display = 'none'
    document.getElementById('tab-content7').style.display = 'none'
    document.getElementById('btn1').src = 'SD/png/Radio_Green.png'
    document.getElementById('btn2').src = 'SD/png/Station_Green.png'
    document.getElementById('btn3').src = 'SD/png/MP3_Yellow.png'
    document.getElementById('btn4').src = 'SD/png/Button_DLNA_Green.png'
    document.getElementById('btn5').src = 'SD/png/Search_Green.png'
    document.getElementById('btn6').src = 'SD/png/About_Green.png'
    document.getElementById('level1').options.length = 0
    document.getElementById('level2').options.length = 0
    document.getElementById('level3').options.length = 0
    document.getElementById('level4').options.length = 0
    document.getElementById('level5').options.length = 0
    socket.send("change_state=6")
}

function showTab4 () {
    console.log('tab-content4 (DLNA)')
    document.getElementById('tab-content1').style.display = 'none'
    document.getElementById('tab-content2').style.display = 'none'
    document.getElementById('tab-content3').style.display = 'none'
    document.getElementById('tab-content4').style.display = 'block'
    document.getElementById('tab-content5').style.display = 'none'
    document.getElementById('tab-content6').style.display = 'none'
    document.getElementById('tab-content7').style.display = 'none'
    document.getElementById('btn1').src = 'SD/png/Radio_Green.png'
    document.getElementById('btn2').src = 'SD/png/Station_Green.png'
    document.getElementById('btn3').src = 'SD/png/MP3_Green.png'
    document.getElementById('btn4').src = 'SD/png/Button_DLNA_Yellow.png'
    document.getElementById('btn5').src = 'SD/png/Search_Green.png'
    document.getElementById('btn6').src = 'SD/png/About_Green.png'
    socket.send('DLNA_getServer')
    socket.send("change_state=" + "10")
}

function showTab5 () {
    console.log('tab-content5 (Search Stations)')
    document.getElementById('tab-content1').style.display = 'none'
    document.getElementById('tab-content2').style.display = 'none'
    document.getElementById('tab-content3').style.display = 'none'
    document.getElementById('tab-content4').style.display = 'none'
    document.getElementById('tab-content5').style.display = 'block'
    document.getElementById('tab-content6').style.display = 'none'
    document.getElementById('tab-content7').style.display = 'none'
    document.getElementById('btn1').src = 'SD/png/Radio_Green.png'
    document.getElementById('btn2').src = 'SD/png/Station_Green.png'
    document.getElementById('btn3').src = 'SD/png/MP3_Green.png'
    document.getElementById('btn4').src = 'SD/png/Button_DLNA_Green.png'
    document.getElementById('btn5').src = 'SD/png/Search_Yellow.png'
    document.getElementById('btn6').src = 'SD/png/About_Green.png'
}

function showTab6 () {
    console.log('tab-content6 (About)')
    document.getElementById('tab-content1').style.display = 'none'
    document.getElementById('tab-content2').style.display = 'none'
    document.getElementById('tab-content3').style.display = 'none'
    document.getElementById('tab-content4').style.display = 'none'
    document.getElementById('tab-content5').style.display = 'none'
    document.getElementById('tab-content6').style.display = 'block'
    document.getElementById('tab-content7').style.display = 'none'
    document.getElementById('btn1').src = 'SD/png/Radio_Green.png'
    document.getElementById('btn2').src = 'SD/png/Station_Green.png'
    document.getElementById('btn3').src = 'SD/png/MP3_Green.png'
    document.getElementById('btn4').src = 'SD/png/Button_DLNA_Green.png'
    document.getElementById('btn5').src = 'SD/png/Search_Green.png'
    document.getElementById('btn6').src = 'SD/png/About_Yellow.png'
    // getTimeZoneName()
    loadTimeZones()
}

function showTab7 () {  // Remote Control
    console.log('tab-content7 (Remote Control)')
    document.getElementById('tab-content1').style.display = 'none'
    document.getElementById('tab-content2').style.display = 'none'
    document.getElementById('tab-content3').style.display = 'none'
    document.getElementById('tab-content4').style.display = 'none'
    document.getElementById('tab-content5').style.display = 'none'
    document.getElementById('tab-content6').style.display = 'none'
    document.getElementById('tab-content7').style.display = 'block'
    document.getElementById('btn1').src = 'SD/png/Radio_Green.png'
    document.getElementById('btn2').src = 'SD/png/Station_Green.png'
    document.getElementById('btn3').src = 'SD/png/MP3_Green.png'
    document.getElementById('btn4').src = 'SD/png/Button_DLNA_Green.png'
    document.getElementById('btn5').src = 'SD/png/Search_Green.png'
    document.getElementById('btn6').src = 'SD/png/About_Green.png'
}

function uploadTextFile (fileName, content) {
    var fd = new FormData()
    fd.append('Text=', content)
    var theUrl = 'uploadfile?' + fileName + '&version=' + Math.random()
    var xhr = new XMLHttpRequest()
    xhr.timeout = 2000; // time in milliseconds
    xhr.open('POST', theUrl, true)
    xhr.ontimeout = (e) => {
        // XMLHttpRequest timed out.
        alert(filename + ' not uploaded, timeout')
    }
    xhr.onreadystatechange = function () { // Call a function when the state changes.
        if (xhr.readyState === 4) {
            if (xhr.responseText === 'OK') alert(fileName + ' successfully uploaded')
            else alert(fileName + ' successfully uploaded')
        }
    }
    xhr.send(fd) // send
}

// ---------------------------------------------------------------- DLNA -----------------------------------------------------------------------------
function clearDLNAServerList(level){
    console.log('clear DLNA server list, level=', level)
    var select

    switch(level){
        case 0:
            select = document.getElementById('server')
            select.options.length = 0;
            var option = new Option("Select a DLNA server here")
            select.appendChild(option);                                     // no break, fall through
        case 1:
            select = document.getElementById('level1')
            select.options.length = 0;
        case 2:
            select = document.getElementById('level2')
            select.options.length = 0;
        case 3:
            select = document.getElementById('level3')
            select.options.length = 0;
        case 4:
            select = document.getElementById('level4')
            select.options.length = 0;
        case 5:
            select = document.getElementById('level5')
            select.options.length = 0;
    }
}

function addDLNAServer(val){
    var server = val.split(",")
    var select = document.getElementById('server')
    var option = new Option(server[0], server[1]); // e.g. "Wolles-FRITZBOX Mediaserver,1"  (friendlyName, ServerIdx)
    console.log(server[0], server[1]);
    select.appendChild(option);
}
function show_DLNA_Content(val, level){
    var select
    if(level == 1) select = document.getElementById('level1')
    if(level == 2) select = document.getElementById('level2')
    if(level == 3) select = document.getElementById('level3')
    if(level == 4) select = document.getElementById('level4')
    if(level == 5) select = document.getElementById('level5')
    if(select.options.length == 0){
        var option = new Option("Select level " + level.toString())
        select.appendChild(option);
    }
    content = JSON.parse(val)
    for (var i = 0; i < content.length; i++){
        var isDir = content[i].isDir
        var n
        var c
        if(isDir){
            n = content[i].name.concat('\xa0\xa0', '\(' + content[i].size + '\)'); // more than one space
            c = 'D=' + content[i].id // is directory
        }
        else{
            n = content[i].name + '\xa0\xa0' + content[i].size;
            c = 'F=' + content[i].id // is file, id is uri
        }
        if(content[i].isAudio){
            var option = new Option(n, c); // e.g.
            option.style.color = "black"
        }
        else{
            var option = new Option(n); // e.g.
            option.style.color = "red"
        }
        console.log(n, c);
        select.appendChild(option);
    }
}
function selectserver (presctrl) { // preset, select a server, root, level0
    socket.send('DLNA_getContent0=' + presctrl.value)
    clearDLNAServerList(1)
    console.log('DLNA_getContent0=' + presctrl.value)
}
function select_l1 (presctrl) { // preset, select root
    socket.send('DLNA_getContent1=' + presctrl.value)
    clearDLNAServerList(2)
    console.log('DLNA_getContent1=' + presctrl.value)
}
function select_l2 (presctrl) { // preset, select level 1
    socket.send('DLNA_getContent2=' + presctrl.value)
    clearDLNAServerList(3)
    console.log('DLNA_getContent2=' + presctrl.value)
}
function select_l3 (presctrl) { // preset, select level 2
    socket.send('DLNA_getContent3=' + presctrl.value)
    clearDLNAServerList(4)
    console.log('DLNA_getContent3=' + presctrl.value)
 }
 function select_l4 (presctrl) { // preset, select level 3
    socket.send('DLNA_getContent4=' + presctrl.value)
    clearDLNAServerList(5)
    console.log('DLNA_getContent4=' + presctrl.value)
 }
 function select_l5 (presctrl) { // preset, select level 4
    socket.send('DLNA_getContent5=' + presctrl.value)
    console.log('DLNA_getContent5=' + presctrl.value)
 }

// ----------------------------------- TAB RADIO ------------------------------------

function showLogo(id, src) { // get the bitmap from SD, convert to URL first
    src = src.replace(/%/g, '%25') // % must be the first
    src = src.replace(/\s/g, '%20') // URLs never can have blanks
    src = src.replace(/'/g, '%27') // must be replace
    src = src.replace(/\(/g, '%28') // must be replace
    src = src.replace(/\)/g, '%29') // must be replace
    src = src.replace(/\+/g, '%2B') // is necessary to replace, + is the same as space
    var timestamp = new Date().getTime()
    var file
    if(src == '') file = 'url(SD/unknown.jpg)'
    else file = 'url(SD' + src + ')'
    console.log("showLogo id=", id, "file=", file)
    document.getElementById(id).style.backgroundImage = file
}

function test(){
    socket.send("test=")
}

function handleStation (presctrl) { // tab Radio: preset, select a station
    cmd.value = ''
    socket.send('set_station=' + presctrl.value)
}

function setstation () { // Radio: button play - Enter a streamURL here....
    var sel = document.getElementById('preset')
    sel.selectedIndex = 0
    cmd.value = ''
    var theUrl =  station.value;
    theUrl = theUrl.replace(/%3d/g, '=') // %3d convert to =
    theUrl = theUrl.replace(/%21/g, '!') //
    theUrl = theUrl.replace(/%22/g, '"') //
    theUrl = theUrl.replace(/%23/g, '#') //
    theUrl = theUrl.replace(/%3f/g, '?') //
    theUrl = theUrl.replace(/%40/g, '@') //
    socket.send("stationURL=" + theUrl)
}

function selectItemByValue (elmnt, value) { // tab Radio: load and set tones
    var sel = document.getElementById(elmnt)
    for (var i = 0; i < sel.options.length; i++) {
        if (sel.options[i].value === value) {
            sel.selectedIndex = i
        }
    }
}

function setSlider (elmnt, value) {
    if (elmnt === 'toneha') slider_TG_set(value)
    if (elmnt === 'tonehf') slider_TF_set(value)
    if (elmnt === 'tonela') slider_BG_set(value)
    if (elmnt === 'tonelf') slider_BF_set(value)
    v = Math.trunc((40 + parseInt(value, 10)) /3)
    console.log("setSlider", elmnt, value)
    if (elmnt === 'LowPass' ) slider_LP_set(v)
    if (elmnt === 'BandPass') slider_BP_set(v)
    if (elmnt === 'HighPass') slider_HP_set(v)
}

function slider_TG_mouseUp () { // Slider Treble Gain   mouseupevent
    handlectrl('toneha', trebleVal[TrebleGain.value])
    // console.log('Treble Gain=%i',Number(TrebleGain.value));
}

function slider_TG_change () { //  Slider Treble Gain  changeevent
    console.log('Treble Gain=%i', Number(TrebleGain.value))
    document.getElementById('label_TG_value').innerHTML = trebleDB[TrebleGain.value]
}

function slider_TG_set (value) { // set Slider Treble Gain
    var val = Number(value)
    if (val < 8) val = val + 8
    else val = val - 8
    document.getElementById('TrebleGain').value = val
    document.getElementById('label_TG_value').innerHTML = trebleDB[TrebleGain.value]
    console.log('Treble Gain=%i', val)
}

function slider_TF_mouseUp () { // Slider Treble Freq   mouseupevent
    handlectrl('tonehf', TrebleFreq.value)
    // console.log('Treble Freq=%i', Number(TrebleFreq.value));
}

function slider_TF_change () { //  Slider Treble Freq  changeevent
    console.log('Treble Freq=%i', Number(TrebleFreq.value))
    document.getElementById('label_TF_value').innerHTML = TrebleFreq.value
}

function slider_TF_set (value) { // set Slider Treble Freq
    var val = Number(value)
    document.getElementById('TrebleFreq').value = val
    document.getElementById('label_TF_value').innerHTML = TrebleFreq.value
    console.log('Treble Freq=%i', val)
}

function slider_BG_mouseUp () { // Slider Bass Gain   mouseupevent
    handlectrl('tonela', BassGain.value)
    // console.log('Bass Gain=%i', Number(BassGain.value));
}

function slider_BG_change () { //  Slider Bass Gain  changeevent
    var sign = ''
    if (BassGain.value !== '0') sign = '+'
    console.log('Bass Gain=%i', Number(BassGain.value))
    document.getElementById('label_BG_value').innerHTML = sign + BassGain.value
}

function slider_BG_set (value) { // set Slider Bass Gain
    var val = Number(value)
    var sign = ''
    if (BassGain.value !== '0') sign = '+'
    document.getElementById('BassGain').value = val
    document.getElementById('label_BG_value').innerHTML = sign + BassGain.value
    console.log('Bass Gain=%i', val)
}

function slider_BF_mouseUp () { // Slider Bass Gain   mouseupevent
    handlectrl('tonelf', BassFreq.value)
    // console.log('Bass Freq=%i', Number(BassFreq.value));
}

function slider_BF_change () { //  Slider Bass Gain  changeevent
    console.log('Bass Freq=%i', Number(BassFreq.value))
    document.getElementById('label_BF_value').innerHTML = (BassFreq.value - 1) * 10
}

function slider_BF_set (value) { // set Slider Bass Gain
    var val = Number(value)
    document.getElementById('BassFreq').value = val
    document.getElementById('label_BF_value').innerHTML = (BassFreq.value - 1) * 10
    console.log('Bass Freq=%i', val)
}

function slider_LP_mouseUp () { // Slider LowPass mouseupevent
    handlectrl('LowPass', I2S_eq_Val[LowPass.value])
    console.log('LowPass=%i', Number(LowPass.value));
}

function slider_LP_change () { //  Slider LowPass changeevent
    console.log('LowPass=%i', Number(LowPass.value))
    document.getElementById('label_LP_value').innerHTML = I2S_eq_DB[LowPass.value]
}

function slider_LP_set (value) { // set Slider LowPass
    var val = Number(value)
    document.getElementById('LowPass').value = val
    document.getElementById('label_LP_value').innerHTML = I2S_eq_DB[LowPass.value]
    console.log('LowPass=%i', val)
}

function slider_BP_mouseUp () { // BandPass mouseupevent
    handlectrl('BandPass', I2S_eq_Val[BandPass.value])
    console.log('BandPass=%i', Number(BandPass.value));
}

function slider_BP_change () { //  BandPass changeevent
    console.log('BandPass=%i', Number(BandPass.value))
    document.getElementById('label_BP_value').innerHTML = I2S_eq_DB[BandPass.value]
}

function slider_BP_set (value) { // set Slider BandPass
    var val = Number(value)
    document.getElementById('BandPass').value = val
    document.getElementById('label_BP_value').innerHTML = I2S_eq_DB[BandPass.value]
    console.log('BandPass=%i', val)
}

function slider_HP_mouseUp () { // Slider HighPass mouseupevent
    handlectrl('HighPass', I2S_eq_Val[HighPass.value])
    console.log('HighPass=%i', Number(HighPass.value));
}

function slider_HP_change () { //  Slider HighPass changeevent
    console.log('HighPass=%i', Number(HighPass.value))
    document.getElementById('label_HP_value').innerHTML = I2S_eq_DB[HighPass.value]
}

function slider_HP_set (value) { // set Slider HighPass
    var val = Number(value)
    document.getElementById('HighPass').value = val
    document.getElementById('label_HP_value').innerHTML = I2S_eq_DB[HighPass.value]
    console.log('HighPass=%i', val)
}

function handlectrl (id, val) { // Radio: treble, bass, freq
    var theUrl = id + "=" + val
    console.log(theUrl)
    socket.send(theUrl)
}
// ----------------------------------- TAB CONFIG ------------------------------------

function saveGridFileToSD () { // save to SD
    var wsData = $('#jsGrid').jsGrid('option', 'data')
    var strJSON = JSON.stringify(wsData)
    var objJSON = JSON.parse(strJSON)
    console.log(wsData.length)
    var txt = ''
    var l
    var c
    var select, opt
    select = document.getElementById('preset') // Radio: show stationlist
    select.options.length = 1
    var j = 1
    txt = 'Hide\tCy\tStationName\tStreamURL\n'
    for (var i = 0; i < wsData.length; i++) {
        c = ''
        if (objJSON[i].Hide) {
            c = objJSON[i].Hide
            txt += c+ '\t'
        } else txt += '\t'
        if (objJSON[i].Hide !== '*') {
            if (j < 1000) {
                opt = document.createElement('OPTION')
                opt.text = (('000' + j).slice(-3) + ' - ' + objJSON[i].StationName)
                select.add(opt)
            }
            j++
        }
        if (objJSON[i].Cy) {
            c = objJSON[i].Cy
            c = c + '\t'
            txt += c
        } else txt += '\t'
        if (objJSON[i].StationName) {
            c = objJSON[i].StationName
            c = c + '\t'
            txt += c
        } else txt += '\t'
        if (objJSON[i].StreamURL) {
            c = objJSON[i].StreamURL
            txt += c
        } else txt += '\t'
        txt += '\n'
    }
    uploadTextFile('stations.csv', txt)
    updateStationlist()
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function loadGridFileFromSD () { // load from SD
    var XLrowObject
    var rawFile = new XMLHttpRequest()
    rawFile.timeout = 2000; // time in milliseconds
    rawFile.open('POST', 'SD/stations.csv', true)
    rawFile.onreadystatechange = function () {
        if (rawFile.readyState === 4) {
            var rawdata = rawFile.responseText
            var workbook = XLSX.read(rawdata, {
                raw: true,
                type: 'string',
                cellDates: false,
                cellText: true
            })
            workbook.SheetNames.forEach(function (sheetName) {
                XLrowObject = XLSX.utils.sheet_to_row_object_array(workbook.Sheets[sheetName])
            })
            var strJSON = JSON.stringify(XLrowObject)
            var objJSON = JSON.parse(strJSON)
            $('#jsGrid').jsGrid({
                data: objJSON
            })
            updateStationlist()
        }
    }
    rawFile.ontimeout = (e) => {
        // XMLHttpRequest timed out.
        console.log("load SD/stations.csv timeout")
    }
    rawFile.send()
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function saveExcel () { // save xlsx to PC
    var wb = XLSX.utils.book_new()
    wb.Props = {
        Title: 'Stations',
        Subject: 'Stationlist',
        Author: 'MiniWebRadio',
        CreatedDate: new Date('2018.10.10')
    }
    wb.SheetNames.push('Stations')
    var wsData = $('#jsGrid').jsGrid('option', 'data')
    var wscols = [{
        wch: 4
    }, // 'characters'
    {
        wch: 5
    }, // 'characters'
    {
        wch: 100
    }, // 'characters'
    {
        wch: 150
    }  // 'characters'
    ]
    var ws = XLSX.utils.json_to_sheet(wsData, {
        header: ['Hide', 'Cy', 'StationName', 'StreamURL']
    })
    ws['!cols'] = wscols
    wb.Sheets.Stations = ws

    var wbout = XLSX.write(wb, {
        bookType: 'xlsx',
        type: 'binary'
    })

    function s2ab (s) {
        var buf = new ArrayBuffer(s.length)
        var view = new Uint8Array(buf)
        for (var i = 0; i < s.length; i++) view[i] = s.charCodeAt(i) & 0xff
        return buf
    }
    saveAs(
        new Blob([s2ab(wbout)], {
            type: 'application/octet-stream'
        }),
        'stations.xlsx'
    )
    updateStationlist()
}

var clients = [ // testdata
    {
        Hide: '*',
        Cy: 'D',
        StationName: 'Station',
        StreamURL: 'URL'
    }
]

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function showExcelGrid () {
    $('#jsGrid').jsGrid({
        width: '100%',
        height: '432px',
        editing: true,
        sorting: true,
        paging: false,
        shrinkToFit: false,
        onItemDeleted: function (args) {
            updateStationlist()
        },
        onItemUpdated: function (args) {
            updateStationlist()
        },
        onItemInserted: function (args) {
            updateStationlist()
        },
        deleteConfirm: function (item) {
            return 'The entry ' + item.StationName + ' will be removed. Are you sure?'
        },
        rowClick: function (args) {
            showDetailsDialog('Edit', args.item)
        },
        data: clients,
        fields: [{
            name: 'Hide',
            type: 'text',
            width: 20,
            align: 'center'
        },
        {
            name: 'Cy',
            type: 'text',
            width: 25,
            align: 'center'
        },
        {
            name: 'StationName',
            type: 'text',
            width: 170
        },
        {
            name: 'StreamURL',
            type: 'text',
            width: 320
        },
        {
            type: 'control',
            modeSwitchButton: false,
            editButton: false,
            shrinkToFit: true,
            headerTemplate: function () {
                return $('<button>')
                .attr('type', 'button')
                .text('Add')
                .on('click', function () {
                    showDetailsDialog('Add', {})
                })
            }
        }
        ]
    })
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
var showDetailsDialog = function (dialogType, client) { // popUp window
    if(client.Hide === '*') $("#chkHide").prop("checked", true)
    else                    $("#chkHide").prop("checked", false)
    $('#txtCy').val(client.Cy)
    $('#txtStationName').val(client.StationName)
    $('#txtStreamURL').val(client.StreamURL)
    var divdialog = $('#dialog')
    $('#dialog').attr('title', 'Edit')
    $('#dialog').dialog({
        width: 505,
        resizable: false,
        show: 'fade',
        modal: false,
        buttons: {
            OK: function () {
                if($('#chkHide').is(':checked')) client.Hide = '*'
                else                             client.Hide = ''
                client.Cy = $('#txtCy').val()
                client.StationName = $('#txtStationName').val()
                client.StreamURL = $('#txtStreamURL').val()
                includeStation(client, dialogType === 'Add')
                $(this).dialog('close')
                console.log('dialog saved')
            }
        }
    })
    divdialog.dialog()
    console.log('dialog opened')
}

var includeStation = function (client, isNew) {
    $.extend(client, {
        Hide: $('#txHide').val(),
        Cy: $('#txtCy').val(),
        StationName: $('#txtStationName').val(),
        StreamURL: $('#txtStreamURL').val()
    })

    $('#jsGrid').jsGrid(isNew ? 'insertItem' : 'updateItem', client)
    $('#detailsDialog').dialog('close')
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function loadDataExcel (event) { // load xlsx from PC
    var file = event[0]
    var reader = new FileReader()
    var excelData = []
    reader.onload = function (event) {
        var data = event.target.result
        var workbook = XLSX.read(data, {
            type: 'binary'
        })
        workbook.SheetNames.forEach(function (sheetName) {
            // Here is your object
            var XLrowObject = XLSX.utils.sheet_to_row_object_array(workbook.Sheets[sheetName])
            for (var i = 0; i < XLrowObject.length; i++) {
                excelData.push(XLrowObject[i]['your column name'])
            }
            var strJSON = JSON.stringify(XLrowObject)
            var objJSON = JSON.parse(strJSON)
            // alert(strJSON);
            $('#jsGrid').jsGrid({
                data: objJSON
            })
            updateStationlist()
        })
    }
    $('#file').val('') // allow load twice
    reader.onerror = function (ex) {
        console.log(ex)
    }
    reader.readAsBinaryString(file)
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
function updateStationlist () { // select in tab Radio
    var opt, select
    var wsData = $('#jsGrid').jsGrid('option', 'data')
    var strJSON = JSON.stringify(wsData)
    var objJSON = JSON.parse(strJSON)
    console.log(wsData.length)
    select = document.getElementById('preset') // Radio: show stationlist
    select.options.length = 1
    var j = 1
    for (var i = 0; i < wsData.length; i++) {
        if (objJSON[i].Hide !== '*') {
            if (j < 1000) {
                opt = document.createElement('OPTION')
                opt.text = (('000' + j).slice(-3) + ' - ' + objJSON[i].StationName)
                select.add(opt)
            }
            j++
        }
    }
}

// ----------------------------------- TAB AUDIO PLAYER ------------------------------------


// ----------------------------------- TAB Search Stations ------------------------------------

// global var
var countryallstations
var category

function addStationsToGrid () {
    showDetailsDialog('Add', {})
    $('#txtStreamURL').val($('#streamurl').val())
    $('#txtStationName').val($('#stationname').val())
}

function loadJSON (path, success, error) {
    console.log(path)
    var xhr = new XMLHttpRequest()
    xhr.timeout = 2000; // time in milliseconds
    xhr.onreadystatechange = function () {
        if (xhr.readyState === 4) {
            if (xhr.status === 200) {
                success(JSON.parse(xhr.responseText))
            } else {
                error(xhr)
            }
        }
    }
    xhr.open('GET', path, true)
    xhr.ontimeout = (e) => {
      // XMLHttpRequest timed out. Do something here.
    }
    xhr.send()
}

function selectcategory (presctrl) { // tab Search: preset, select a category

  if(presctrl.value == "bycountry")  {loadJSON('https://at1.api.radio-browser.info/json/countries', gotItems, 'jsonp'); category="country"}
  if(presctrl.value == "bylanguage") {loadJSON('https://at1.api.radio-browser.info/json/languages', gotItems, 'jsonp'); category="language"}
  if(presctrl.value == "bytag")      {loadJSON('https://at1.api.radio-browser.info/json/tags',      gotItems, 'jsonp'); category="tag"}
}

function selectitem (presctrl) { // tab Search: preset, select a station
  if(category == "country")  loadJSON('https://at1.api.radio-browser.info/json/stations/bycountry/'  + presctrl.value, gotStations, 'jsonp')
  if(category == "language") loadJSON('https://at1.api.radio-browser.info/json/stations/bylanguage/' + presctrl.value, gotStations, 'jsonp')
  if(category == "tag")      loadJSON('https://at1.api.radio-browser.info/json/stations/bytag/'      + presctrl.value, gotStations, 'jsonp')

}

function gotItems (data) { // fill select countries
    var select = document.getElementById('item')
    var opt
    select.options.length = 1
    for (var i = 0; i < data.length; i++) {
        if (i < 2) continue
        opt = document.createElement('OPTION')
        opt.text = data[i].name
        select.add(opt)
    }
    console.log(data.uuid)
    var stations = document.getElementById('stations') // set stations to default
    stations.options.length = 1
}

function gotStations (data) { // fill select stations
    var select = document.getElementById('stations')
    var opt
    select.options.length = 1
    for (var i = 0; i < data.length; i++) {
        opt = document.createElement('OPTION')
        opt.text = data[i].name
        opt.value = i
        select.add(opt)
    }
    countryallstations = data
}

function selectstation () { // select a station
    var e = document.getElementById('stations')
    var value = e.options[e.selectedIndex].value
    var sturl = countryallstations[value].url
    console.log(value)
    console.log(sturl)
    var f = document.getElementById('streamurl')
    f.value = sturl
    var g = document.getElementById('favicon')
    var favi = countryallstations[value].favicon
    g.value = favi
    var h = document.getElementById('homepageurl')
    h.value = countryallstations[value].homepage
    scaleCanvasImage(favi)
    var j = document.getElementById('rb_stationname')
    j.value = countryallstations[value].name.trim()
}

function teststreamurl () { // Search: button play - enter a url to play from
    var theUrl = "stationURL=" + streamurl.value
    theUrl = theUrl.replace(/%3d/g, '=') // %3d convert to =
    theUrl = theUrl.replace(/%21/g, '!') //
    theUrl = theUrl.replace(/%22/g, '"') //
    theUrl = theUrl.replace(/%23/g, '#') //
    theUrl = theUrl.replace(/%3f/g, '?') //
    theUrl = theUrl.replace(/%40/g, '@') //
    socket.send(theUrl)
}

function scaleCanvasImage (url) {
    var canvas = document.getElementById('canvas')
    var ctx = canvas.getContext('2d')
    var src
    ctx.beginPath()
    ctx.rect(0, 0, canvas.width, canvas.height)
    ctx.fillStyle = 'white'
    ctx.fill()
    var co = 'https://api.codetabs.com/v1/proxy?quest='
    src = co + url
    var imgObj = new Image()
    imgObj.crossOrigin = 'anonymous'
    imgObj.src = src

    imgObj.onload = function() {
        var imgWidth = imgObj.width
        var imgHeight = imgObj.height
        var scaleX = 1
        var scaleY = 1
        if (imgWidth > canvas.width) scaleX = canvas.width / imgWidth
        if (imgHeight > canvas.height) scaleY = canvas.height / imgHeight
        var scale = scaleY
        if (scaleX < scaleY) scale = scaleX
        if (scale < 1) {
            imgHeight = imgHeight * scale
            imgWidth = imgWidth * scale
        }
        var dx = (canvas.width - imgWidth) / 2
        var dy = (canvas.height - imgHeight) / 2
        ctx.drawImage(imgObj, 0, 0, imgObj.width, imgObj.height, dx, dy, imgWidth, imgHeight)
    }

}

function refreshCanvas () {
    var g = document.getElementById('favicon')
    scaleCanvasImage(g.value)
    console.log('refresh')
}

function uploadCanvasImage () {
    var filename
    var sn = document.getElementById('rb_stationname')
    if (sn.value !== '') filename = sn.value + '.jpg'
    else {
        alert('no stationname given')
        return
    }
    var canvas = document.getElementById('canvas')
    var dataURL = canvas.toDataURL('image/jpeg')
    document.getElementById('hidden_data').value = dataURL
    var fd = new FormData(document.forms.form1)
    var theUrl = '/uploadfile?' + filename + '&version=' + Math.random()
    var xhr = new XMLHttpRequest()
    xhr.timeout = 2000; // time in milliseconds
    xhr.open('POST', theUrl, true)

    xhr.upload.onprogress = function (e) {
        if (e.lengthComputable) {
            var percentComplete = (e.loaded / e.total) * 100
            console.log(percentComplete + '% uploaded')
        }
    }
    xhr.onload = function () {
    }
    xhr.ontimeout = (e) => {
        // XMLHttpRequest timed out.
        alert(filename + ' not uploaded, timeout')
    }
    xhr.onreadystatechange = function () { // Call a function when the state changes.
        if (xhr.readyState === 4) {
          if (xhr.responseText === 'OK') alert(filename + ' successfully uploaded')
            else alert(filename + ' successfully uploaded')
        }
    }
    xhr.send(fd)
}

function downloadCanvasImage () {
    var filename
    var sn = document.getElementById('stationname')
    if (sn.value !== '') filename = sn.value + '.jpg'
    else filename = 'myimage.jpg'
    var lnk = document.createElement('a')
    var e // create an 'off-screen' anchor tag
    lnk.download = filename // the key here is to set the download attribute of the a tag
    lnk.href = canvas.toDataURL('image/jpeg')
    if (document.createEvent) { // create a 'fake' click-event to trigger the download
        e = document.createEvent('MouseEvents')
        e.initMouseEvent('click', true, true, window, 0, 0, 0, 0, 0, false, false, false, false, 0, null)
        lnk.dispatchEvent(e)
    } else if (lnk.fireEvent) {
        lnk.fireEvent('onclick')
    }
}
// -------------------------------------- TAB Info ---------------------------------------

function getTimeZoneName() { //
    var xhr = new XMLHttpRequest()
    xhr.timeout = 2000; // time in milliseconds
    xhr.open('GET', 'getTimeZoneName' + '&version=' + Math.random(), true)
    xhr.onreadystatechange = function () {
        if (xhr.readyState === 4) {
            if (xhr.status === 200) {
                g_timeZoneName =xhr.responseText
                console.log("tzName=", g_timeZoneName)
                return g_timeZoneName
            }
            console.log("xhr.status=", xhr.status)
        }
    }
    xhr.ontimeout = (e) => {
        // XMLHttpRequest timed out. Do something here.
        console.log("timeout in getTimeZoneName()")
    }
    xhr.send()
}

function setTimeZone(selectObject){
    var value = selectObject.value;
    var txt = selectObject.options[selectObject.selectedIndex].text;
    socket.send("setTimeZone=" + txt + "&" + value)
}

function loadTimeZones() { // load from SD
    g_timeZoneName = getTimeZoneName()
    var tzFile = new XMLHttpRequest()
    tzFile.timeout = 2000; // time in milliseconds
    tzFile.open('POST', 'SD/timezones.csv', true)
    tzFile.onreadystatechange = function () {
        if (tzFile.readyState === 4) {
            var tzdata = tzFile.responseText
            var tzNames = tzdata.split("\n")
            select = document.getElementById('TimeZoneSelect') // show Time Zones List
            select.options.length = 0
            var j = 0
            for (var i = 0; i < tzNames.length; i++) {
                var [tzItem1, tzItem2] = tzNames[i].split("\t")
                opt = document.createElement('OPTION')
                opt.text = (tzItem1)
                opt.value = (tzItem2)
                if(tzItem1.length == 0 || tzItem2.length == 0) continue
                select.add(opt)
            }
            for(var i = 0, j = select.options.length; i < j; ++i) {
                if(select.options[i].innerHTML === g_timeZoneName) {
                    select.selectedIndex = i;
                    break;
                }
            }
        }
    }
    tzFile.ontimeout = (e) => {
        // XMLHttpRequest timed out.
        console.log("load SD/timezones.csv timeout")
    }
    tzFile.send()
}  // END loadTimeZones
// -------------------------------------- TAB Remote Control---------------------------------------
function loadIRbuttons(){
  var theUrl = 'loadIRbuttons?' + "" + '&version=' + Math.random()
  var xhr = new XMLHttpRequest()
  xhr.timeout = 2000; // time in milliseconds
  xhr.open('POST', theUrl, true)
  xhr.ontimeout = (e) => {
    // XMLHttpRequest timed out.
    alert('IR buttons not loaded, timeout')
  }
  xhr.onreadystatechange = function () { // Call a function when the state changes.
    if (xhr.readyState === 4) {
      var ir_data = xhr.responseText
      var ir_btnVal = ir_data.split(",")
      ir_address.value = ir_btnVal[0]
      ir_command.value = "0x00"

      for(i = 0; i < 17; i++){
          var id
          id = "#ir_command_" + i
          $(id).val(ir_btnVal[i + 1]);
          chIRcmd(-1)
      }
    }
  }
  xhr.send() // send
}

function IRclick(btn){
  var id = "#ir_command_" + btn
  var val1 = $('#ir_command').val()
  $(id).val(val1)
  chIRcmd(btn)
}

function chIRcmd(btn){  // IR command, value changed
    var arrLen = 17
    var irArr = []
    var val1
    var ret = true
    for(i = 0; i < arrLen; i++){
        var id
        id = "#ir_command_" + i
        val1 = $(id).val().toString()
        irArr.push(val1)
        $(id).val(" ")
        $(id).val(val1)
        $(id).css("background-color", "white");
    }
    console.log(irArr)

    for (var i = 0; i < arrLen; i++) {
        for (var j = 0; j < irArr.length; j++) {
            if(i != j && irArr[i] == irArr[j]){
                var id = "#ir_command_" + i
                if(irArr[j] != ""){
                    $(id).css("background-color", "yellow")
                    ret = false
                }
            }
        }
    }
    if(btn == -1) return
    if(ret){
        var id = "#ir_command_" + btn
        socket.send("setIRcmd=" + $(id).val() + "&" + btn)
        console.log("setIRcmd=" + $(id).val() + "&" + btn)
    }
    return
}

</script>

<body id="BODY">
<div id="content" >
    <!-- ~~~~~~~~~~~~~~~~~~~~~~ hidden div ~~~~~~~~~~~~~~~~~~~~~~-->
    <div id="preloaded-images">
        <img src="SD/png/Radio_Green.png"               width="1" height="1" loading="lazy" alt="Image 01">
        <img src="SD/png/Radio_Yellow.png"              width="1" height="1" loading="lazy" alt="Image 02">
        <img src="SD/png/Station_Green.png"             width="1" height="1" loading="lazy" alt="Image 03">
        <img src="SD/png/Station_Yellow.png"            width="1" height="1" loading="lazy" alt="Image 04">
        <img src="SD/png/MP3_Green.png"                 width="1" height="1" loading="lazy" alt="Image 05">
        <img src="SD/png/MP3_Yellow.png"                width="1" height="1" loading="lazy" alt="Image 06">
        <img src="SD/png/Search_Green.png"              width="1" height="1" loading="lazy" alt="Image 06">
        <img src="SD/png/Search_Yellow.png"             width="1" height="1" loading="lazy" alt="Image 07">
        <img src="SD/png/About_Green.png"               width="1" height="1" loading="lazy" alt="Image 08">
        <img src="SD/png/About_Yellow.png"              width="1" height="1" loading="lazy" alt="Image 09">
        <img src="SD/png/Button_Previous_Green.png"     width="1" height="1" loading="lazy" alt="Image 10">
        <img src="SD/png/Button_Previous_Yellow.png"    width="1" height="1" loading="lazy" alt="Image 11">
        <img src="SD/png/Button_Previous_Blue.png"      width="1" height="1" loading="lazy" alt="Image 12">
        <img src="SD/png/Button_Next_Green.png"         width="1" height="1" loading="lazy" alt="Image 13">
        <img src="SD/png/Button_Next_Yellow.png"        width="1" height="1" loading="lazy" alt="Image 14">
        <img src="SD/png/Button_Volume_Down_Blue.png"   width="1" height="1" loading="lazy" alt="Image 15">
        <img src="SD/png/Button_Volume_Down_Yellow.png" width="1" height="1" loading="lazy" alt="Image 16">
        <img src="SD/png/Button_Volume_Up_Blue.png"     width="1" height="1" loading="lazy" alt="Image 17">
        <img src="SD/png/Button_Volume_Up_Yellow.png"   width="1" height="1" loading="lazy" alt="Image 18">
        <img src="SD/png/Button_Mute_Green.png"         width="1" height="1" loading="lazy" alt="Image 19">
        <img src="SD/png/Button_Mute_Yellow.png"        width="1" height="1" loading="lazy" alt="Image 20">
        <img src="SD/png/Button_Mute_Red.png"           width="1" height="1" loading="lazy" alt="Image 21">
        <img src="SD/png/Button_Ready_Blue.png"         width="1" height="1" loading="lazy" alt="Image 22">
        <img src="SD/png/Button_Ready_Yellow.png"       width="1" height="1" loading="lazy" alt="Image 23">
        <img src="SD/png/Button_Test_Green.png"         width="1" height="1" loading="lazy" alt="Image 24">
        <img src="SD/png/Button_Test_Yellow.png"        width="1" height="1" loading="lazy" alt="Image 25">
        <img src="SD/png/Button_Upload_Blue.png"        width="1" height="1" loading="lazy" alt="Image 26">
        <img src="SD/png/Button_Upload_Yellow.png"      width="1" height="1" loading="lazy" alt="Image 27">
        <img src="SD/png/Button_Download_Blue.png"      width="1" height="1" loading="lazy" alt="Image 28">
        <img src="SD/png/Button_Download_Yellow.png"    width="1" height="1" loading="lazy" alt="Image 29">
        <img src="SD/png/Remote_Control_Yellow.png"     width="1" height="1" loading="lazy" alt="Image 30">
        <img src="SD/png/Remote_Control_Blue.png"       width="1" height="1" loading="lazy" alt="Image 30">
        <img src="SD/common/MiniWebRadioV2.jpg"         width="1" height="1" loading="lazy" alt="Image 31">
    </div>

    <div id="dialog">
        <table>
            <tr>
                <td> Hide </td>
                <td> <input type="checkbox" id="chkHide"></td>
            </tr>
            <tr>
                <td>  Cy  </td>
                <td> <input type="text" id="txtCy" size="100"></td>
            </tr>
            <tr>
                <td>  StationName  </td>
                <td> <input type="text" id="txtStationName" size="100"></td>
            </tr>
            <tr>
                <td>  StreamURL  </td>
                <td> <input type="text" id="txtStreamURL" size="100"></td>
            </tr>
        </table>
    </div>
    <!-- ~~~~~~~~~~~~~~~~~~~~ hidden div end ~~~~~~~~~~~~~~~~~~~~~~-->

<!--===============================================================================================================================================-->
    <div style="height: 66px; display: flex;">
        <div style="flex: 0 0 445px;">
            <img id="btn1" src="SD/png/Radio_Yellow.png" alt="radio" onclick="showTab1()">
            <img id="btn2" src="SD/png/Station_Green.png" alt="station" onclick="showTab2()">
            <img id="btn3" src="SD/png/MP3_Green.png" alt="mp3" onclick="showTab3()">
            <img id="btn4" src="SD/png/Button_DLNA_Green.png" alt="mp3" onclick="showTab4()">
            <img id="btn5" src="SD/png/Search_Green.png" alt="search" onclick="showTab5()">
            <img id="btn6" src="SD/png/About_Green.png" alt="radio" onclick="showTab6()">
        </div>
        <div style="font-size: 50px; text-align: center; flex: 1;">
            MiniWebRadio
        </div>
    </div>
    <hr>
<!--===============================================================================================================================================-->
    <div id="tab-content1">
        <div style="height: 66px; display: flex;">
            <div style="flex: 0 0 210px;">
                <img src="SD/png/Button_Previous_Green.png" alt="previous"
                        onmousedown="this.src='SD/png/Button_Previous_Yellow.png'"
                        ontouchstart="this.src='SD/png/Button_Previous_Yellow.png'"
                        onmouseup="this.src='SD/png/Button_Previous_Green.png';"
                        ontouchend="this.src='SD/png/Button_Previous_Green.png';"
                        onclick="socket.send('prev_station')">
                <img src="SD/png/Button_Next_Green.png" alt="next"
                        onmousedown="this.src='SD/png/Button_Next_Yellow.png'"
                        ontouchstart="this.src='SD/png/Button_Next_Yellow.png'"
                        onmouseup="this.src='SD/png/Button_Next_Green.png';"
                        ontouchend="this.src='SD/png/Button_Next_Green.png';"
                        onclick="socket.send('next_station')">
            </div>
            <div style="flex:1;">
                <select class="boxstyle" style="width:100%; margin-top: 14px;" onchange="handleStation(this)" id="preset">
                    <option value="-1">Select a station here</option>
                </select>
            </div>
        </div>
        <div style="display: flex;">
            <div id="div-logo-s" style="flex: 0 0 210px;">
                <label for="label-logo" id="label-logo-s" onclick="socket.send('homepage')"> </label>
            </div>
            <div id="div-logo-m" style="flex: 0 0 210px;">
                <label for="label-logo" id="label-logo-m" onclick="socket.send('homepage')"> </label>
            </div>
            <div id="div-tone-h" style="flex:1; justify-content: center;">
                <div style="width: 380px; height:108px;">
                    <label class="sdr_lbl_left">Treble Gain:</label>
                    <div class="slidecontainer" style="float: left; width: 180px; height: 25px;">
                        <input type="range" min="0" max="15" value="8" id="TrebleGain"
                        onmouseup="slider_TG_mouseUp()"
                        ontouchend="slider_TG_mouseUp()"
                        oninput="slider_TG_change()">
                    </div>
                    <label id="label_TG_value" class="sdr_lbl_right">000,0</label>
                    <label class="sdr_lbl_measure">dB</label>
                    <label class="sdr_lbl_left">Treble Freq:</label>
                    <div class="slidecontainer" style="float: left; height: 25px;">
                        <input type="range" min="1" max="15" value="8" id="TrebleFreq"
                        onmouseup="slider_TF_mouseUp()"
                        ontouchend="slider_TF_mouseUp()"
                        oninput="slider_TF_change()">
                    </div>
                    <label id="label_TF_value" class="sdr_lbl_right">00</label>
                    <label class="sdr_lbl_measure">KHz</label>
                    <label class="sdr_lbl_left">Bass Gain:</label>
                    <div class="slidecontainer" style="float: left; height: 25px;">
                        <input type="range" min="0" max="15" value="8" id="BassGain"
                        onmouseup="slider_BG_mouseUp()"
                        ontouchend="slider_BG_mouseUp()"
                        oninput="slider_BG_change()">
                    </div>
                    <label id="label_BG_value" class="sdr_lbl_right">+00</label>
                    <label class="sdr_lbl_measure">dB</label>
                    <label class="sdr_lbl_left">Bass Freq:</label>
                    <div class="slidecontainer" style="float: left; height: 25px;">
                        <input type="range" min="2" max="15" value="6" id="BassFreq"
                        onmouseup="slider_BF_mouseUp()"
                        ontouchend="slider_BF_mouseUp()"
                        oninput="slider_BF_change()">
                    </div>
                    <label  id="label_BF_value" class="sdr_lbl_right">000</label>
                    <label class="sdr_lbl_measure">Hz</label>
                </div>
            </div>
            <div id="div-tone-s" style="flex:1; justify-content: center;">
                <div style="width: 380px; height:130px;">
                    <label class="sdr_lbl_left">Low:</label>
                    <div class="slidecontainer" style="float: left; width: 180px; height: 40px;">
                        <input type="range" min="0" max="15" value="13" id="LowPass"
                        onmouseup="slider_LP_mouseUp()"
                        ontouchend="slider_LP_mouseUp()"
                        oninput="slider_LP_change()">
                    </div>
                    <label id="label_LP_value" class="sdr_lbl_right">0</label>
                    <label class="sdr_lbl_measure">dB</label>
                    <label class="sdr_lbl_left">Band:</label>
                    <div class="slidecontainer" style="float: left; width: 180px; height: 40px;">
                        <input type="range" min="0" max="15" value="13" id="BandPass"
                        onmouseup="slider_BP_mouseUp()"
                        ontouchend="slider_BP_mouseUp()"
                        oninput="slider_BP_change()">
                    </div>
                    <label id="label_BP_value" class="sdr_lbl_right">0</label>
                    <label class="sdr_lbl_measure">dB</label>
                    <label class="sdr_lbl_left">High:</label>
                    <div class="slidecontainer" style="float: left; width: 180px; height: 40px;">
                        <input type="range" min="0" max="15" value="13" id="HighPass"
                        onmouseup="slider_HP_mouseUp()"
                        ontouchend="slider_HP_mouseUp()"
                        oninput="slider_HP_change()">
                    </div>
                    <label id="label_HP_value" class="sdr_lbl_right">0</label>
                    <label class="sdr_lbl_measure">dB</label>
                </div>
            </div>
        </div>
        <div style="height: 66px; display: flex;">
            <div style="flex: 0 0 210px;">
                <img src="SD/png/Button_Volume_Down_Blue.png" alt="Vol_down"
                    onmousedown="this.src='SD/png/Button_Volume_Down_Yellow.png'"
                    ontouchstart="this.src='SD/png/Button_Volume_Down_Yellow.png'"
                    onmouseup="this.src='SD/png/Button_Volume_Down_Blue.png'"
                    ontouchend="this.src='SD/png/Button_Volume_Down_Blue.png'"
                    onclick="socket.send('downvolume')">
                <img src="SD/png/Button_Volume_Up_Blue.png" alt="Vol_up"
                    onmousedown="this.src='SD/png/Button_Volume_Up_Yellow.png'"
                    ontouchstart="this.src='SD/png/Button_Volume_Up_Yellow.png'"
                    onmouseup="this.src='SD/png/Button_Volume_Up_Blue.png'"
                    ontouchend="this.src='SD/png/Button_Volume_Up_Blue.png'"
                    onclick="socket.send('upvolume')">
                <img id="Mute" src="SD/png/Button_Mute_Green.png" alt="Mute"
                    onmousedown="this.src='SD/png/Button_Mute_Yellow.png'"
                    ontouchstart="this.src='SD/png/Button_Mute_Yellow.png'"
                    onclick="socket.send('setmute')">
            </div>
            <div style="flex:1;">
                <input type="text" class="boxstyle" style="width: calc(100% - 8px); margin-top: 14px; padding-left:7px 0;" id="cmd"
                                   placeholder=" Waiting....">
            </div>
        </div>
        <div style="height: 66px; display: flex;">
            <div style="flex:1;">
                <input type="text" class="boxstyle" style="width: calc(100% - 8px); margin-top: 14px; padding-left:7px 0;" id="station"
                    placeholder=" Enter a streamURL here.... , for authentification streamURL|username|password">
            </div>
            <div style="flex: 0 0 66px;">
                <img src="SD/png/Button_Ready_Blue.png" alt="Vol_up"
                    onmousedown="this.src='SD/png/Button_Ready_Yellow.png'"
                    ontouchstart="this.src='SD/png/Button_Ready_Yellow.png'"
                    onmouseup="this.src='SD/png/Button_Ready_Blue.png'"
                    ontouchend='SD/png/Button_Ready_Blue.png'"
                    onclick="setstation()">
            </div>
        </div>
        <div style="height: 66px; display: flex;">
            <div style="flex:1;">
                <input type="text" class="boxstyle" style="width: calc(100% - 8px); margin-top: 14px; padding-left:7px 0;" id="resultstr1"
                                   placeholder=" Test....">
            </div>
            <div style="flex: 0 0 66px;">
                <img src="SD/png/Button_Test_Green.png" alt="Test"
                    onmousedown="this.src='SD/png/Button_Test_Yellow.png'"
                    ontouchstart="this.src='SD/png/Button_Test_Yellow.png'"
                    onmouseup="this.src='SD/png/Button_Test_Green.png'"
                    ontouchend="this.src='SD/png/Button_Test_Green.png'"
                    onclick="test()">
            </div>
        </div>
        <hr>
        <div style="height: 46px; padding: 0; text-align:center;">
            Find new radio stations at
            <a target="_blank" href="https://radiolise.gitlab.io">Radiolise</a>
            or
            <a target="_blank" href="http://streamstat.net/main.cgi?mode=all"> StreamStat.NET </a>
        </div>
    </div>
<!--===============================================================================================================================================-->
    <div id="tab-content2">
        <center>
            <div id="jsGrid"></div>
            <br>
            <button class="button buttongreen"
                    onclick="saveGridFileToSD()"
                    onmousedown="this.style.backgroundColor='#D62C1A'"
                    ontouchstart="this.style.backgroundColor='#D62C1A'"
                    onmouseup="this.style.backgroundColor='#128F76'"
                    ontouchend="this.style.backgroundColor='#128F76'"
                    title="Save to SD">Save
            </button>
            &nbsp;
            <button class="button buttongreen"
                    onclick="loadGridFileFromSD()"
                    onmousedown="this.style.backgroundColor='#D62C1A'"
                    ontouchstart="this.style.backgroundColor='#D62C1A'"
                    onmouseup="this.style.backgroundColor='#128F76'"
                    ontouchend="this.style.backgroundColor='#128F76'"
                    id="loadSD" title="Load from SD">Load
            </button>
            &nbsp;
            <button class="button buttonblue" onclick="saveExcel()" title="Download to PC">save xlsx</button>
            &nbsp;
            <button class="button buttonblue"
                    onclick="javascript:document.getElementById('file').click();"
                    title="Load from PC">load xlsx
            </button>

            <input id="file" type="file" accept="application/vnd.openxmlformats-officedocument.spreadsheetml.sheet" style="visibility: hidden;
                             width: 0px;" name="img"; onchange="loadDataExcel(this.files);">
            <br>
        </center>
    </div>
<!--===============================================================================================================================================-->
    <div id="tab-content3">
        <div class="container" id="filetreeContainer">
            <fieldset>
                <legend> Files </legend>
                <div class="filetree-container">
                    <div id="filebrowser">
                        <div id="audioFileTree"></div>
                    </div>
                </div>
                <hr>
                <div style="height: 66px; display: flex;">
                    <div style="flex:1;">
                        <input type="text" class="boxstyle" style="width: calc(100% - 8px);"
                               id="resultstr3" placeholder="Waiting for a command....">
                    </div>
                    <div style="flex: 0 0 2px;">
                    </div>
                    <div style="flex: 0 0 42px;">
                        <img src="SD/png/Button_Upload_Blue_s.png" alt="Upload" title="UPLOAD TO SD FOLDER"
                            onmousedown="this.src='SD/png/Button_Upload_Yellow_s.png'"
                            ontouchstart="this.src='SD/png/Button_Upload_Yellow_s.png'"
                            onmouseup="this.src='SD/png/Button_Upload_Blue_s.png'"
                            ontouchend="this.src='SD/png/Button_Upload_Blue_s.png'"
                            onclick="javascript:document.getElementById('audioPlayer_File').click();">
                    </div>
                    <div style="flex: 0 0 42px;">
                        <img src="SD/png/Button_Pause_Blue_s.png" alt="Pause" title="PAUSE"
                            onmousedown="this.src='SD/png/Button_Pause_Yellow_s.png'"
                            ontouchstart="this.src='SD/png/Button_Pause_Yellow_s.png'"
                            onmouseup="this.src='SD/png/Button_Pause_Blue_s.png'"
                            ontouchend="this.src='SD/png/Button_Pause_Blue_s.png'"
                            onclick="socket.send('stopfile');">
                    </div>
                    <div style="flex: 0 0 40px;">
                        <img src="SD/png/Button_Right_Blue_s.png" alt="Resume" title="RESUME"
                            onmousedown="this.src='SD/png/Button_Right_Yellow_s.png'"
                            ontouchstart="this.src='SD/png/Button_Right_Yellow_s.png'"
                            onmouseup="this.src='SD/png/Button_Right_Blue_s.png'"
                            ontouchend="this.src='SD/png/Button_Right_Blue_s.png'"
                            onclick="socket.send('resumefile');" />
                    </div>
                </div>
                <div id="explorerUploadProgress" class="progress-bar" role="progressbar"> </div>
                <form method="post" accept-charset="utf-8" name="form2">
                    <input id="audioPlayer_File" type="file" accept="audio/*" style="visibility: hidden; width: 0px;"
                    name="audio" onchange="uploadFile(this.files);">
                </form>
            </fieldset>
        </div>
    </div>

<!--===============================================================================================================================================-->
    <div id="tab-content4">
        <center>
            <div style="flex: 0 0 calc(100% - 0px);">
                <select class="boxstyle" style="width: 100%;" onchange="selectserver(this)" id="server">
                    <option value="-1">Select a DLNA Server here</option>
                </select>
                <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l1(this)" id="level1">
                    <option value="-1"> </option>
                </select>
                <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l2(this)" id="level2">
                    <option value="-1"> </option>
                </select>
                <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l3(this)" id="level3">
                    <option value="-1"> </option>
                </select>
                <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l4(this)" id="level4">
                    <option value="-1"> </option>
                </select>
                <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="select_l5(this)" id="level5">
                    <option value="-1"> </option>
                </select>
            </div>
        </center>

        <div class="container" hidden>
            <fieldset>
                <legend> DLNA </legend>
                <div class="filetree-container">
                    <div>
                        <div id="dlnaFileTree"></div>
                    </div>
                </div>
                <hr>
                <div style="height: 66px; display: flex;">
                    <div style="flex:1;">
                        <input type="text" class="boxstyle" style="width: calc(100% - 8px);"
                               id="resultstr4" placeholder="Waiting for a command....">
                    </div>
                    <div style="flex: 0 0 2px;">
                    </div>
                </div>
            </fieldset>
        </div>

    </div>

<!--===============================================================================================================================================-->
    <div id="tab-content5">
        <div style="height: 30px;">
            This service is provided by
            <a target="_blank" href="http://www.radio-browser.info/">Community Radio Browser</a>
        </div>
        <div style="display: flex;">
            <div style="flex: 0 0 calc(100% - 66px);">
                <select class="boxstyle" style="width: 100%;" onchange="selectcategory(this)" id="category">
                    <option value="-1">Select a category</option>
                    <option value="bycountry">By country</option>
                    <option value="bylanguage">By language</option>
                    <option value="bytag">By tag</option>
                </select>
                <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="selectitem(this)" id="item">
                    <option value="-1">Select a item here</option>
                </select>
                <select class="boxstyle" style="width: 100%; margin-top: 5px;" onchange="selectstation(this)" id="stations">
                    <option value="-1">Select a station here</option>
                </select>
            </div>
        </div>
        <hr>
        <div style="display: flex;">
            <div style="flex: 0 0 calc(100% - 66px); height: 66px;">
                StreamURL
                <input type="text" class="boxstyle" style="width: calc(100% - 8px);"
                id="streamurl" placeholder="StreamURL">
            </div>
             <div style="flex: 1; padding-left: 2px; height: 66px;">
                <img src="SD/png/Button_Ready_Blue.png" alt="Vol_up"
                onmousedown="this.src='SD/png/Button_Ready_Yellow.png'"
                ontouchstart="this.src='SD/png/Button_Ready_Yellow.png'"
                onmouseup="this.src='SD/png/Button_Ready_Blue.png'"
                ontouchend="this.src='SD/png/Button_Ready_Blue.png'"
                onclick="teststreamurl()">
            </div>
        </div>
        <div style="display: flex;">
            <div style="flex: 0 0 calc(100% - 66px); height: 66px;">
                HomepageUrl
                <input type="text" class="boxstyle" style=" width: calc(100% - 8px);" id="homepageurl" placeholder="HomepageURL">
            </div>
            <div style="flex: 1; padding-left: 2px; height: 66px;">
                <img src="SD/png/Button_Ready_Blue.png" alt="Vol_up"
                    onmousedown="this.src='SD/png/Button_Ready_Yellow.png'"
                    ontouchstart="this.src='SD/png/Button_Ready_Yellow.png'"
                    onmouseup="this.src='SD/png/Button_Ready_Blue.png'"
                    ontouchend="this.src='SD/png/Button_Ready_Blue.png'"
                    onclick="window.open(homepageurl.value, '_blank')"/>
            </div>
        </div>
        <div style="display: flex;">
            <div style="flex: 0 0 calc(100% - 66px); height: 66px;">
                LogoUrl
                <input type="text" class="boxstyle" style="width: calc(100% - 8px);" onclick="refreshCanvas()"
                id="favicon" placeholder="Favicon">
            </div>
            <div style="flex: 1;  padding-left: 2px; height: 66px;">
                <img src="SD/png/Button_Ready_Blue.png" alt="Vol_up"
                    onmousedown="this.src='SD/png/Button_Ready_Yellow.png'"
                    ontouchstart="this.src='SD/png/Button_Ready_Yellow.png'"
                    onmouseup="this.src='SD/png/Button_Ready_Blue.png'"
                    ontouchend="this.src='SD/png/Button_Ready_Blue.png'"
                    onclick="window.open(favicon.value, '_blank')"/>
            </div>
        </div>
        <hr>
        <div style="display: flex;">
            <div style="flex: 0 0 130px; padding 1px 5px 5px 1px; ">
                <canvas id="canvas" width="96" height="96" class="playable-canvas"></canvas>
            </div>
            <div style="flex: 1;">
                <div style="flex: 1; height: 38px; padding-left: 10px;">
                    <input type="text" class="boxstyle" style="width: calc(100% - 74px);"
                                id="rb_stationname" placeholder="Change the Stationname here">
                </div>
                <div style="flex: 1;  padding-top: 4px; padding-left: 10px;">
                    <img src="SD/png/Button_Upload_Blue.png" alt="Upload" title="UPLOAD TO SD FOLDER"
                        onmousedown="this.src='SD/png/Button_Upload_Yellow.png'"
                        ontouchstart="this.src='SD/png/Button_Upload_Yellow.png'"
                        onmouseup="this.src='SD/png/Button_Upload_Blue.png'"
                        ontouchend="this.src='SD/png/Button_Upload_Blue.png'"
                        onclick="uploadCanvasImage()"/>
                    <img src="SD/png/Button_Download_Blue.png" alt="Download" title="Download to PC"
                        onmousedown="this.src='SD/png/Button_Download_Yellow.png'"
                        ontouchstart="this.src='SD/png/Button_Download_Yellow.png'"
                        onmouseup="this.src='SD/png/Button_Download_Blue.png'"
                        ontouchend="this.src='SD/png/Button_Download_Blue.png'"
                        onclick="downloadCanvasImage()"/>
                    <img src="SD/png/Button_Previous_Blue.png" alt="addGrid" title="add to list"
                        onmousedown="this.src='SD/png/Button_Previous_Yellow.png'"
                        ontouchstart="this.src='SD/png/Button_Previous_Yellow.png'"
                        onmouseup="this.src='SD/png/Button_Previous_Blue.png'"
                        ontouchend="this.src='SD/png/Button_Previous_Blue.png'"
                        onclick="addStationsToGrid()"/>
                    <form method="post" accept-charset="utf-8" name="form1">
                        <input name="hidden_data" id="hidden_data" type="hidden">
                    </form>
                </div>
            </div>
        </div>
    </div>
<!--===============================================================================================================================================-->
    <div id="tab-content6">
        <p> MiniWebRadio -- Webradio receiver for ESP32, 2.8" or 3.5" color display and VS1053 HW decoder or
            external DAC. This project is documented on
            <a target="blank" href="https://github.com/schreibfaul1/ESP32-MiniWebRadio">Github</a>.
            Author: Wolle (schreibfaul1)
        </p>


        <table>
            <tr>
                <td style="vertical-align: top;">
                    <img src="SD/common/MiniWebRadioV2.jpg" alt="MiniWebRadioV2" border="3">
                </td>
                <td>
                    <div style="display: flex;">
                        <div style="width=64px; height=64px;">
                            <img src="SD/png/Remote_Control_Blue.png" alt="IR Settings" title="Remote Control Settings" onmousedown="this.src='SD/png/Remote_Control_Yellow.png'" ontouchstart="this.src='SD/png/Remote_Control_Yellow.png'" onmouseup="this.src='SD/png/Remote_Control_Blue.png'" ontouchend="this.src='SD/png/Remote_Control_Blue.png'" onclick="showTab7()">
                        </div>
                        <div style="font-size: 1.17em; font-weight: bold; padding-left: 10px;">
                            <p> IR Settings </p>
                        </div>
                    </div>
                    <br>
                    <fieldset>
                        <legend> 12-hour and 24-hour time format </legend>
                        <div>
                            <input type="radio" id="h12" name="timeFormat" value="12h" onclick="socket.send('setTimeFormat=12');">
                            <label for="h12">12h</label>
                        </div>
                        <div>
                            <input type="radio" id="h24" name="timeFormat" value="24h" checked onclick="socket.send('setTimeFormat=24');">
                            <label for="h24">24h</label>
                        </div>
                    </fieldset>
                </td>
            </tr>
        </table>

        <h3>
            Connected WiFi network
            <select class="boxstyle" id="ssid" ></select>
        </h3>

        <h3>
            Timezone
            <select class="boxstyle" onchange="setTimeZone(this)" id="TimeZoneSelect"></select>
        </h3>

        <h3>
            Time announcement on the hour
            <input  type="checkbox" id="chk_timeSpeech"
                    onclick="socket.send('set_timeAnnouncement=' + document.getElementById('chk_timeSpeech').checked);">
        </h3>
    </div>
<!--===============================================================================================================================================-->
    <div id="tab-content7"> <!-- IR Settings -->

       <table>
            <tr>
            <th></th>
            <th> <input type="text" class="boxstyle_s" id="ir_address"> </th>
            <th style="width:180px; text-align: left;"> IR address </th>
            <th></th>
            <th> <input type="text" class="boxstyle_s" id="ir_command"> </th>
            <th style="width:180px; text-align: left;"> IR command </th>
            </tr>

            <tr>
            <td> 0 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_0" onchange="chIRcmd(0)"  onclick="IRclick(0)"  onkeyup="chIRcmd(0)"></td>
            <td class="table_cell1"> ZERO </td>
            <td> 10 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_10" onchange="chIRcmd(10)" onclick="IRclick(10)" onkeyup="chIRcmd(10)"></td>
            <td class="table_cell2">  MUTE <br> long press: SLEEP </td>
            </tr>

            <tr>
            <td> 1 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_1" onchange="chIRcmd(1)" onclick="IRclick(1)" onkeyup="chIRcmd(1)"></td>
            <td class="table_cell1"> ONE</td>
            <td> 11 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_11" onchange="setIRcmd(11)" onclick="IRclick(11)" onkeyup="chIRcmd(11)"></td>
            <td class="table_cell2">VOLUME+ </td>
            </tr>

            <tr>
            <td> 2 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_2" onchange="chIRcmd(2)" onclick="IRclick(2)" onkeyup="chIRcmd(2)"></td>
            <td class="table_cell1">  TWO </td>
            <td> 12 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_12" onchange="chIRcmd(12)" onclick="IRclick(12)" onkeyup="chIRcmd(12)"></td>
            <td class="table_cell2">VOLUME- </td>
            </tr>

            <tr>
            <td> 3 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_3" onchange="chIRcmd(3)" onclick="IRclick(3)" onkeyup="chIRcmd(3)"></td>
            <td class="table_cell1">  THREE </td>
            <td> 13 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_13" onchange="chIRcmd(13)" onclick="IRclick(13)" onkeyup="chIRcmd(13)"></td>
            <td class="table_cell2"> PREVIOUS STATION </td>
            </tr>

            <tr>
            <td> 4 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_4" onchange="chIRcmd(4)" onclick="IRclick(4)" onkeyup="chIRcmd(4)"></td>
            <td class="table_cell1"> FOUR </td>
            <td> 14 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_14" onchange="chIRcmd(14)" onclick="IRclick(14)" onkeyup="chIRcmd(14)"></td>
            <td class="table_cell2">NEXT STATION </td>
            </tr>

            <tr>
            <td> 5 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_5" onchange="chIRcmd(5)" onclick="IRclick(5)" onkeyup="chIRcmd(5)"></td>
            <td class="table_cell1"> FIVE </td>
            <td> 15 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_15" onchange="chIRcmd(15)" onclick="IRclick(15)" onkeyup="chIRcmd(15)"></td>
            <td class="table_cell2"> CLOCK &#60; &#8722; &#62; RADIO </td>
            </tr>

            <tr>
            <td> 6 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_6" onchange="chIRcmd(6)" onclick="IRclick(6)" onkeyup="chIRcmd(6)"></td>
            <td class="table_cell1"> SIX </td>
            <td> 16 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_16" onchange="chIRcmd(16)" onclick="IRclick(16)" onkeyup="chIRcmd(16)"></td>
            <td class="table_cell2">OFF TIMER </td>
            </tr>

            <tr>
            <td> 7 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_7" onchange="chIRcmd(7)" onclick="IRclick(7)" onkeyup="chIRcmd(7)"></td>
            <td class="table_cell1"> SEVEN </td>
            <td>  </td>
            <td> </td>
            <td> </td>
            </tr>

            <tr>
            <td> 8 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_8" onchange="chIRcmd(8)" onclick="IRclick(8)" onkeyup="chIRcmd(8)"></td>
            <td class="table_cell1"> EIGHT </td>
            <td>  </td>
            <td> </td>
            <td> </td>
            </tr>

            <tr>
            <td> 9 </td>
            <td> <input type="text" class="boxstyle_s" id="ir_command_9" onchange="chIRcmd(9)" onclick="IRclick(9)" onkeyup="chIRcmd(9)"></td>
            <td class="table_cell1"> NINE</td>
            <td>  </td>
            <td> </td>
            <td> </td>
            </tr>
        </table>
        <br>
        <button class="button buttongreen"
                onclick="socket.send('saveIRbuttons')"
                onmousedown="this.style.backgroundColor='#D62C1A'"
                ontouchstart="this.style.backgroundColor='#D62C1A'"
                onmouseup="this.style.backgroundColor='#128F76'"
                ontouchend="this.style.backgroundColor='#128F76'"
                title="Save IR buttons">Save
        </button>
        &nbsp;
        <button class="button buttongreen"
                onclick="loadIRbuttons()"
                onmousedown="this.style.backgroundColor='#D62C1A'"
                ontouchstart="this.style.backgroundColor='#D62C1A'"
                onmouseup="this.style.backgroundColor='#128F76'"
                ontouchend="this.style.backgroundColor='#128F76'"
                id="load_IR_Buttons" title="Load IR buttons">Load
        </button>
        <p>Here you can assign a function to the buttons on your NEC remote control. Press a button on your remote
           control and then click on the text field for the desired function. You can test the function immediately.
           Once all the keys you want are assigned, save the settings. This process only needs to be done once.</p>
    </div>
<!--===============================================================================================================================================-->
</div>

<script src="index.js"></script>

</body>
</html>

)=====";
#endif /* INDEX_H_ */
