<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h1>아두이노 LED 연결하기</h1>
	<form action="http://192.168.10.230/led.cgi"><!-- cgi : 공용 게이트웨이 인터페이스 -->
		<h3 style="color: red;">RED</h3>
		<input type="radio" name="LEDStatus" value="1" checked>ON<br>
		<input type="radio" name="LEDStatus" value="0">Off<br>
		
		<input type="submit" value="전송하기">		
	</form>
	
	
</body>
</html>