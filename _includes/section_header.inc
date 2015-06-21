<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
    <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
{% if page.keywords %}
    <meta name="keywords" content="{{ page.keywords }}">
{% endif %}
{% if page.summary %}
    <meta name="description" content="{{ page.summary }}">
{% endif %}
    <meta name="author" content="Fabio Castelli">
    <link rel="shortcut icon" href="/resources/{{ page.layout }}/favicon.ico" type="image/x-icon">
    <link rel="icon" href="/resources/{{ page.layout }}/favicon.ico" type="image/x-icon">
    <link rel="author" href="https://plus.google.com/+FabioCastelli"/>
    <link rel="stylesheet" type="text/css" href="/theme/architects-fonts.css" >
    <link rel="stylesheet" type="text/css" href="/theme/stylesheet.css" media="screen" />
    <link rel="stylesheet" type="text/css" href="/theme/pygment_trac.css" media="screen" />
    <link rel="stylesheet" type="text/css" href="/theme/print.css" media="print" />
    <link rel="stylesheet" type="text/css" href="/theme/stylesheet2.css" media="screen" />

    <!--[if lt IE 7]>
    <script type="text/javascript" src="/resources/{{ page.layout }}/pngfix.js"></script>
    <![endif]-->
    <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->
{% if page.require_jquery %}
  {% include jquery.inc %}
{% endif %}
{% if page.require_jquery_iontabs %}
  {% include jquery_iontabs.inc %}
{% endif %}
    <title>{{ include.module.name }} - {{ page.title }}</title>
  </head>
  <body>
    <header>
      <div class="inner">
        <a href="index.html"><img src="/resources/{{ page.layout }}/archive/latest/icon128.png" style="width: 128px; height: 128px; padding-right: 20px;" align="left"></a>
        <h1>{{ include.module.name }}</h1>
        <h2>{{ page.title }}</h2>
        <a href="{{ include.module.gitrepo }}" class="button"><small>{% if page.language == 'italian' %}Guarda il progetto su{% else %}View project on{% endif %}</small>GitHub</a>
      </div>
    </header>

    <div id="content-wrapper">
      <div class="inner clearfix">
        <section id="main-content">