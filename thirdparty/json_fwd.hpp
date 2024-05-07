<!DOCTYPE html>
<html lang='zh-CN'>
<head>
<title>thirdparty/json_fwd.hpp · Eric Ling/sponge - Gitee.com</title>
<meta content='on' http-equiv='x-dns-prefetch-control'>
<link href='//e.gitee.com' rel='dns-prefetch'>
<link href='//files.gitee.com' rel='dns-prefetch'>
<link href='//toscode.gitee.com' rel='dns-prefetch'>
<link href='https://cn-assets.gitee.com' rel='dns-prefetch'>
<link href='https://portrait.gitee.com' rel='dns-prefetch'>
<link rel="shortcut icon" type="image/vnd.microsoft.icon" href="https://cn-assets.gitee.com/assets/favicon-9007bd527d8a7851c8330e783151df58.ico" />
<link rel="canonical" href="https://gitee.com/ericling666/sponge" />
<meta content='gitee.com/ericling666/sponge git https://gitee.com/ericling666/sponge.git' name='go-import'>
<meta charset='utf-8'>
<meta content='always' name='referrer'>
<meta content='Gitee' property='og:site_name'>
<meta content='Object' property='og:type'>
<meta content='https://gitee.com/ericling666/sponge/blob/main/thirdparty/json_fwd.hpp' property='og:url'>
<meta content='https://gitee.com/static/images/logo_themecolor.png' itemprop='image' property='og:image'>
<meta content='thirdparty/json_fwd.hpp · Eric Ling/sponge - Gitee.com' itemprop='name' property='og:title'>
<meta content='集群聊天服务器，docker compose一键部署' property='og:description'>
<meta content='码云,Gitee,代码托管,Git,Git@OSC,Gitee.com,开源,内源,项目管理,版本控制,开源代码,代码分享,项目协作,开源项目托管,免费代码托管,Git代码托管,Git托管服务' name='Keywords'>
<meta content='集群聊天服务器，docker compose一键部署' itemprop='description' name='Description'>
<meta content='pc,mobile' name='applicable-device'>

<meta content="IE=edge" http-equiv="X-UA-Compatible" />
<meta name="csrf-param" content="authenticity_token" />
<meta name="csrf-token" content="AsQlmz/6Zm8868vO/R6RXgrPQNnEbNXCI/9N/oG9ABsbF+7dbMqhbSZtCYjjUh8dQTlr4M5g19wXg8I2NN+88Q==" />

<link rel="stylesheet" media="all" href="https://cn-assets.gitee.com/assets/application-1b571b6c9a467aaecab21558df35748e.css" />
<script>
//<![CDATA[
window.gon = {};gon.locale="zh-CN";gon.sentry_dsn=null;gon.baidu_register_hm_push=null;gon.sensor={"server_url":"https://haveaniceday.gitee.com:3443/sa?project=production","sdk_url":"https://cn-assets.gitee.com/assets/static/sensors-sdk-2f850fa5b654ad55ac0993fda2f37ba5.js","page_type":"其他"};gon.info={"controller_path":"blob","action_name":"show","current_user":false};gon.tour_env={"current_user":null,"action_name":"show","original_url":"https://gitee.com/ericling666/sponge/blob/main/thirdparty/json_fwd.hpp","controller_path":"blob"};gon.http_clone="https://gitee.com/ericling666/sponge.git";gon.user_project="ericling666/sponge";gon.manage_branch="管理分支";gon.manage_tag="管理标签";gon.enterprise_id=0;gon.create_reaction_path="/ericling666/sponge/reactions";gon.ipipe_base_url="https://go-api.gitee.com";gon.artifact_base_url="https://go-repo.gitee.com";gon.gitee_go_remote_url="https://go.gitee.com/assets";gon.gitee_go_active=false;gon.current_project_is_mirror=false;gon.show_repo_comment=false;gon.diagram_viewer_path="https://diagram-viewer.giteeusercontent.com";gon.ref="main";
//]]>
</script>
<script src="https://cn-assets.gitee.com/assets/static/sensor-6269b9ad61bbcdaff20078e5dcff62d5.js"></script>
<script src="https://cn-assets.gitee.com/assets/static/sentry-5.1.0-a823fb0be1b61c5d7ca4a89f0536cb0a.js"></script>
<script src="https://cn-assets.gitee.com/assets/application-38be9ab12ba6563789dae2327586d01c.js"></script>
<script src="https://cn-assets.gitee.com/assets/lib/jquery.timeago.zh-CN-4a4818e98c1978d2419ab19fabcba740.js"></script>

<link rel="stylesheet" media="all" href="https://cn-assets.gitee.com/assets/projects/application-46b94c31ba11ae8c37eacce2bdb5603e.css" />
<script src="https://cn-assets.gitee.com/assets/projects/app-28ac7648a2f60a4a1529d6db20e4f7f4.js"></script>

<script src="//res.wx.qq.com/open/js/jweixin-1.2.0.js"></script>
<script>
  var title = document.title.replace(/( - Gitee| - 码云)$/, '')
      imgUrl = '';
  
  document.addEventListener('DOMContentLoaded', function(event) {
    var imgUrlEl = document.querySelector('.readme-box .markdown-body > img, .readme-box .markdown-body :not(a) > img');
    imgUrl = imgUrlEl && imgUrlEl.getAttribute('src');
  
    if (!imgUrl) {
      imgUrlEl = document.querySelector('meta[itemprop=image]');
      imgUrl = imgUrlEl && imgUrlEl.getAttribute('content');
      imgUrl = imgUrl || "https://gitee.com/static/images/logo_themecolor.png";
    }
  
    wx.config({
      debug: false,
      appId: "wxff219d611a159737",
      timestamp: "1712749945",
      nonceStr: "9b84e853f36ffb97cb967dd2973ce9c9",
      signature: "b99100a1d305f27fd90b0230f0573c5e7a4d39fb",
      jsApiList: [
        'onMenuShareTimeline',
        'onMenuShareAppMessage'
      ]
    });
  
    wx.ready(function () {
      wx.onMenuShareTimeline({
        title: title, // 分享标题
        link: "https://gitee.com/ericling666/sponge/blob/main/thirdparty/json_fwd.hpp", // 分享链接，该链接域名或路径必须与当前页面对应的公众号JS安全域名一致
        imgUrl: imgUrl // 分享图标
      });
      wx.onMenuShareAppMessage({
        title: title, // 分享标题
        link: "https://gitee.com/ericling666/sponge/blob/main/thirdparty/json_fwd.hpp", // 分享链接，该链接域名或路径必须与当前页面对应的公众号JS安全域名一致
        desc: document.querySelector('meta[name=Description]').getAttribute('content'),
        imgUrl: imgUrl // 分享图标
      });
    });
    wx.error(function(res){
      console.error('err', res)
    });
  })
</script>

<script type='text/x-mathjax-config'>
MathJax.Hub.Config({
  tex2jax: {
    inlineMath: [['$','$'], ['\\(','\\)']],
    displayMath: [["$$","$$"],["\\[","\\]"]],
    processEscapes: true,
    skipTags: ['script', 'noscript', 'style', 'textarea', 'pre', 'code'],
    ignoreClass: "container|files",
    processClass: "markdown-body"
  }
});
</script>
<script src="https://cn-assets.gitee.com/uploads/resources/MathJax-2.7.2/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script>

<script>
  (function () {
    var messages = {
      'zh-CN': {
        addResult: '增加 <b>{term}</b>',
        count: '已选择 {count}',
        maxSelections: '最多 {maxCount} 个选择',
        noResults: '未找到结果',
        serverError: '连接服务器时发生错误'
      },
      'zh-TW': {
        addResult: '增加 <b>{term}</b>',
        count: '已選擇 {count}',
        maxSelections: '最多 {maxCount} 個選擇',
        noResults: '未找到結果',
        serverError: '連接服務器時發生錯誤'
      }
    }
  
    if (messages[gon.locale]) {
      $.fn.dropdown.settings.message = messages[gon.locale]
    }
  }());
</script>

<script>
  var userAgent = navigator.userAgent;
  var isLessIE11 = userAgent.indexOf('compatible') > -1 && userAgent.indexOf('MSIE') > -1;
  if(isLessIE11){
    var can_access = ""
    if (can_access != "true"){
      window.location.href = "/incompatible.html";
    }
  }
  document.addEventListener("error", function (ev) {
    var elem = ev.target;
    if (elem.tagName.toLowerCase() === 'img') {
      elem.src = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAMgAAADICAAAAACIM/FCAAACh0lEQVR4Ae3ch5W0OgyG4dt/mQJ2xgQPzJoM1m3AbALrxzrf28FzsoP0HykJEEAAAUQTBBBAAAEEEEAAAQQQQAABBBBAAAEEEEAAAQQQQAABBBBAAAEEkKK0789+GK/I2ezfQB522PnS1qc8pGgXvr4tE4aY0XOUWlGImThWgyCk6DleixzE7qwBkg/MGiDPlVVAyp1VQGrPKiACDhFI6VkF5LmzCki+sg7IwDoglnVAil0IMkeG9CyUiwsxLFUVFzJJOQaKCjFCDN9RXMjIX7W6ztZXZDKKCyn8sWJvH+nca7WHDN9lROlAliPH9iRKCPI4cswFJQWxB46toLQgQ9jhn5QYZA9DOkoMUoQde5YapAxDWkoNYsOQR3KQd9CxUnIQF4S49CB9ENKlBxmDEKsFUgMCCCCAAHIrSF61f6153Ajy8nyiPr8L5MXnmm4CyT2fzN4DUvHZ+ntA2tOQBRBAAAEEEEAAAQQQ7ZBaC6TwSiDUaYHQ2yuB0MN+ft+43whyrs4rgVCjBUKTFshLC6TUAjGA3AxSaYFYLZBOC2RUAsk8h5qTg9QcbEoOsoQhQ2qQhsO5xCD5dgB5JQaZ+KBKGtKecvR81Ic0ZDjByKdDx0rSEDZ/djQbH+bkIdvfJFm98BfV8hD2zprfVdlu9PxVeyYAkciREohRAplJCaRSAplJCcQogTjSAdlyHRBvSAekJR0QRzogA+mADJkOiCPSAPEtqYBshlRAXC43hxix2QiOuEZkVERykGyNo9idIZKE0HO7XrG6OiMShlDWjstVzdPgXtUH9v0CEidAAAEEEEAAAQQQQAABBBBAAAEEEEAAAQQQQAABBBBAAAEEEEAAAQQQQP4HgjZxTpdEii0AAAAASUVORK5CYII=";
    }
  }, true);
</script>
</head>

<body class='git-project lang-zh-CN'>
<header class='common-header fixed noborder' id='git-header-nav'>
<div class='ui container'>
<div class='ui menu header-menu header-container'>
<div class='git-nav-expand-bar'>
<i class='iconfont icon-mode-table'></i>
</div>
<div class='gitee-nav__sidebar'>
<div class='gitee-nav__sidebar-container'>
<div class='gitee-nav__sidebar-top'>
<div class='gitee-nav__avatar-box'></div>
<div class='gitee-nav__buttons-box'>
<a class="ui button small fluid orange" href="/login">登录</a>
<a class="ui button small fluid basic is-register" href="/signup">注册</a>
</div>
</div>
<div class='gitee-nav__sidebar-middle'>
<div class='gitee-nav__sidebar-list'>
<ul>
<li class='gitee-nav__sidebar-item'>
<a href="/explore"><i class='iconfont icon-ic-discover'></i>
<span class='gitee-nav__sidebar-name'>开源</span>
</a></li>
<li class='gitee-nav__sidebar-item'>
<a href="/enterprises"><i class='iconfont icon-ic-enterprise'></i>
<span class='gitee-nav__sidebar-name'>企业版</span>
</a></li>
<li class='gitee-nav__sidebar-item'>
<a href="/education"><i class='iconfont icon-ic-education'></i>
<span class='gitee-nav__sidebar-name'>高校版</span>
</a></li>
<li class='gitee-nav__sidebar-item split-line'></li>
<li class='gitee-nav__sidebar-item'>
<a href="/search"><i class='iconfont icon-ic-search'></i>
<span class='gitee-nav__sidebar-name'>搜索</span>
</a></li>
<li class='gitee-nav__sidebar-item'>
<a href="/help"><i class='iconfont icon-help-circle'></i>
<span class='gitee-nav__sidebar-name'>帮助中心</span>
</a></li>
<li class='gitee-nav__sidebar-item'>
<a href="/terms"><i class='iconfont icon-file'></i>
<span class='gitee-nav__sidebar-name'>使用条款</span>
</a></li>
<li class='gitee-nav__sidebar-item'>
<a href="/about_us"><i class='iconfont icon-issuepx'></i>
<span class='gitee-nav__sidebar-name'>关于我们</span>
</a></li>
</ul>
</div>
</div>
<div class='gitee-nav__sidebar-bottom'>
<div class='gitee-nav__sidebar-close-button'>
<i class='fa fa-angle-double-left'></i>
</div>
</div>
</div>
</div>

<!-- /todo 10周年活动结束后 恢复 -->
<div class='item gitosc-logo'>
<a href="https://gitee.com"><img alt='Gitee - 基于 Git 的代码托管和研发协作平台' class='ui inline image' height='28' src='/static/images/logo.svg?t=158106664' title='Gitee - 基于 Git 的代码托管和研发协作平台' width='95'>
<img alt='Gitee - 基于 Git 的代码托管和研发协作平台' class='ui inline black image' height='28' src='/static/images/logo-black.svg?t=158106664' title='Gitee - 基于 Git 的代码托管和研发协作平台' width='95'>
</a></div>
<a title="开源" class="item " href="/explore">开源
</a><a title="企业版" class="item " sa_evt="click_GiteeCommunity_tab_En" href="/enterprises">企业版
</a><a title="高校版" class="item " href="/education">高校版
</a><a title="私有云" class="item" target="_blank" href="https://gitee.cn?utm_source=giteecom">私有云
</a><a title="Gitee AI" class="item mr-3" id="gitee-blog" target="_blank" href="https://ai.gitee.com/?utm_sources=site_nav">Gitee AI
<sup class='ui red label'>
NEW
</sup>
</a><div class='center responsive-logo'>
<a href="https://gitee.com"><img alt='Gitee - 基于 Git 的代码托管和研发协作平台' class='ui inline image' height='24' src='/static/images/logo.svg?t=158106664' title='Gitee - 基于 Git 的代码托管和研发协作平台' width='85'>
<img alt='Gitee - 基于 Git 的代码托管和研发协作平台' class='ui inline black image' height='24' src='/static/images/logo-black.svg?t=158106664' title='Gitee - 基于 Git 的代码托管和研发协作平台' width='85'>
</a></div>
<div class='right menu userbar right-header' id='git-nav-user-bar'>
<form class="ui item" id="navbar-search-form" data-text-require="搜索关键字不能少于1个" data-text-filter="搜索格式不正确" action="/search" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" />
<input type="hidden" name="type" id="navbar-search-type" />
<input type="hidden" name="fork_filter" id="fork_filter" value="on" />
<div class='ui search header-search'>
<input type="text" name="q" id="navbar-search-input" value="" class="prompt" placeholder="搜开源" />
</div>
</form>

<script>
  var can_search_in_repo = 1,
      repo = "VFhwRk5FMTZXWGhOUkVKb1RucFplbHBuUFQxaE56WXpaZz09YTc2M2Y=",
      reponame = "ericling666/sponge";
  
  $(function() {
    var $search = $('#navbar-search-form .ui.search');
    $search.search({
      apiSettings: {
        url: '/search/relative_project?q={query}',
        onResponse: function (res) {
          if (res && res.status === 200 && res.data) {
            var query = htmlSafe($search.search('get value'));
  
            res.data.map(function (item) {
              item.path_ns = '/' + item.path_ns;
              item.icon = 'iconfont icon-project-public';
            });
            res.data.unshift({
              name_ns: "在全站搜索 <b class='hl'>" + query +"</b> 相关项目",
              path_ns: '/search?fork_filter=on&q=' + query,
              icon: 'iconfont icon-search'
            });
            return res;
          } else {
            return { data: [] };
          }
        }
      },
      fields: {
        results: 'data',
        description: 'name_ns',
        url: 'path_ns',
        icon: 'icon'
      },
      minCharacters: 1,
      maxResults: 10,
      searchDelay: 250,
      showNoResults: false,
      transition: 'fade'
    });
  });
</script>

<div class='ui item' id='feature-update-notice'>
<div class='notice-update-icon'>
<a class="notice-update-popup click-knowed" title="" href="javascript:void(0)"><img alt="功能更新" title="" class="bubl_icon bubl-off-icon" src="https://cn-assets.gitee.com/assets/bulb_off-24ee940be20998aace89a3f040cbc704.svg" />
<img alt="功能更新" title="" class="bubl_icon bubl-on-icon" src="https://cn-assets.gitee.com/assets/bulb_on-3986b1dc417285398e3d15671bd8f261.svg" />
</a></div>
<div class='feature-update-notice-panel menu'>
<div class='notice-img'>
<img alt="" title="" class="notice-img-show" src="" />
</div>
<div class='notice-update-title'></div>
<div class='notice-update-des'></div>
<div class='notice-btn-list d-flex-between'>
<button name="button" type="button" class="ui basic orange button btn-notice btn-knowed click-knowed" style="margin-right: 0">我知道了</button>
<a class="ui button orange btn-notice btn-details click-knowed" target="_blank" href="">查看详情</a>
</div>
</div>
</div>

<a class="item git-nav-user__login-item" sa_evt="login_show" sa_referrer_url="" sa_referrer_action="站导航右上角-登录按钮" sa_referrer_type="其他" href="/login">登录
</a><a class="item git-nav-user__register-item" sa_evt="register_show" sa_referrer_url="" sa_referrer_action="站导航右上角-注册按钮" sa_referrer_type="其他" href="/signup">注册
</a><script>
  $('.destroy-user-session').on('click', function() {
    $.cookie('access_token', null, { path: '/' });
  })
</script>

</div>
</div>
</div>
</header>
<script>
  Gitee.initNavbar()
  Gitee.initRepoRemoteWay()
  $.cookie('user_locale',null)
</script>

<script>
  var userAgent = navigator.userAgent;
  var isLessIE11 = userAgent.indexOf('compatible') > -1 && userAgent.indexOf('MSIE') > -1;
  if(isLessIE11){
    var can_access = ""
    if (can_access != "true"){
      window.location.href = "/incompatible.html";
    }
  }
</script>

<div class='fixed-notice-infos'>
<div class='all-messages'>
</div>
<div class='ui container'>
<div class='flash-messages' id='messages-container'></div>
</div>
<script>
  (function() {
    $(function() {
      var $error_box, alertTip, notify_content, notify_options, template;
      template = '<div data-notify="container" class="ui {0} message" role="alert">' + '<i data-notify="dismiss" class="close icon"></i>' + '<span data-notify="message">{2}</span>' + '</div>';
      notify_content = null;
      notify_options = {};
      alertTip = '';
      $error_box = $(".flash_error.flash_error_box");
      if (notify_options.type === 'error' && $error_box.length > 0 && !$.isEmptyObject(notify_content.message)) {
        if (notify_content.message === 'captcha_fail') {
          alertTip = "验证码不正确";
        } else if (notify_content.message === 'captcha_expired') {
          alertTip = "验证码已过期，请点击刷新";
        } else if (notify_content.message === 'not_found_in_database') {
          alertTip = "帐号或者密码错误";
        } else if (notify_content.message === 'not_found_and_show_captcha') {
          alertTip = "帐号或者密码错误";
        } else if (notify_content.message === 'phone_captcha_fail') {
          alertTip = "手机验证码不通过";
        } else {
          alertTip = notify_content.message;
        }
        return $error_box.html(alertTip).show();
      } else if (notify_content) {
        if ("show" === 'third_party_binding') {
          return $('#third_party_binding-message').html(notify_content.message).addClass('ui message red');
        }
        notify_options.delay = 3000;
        notify_options.template = template;
        notify_options.offset = {
          x: 10,
          y: 30
        };
        notify_options.element = '#messages-container';
        return $.notify(notify_content, notify_options);
      }
    });
  
  }).call(this);
</script>

</div>
<script>
  (function() {
    $(function() {
      var setCookie;
      setCookie = function(name, value) {
        $.cookie(name, value, {
          path: '/',
          expires: 365
        });
      };
      $('#remove-bulletin, #remove-bulletin-dashboard').on('click', function() {
        setCookie('remove_bulletin', "gitee-maintain-1711586950");
        $('#git-bulletin').hide();
      });
      $('#remove-member-bulletin').on('click', function() {
        setCookie('remove_member_bulletin', "gitee_member_bulletin");
        $(this).parent().hide();
      });
      return $('#remove-gift-bulletin').on('click', function() {
        setCookie('remove_gift_bulletin', "gitee-gift-bulletin");
        $(this).parent().hide();
      });
    });
  
  }).call(this);
</script>
<script>
  function closeMessageBanner(pthis, type, val) {
    var json = {}
  
    val = typeof val === 'undefined' ? null : val
    $(pthis).parent().remove()
    if (type === 'out_of_enterprise_member') {
      json = {type: type, data: val}
    } else if (type === 'enterprise_overdue') {
      json = {type: type, data: val}
    }
    $.post('/profile/close_flash_tip', json)
  }
</script>

<div class='site-content'>
<div class='git-project-header'>
<div class='fixed-notice-infos'>
<div class='ui info icon floating message green' id='fetch-ok' style='display: none'>
<div class='content'>
<div class='header status-title'>
<i class='info icon status-icon'></i>
代码拉取完成，页面将自动刷新
</div>
</div>
</div>
<div class='ui info icon floating message error' id='fetch-error' style='display: none'>
<div class='content'>
<div class='header status-title'>
<i class='info icon status-icon'></i>
<span class='error_msg'></span>
</div>
</div>
</div>
</div>
<div class='ui container'>

<div class='git-project-header-details'>
<div class='git-project-header-container'>
<div class='git-project-header-actions'>
<div class='ui tiny modal project-donate-modal' id='project-donate-modal'>
<i class='iconfont icon-close close'></i>
<div class='header'>捐赠</div>
<div class='content'>
捐赠前请先登录
</div>
<div class='actions'>
<a class='ui blank button cancel'>取消</a>
<a class='ui orange ok button' href='/login'>前往登录</a>
</div>
</div>
<div class='ui small modal wepay-qrcode'>
<i class='iconfont icon-close close'></i>
<div class='header'>
扫描微信二维码支付
<span class='wepay-cash'></span>
</div>
<div class='content weqcode-center'>
<img id='wepay-qrcode' src=''>
</div>
<div class='actions'>
<div class='ui cancel blank button'>取消</div>
<div class='ui ok orange button'>支付完成</div>
</div>
</div>
<div class='ui mini modal' id='confirm-alipay-modal'>
<div class='header'>支付提示</div>
<div class='content'>
将跳转至支付宝完成支付
</div>
<div class='actions'>
<div class='ui approve orange button'>确定</div>
<div class='ui blank cancel button'>取消</div>
</div>
</div>

<span class='ui buttons basic watch-container'>
<div class='ui dropdown button js-project-watch' data-watch-type='unwatch'>
<input type='hidden' value=''>
<i class='iconfont icon-watch'></i>
<div class='text'>
Watch
</div>
<i class='dropdown icon'></i>
<div class='menu'>
<a data-value="unwatch" class="item" sa_evt="loginInform_show" sa_referrer_url="" sa_referrer_action="Watch" sa_referrer_type="其他" rel="nofollow" data-method="post" href="/ericling666/sponge/unwatch"><i class='iconfont icon-msg-read'></i>
不关注
</a><a data-value="watching" class="item" sa_evt="loginInform_show" sa_referrer_url="" sa_referrer_action="Watch" sa_referrer_type="其他" rel="nofollow" data-method="post" href="/ericling666/sponge/watch"><i class='iconfont icon-msg-read'></i>
关注所有动态
</a><a data-value="releases_only" class="disabled item" sa_evt="loginInform_show" sa_referrer_url="" sa_referrer_action="Watch" sa_referrer_type="其他" rel="nofollow" data-method="post" href="/ericling666/sponge/release_only_watch"><i class='iconfont icon-msg-read'></i>
仅关注版本发行动态
</a><a data-value="ignoring" class="item" sa_evt="loginInform_show" sa_referrer_url="" sa_referrer_action="Watch" sa_referrer_type="其他" rel="nofollow" data-method="post" href="/ericling666/sponge/ignoring_watch"><i class='iconfont icon-msg-read'></i>
关注但不提醒动态
</a></div>
</div>
<style>
  .js-project-watch .text .iconfont {
    display: none; }
  .js-project-watch a, .js-project-watch a:hover {
    color: #000; }
  .js-project-watch .item > .iconfont {
    visibility: hidden;
    margin-left: -10px; }
  .js-project-watch .selected .iconfont {
    visibility: visible; }
  .js-project-watch .menu {
    margin-top: 4px !important; }
</style>
<script>
  $('.js-project-watch').dropdown({
    action: 'select',
    onChange: function(value, text, $selectedItem) {
      var type = value === 'unwatch' ? 'Watch' : 'Watching';
      $(this).children('.text').text(type);
      $(this).dropdown('set selected', value)
    }
  });
</script>

<a class="ui button action-social-count" title="2" href="/ericling666/sponge/watchers">2
</a></span>
<span class='basic buttons star-container ui'>
<a class="ui button star" sa_evt="loginInform_show" sa_referrer_url="" sa_referrer_action="Star" sa_referrer_type="其他" href="/login"><i class='iconfont icon-star'></i>
Star
</a><a class="ui button action-social-count " title="6" href="/ericling666/sponge/stargazers">6
</a></span>
<span class='ui basic buttons fork-container' title='无权 Fork 此仓库'>
<a class="ui button fork" title="你必须登录后才可以fork一个仓库" sa_evt="loginInform_show" sa_referrer_url="" sa_referrer_action="Fork" sa_referrer_type="其他" href="/login"><i class='iconfont icon-fork'></i>
Fork
</a><a class="ui button action-social-count disabled-style" title="3" href="/ericling666/sponge/members">3
</a></span>
</div>
<h2 class='git-project-title mt-0 mb-0'>
<span class="project-title"><i class="project-icon iconfont icon-project-public" title="这是一个公开仓库"></i> <a title="Eric Ling" class="author" href="/ericling666">Eric Ling</a> / <a title="sponge" class="repository" target="" style="padding-bottom: 0px; margin-right: 4px" sa_evt="repoClick" sa_location="其他" sa_url="" sa_repo_id="31836100" href="/ericling666/sponge">sponge</a></span><span class="project-badges"><style>
  .gitee-modal {
    width: 500px !important; }
</style>
</span>
<input type="hidden" name="project_title" id="project_title" value="Eric Ling/sponge" />
</h2>
</div>
</div>
</div>
<script>
  var title_import_url = "false";
  var title_post_url = "/ericling666/sponge/update_import";
  var title_fork_url = "/ericling666/sponge/sync_fork";
  var title_project_path = "sponge";
  var title_p_name = "sponge";
  var title_p_id= "31836100";
  var title_description = "集群聊天服务器，docker compose一键部署";
  var title_form_authenticity_token = "dcocQ8T34jh/LZA+5uHVPPfpiGRYvN/wrlx63qe2PKtsGdcFl8clOmWrUnj4rVt/vB+jXVKw3e6aIPUWEtSAQQ==";
  var watch_type = "unwatch";
  var checkFirst = false;
  
  $('.js-project-watch').dropdown('set selected', watch_type);
  $('.checkbox.sync-wiki').checkbox();
  $('.checkbox.sync-prune').checkbox();
  $('.checkbox.team-member-checkbox').checkbox();
</script>
<style>
  i.loading, .icon-sync.loading {
    -webkit-animation: icon-loading 1.2s linear infinite;
    animation: icon-loading 1.2s linear infinite;
  }
  .qrcode_cs {
    float: left;
  }
  .check-sync-wiki {
    float: left;
    height: 28px;
    line-height: 28px;
  }
  .sync-wiki-warn {
    color: #e28560;
  }
</style>

<div class='git-project-nav'>
<div class='ui container'>
<div class='ui secondary pointing menu'>
<a class="item active" href="/ericling666/sponge"><i class='iconfont icon-code'></i>
代码
</a><a class="item " href="/ericling666/sponge/issues"><i class='iconfont icon-task'></i>
Issues
<span class='ui mini circular label'>
0
</span>
</a><a class="item " href="/ericling666/sponge/pulls"><i class='iconfont icon-pull-request'></i>
Pull Requests
<span class='ui mini circular label'>
0
</span>
</a><a class="item " href="/ericling666/sponge/wikis"><i class='iconfont icon-wiki'></i>
Wiki
</a><a class="item  " href="/ericling666/sponge/graph/main"><i class='iconfont icon-statistics'></i>
统计
</a><a class="item " href="/ericling666/sponge/gitee_go"><i class='iconfont icon-workflow'></i>
流水线
</a><div class='item'>
<div class='ui pointing top right dropdown git-project-service'>
<div>
<i class='iconfont icon-service'></i>
服务
<i class='dropdown icon'></i>
</div>
<div class='menu' style='display:none'>
<a class="item" href="/ericling666/sponge/pages"><img src="/static/images/logo-en.svg" alt="Logo en" />
<div class='item-title'>
Gitee Pages
</div>
</a><a class="item" href="/ericling666/sponge/javadoc"><img src="https://cn-assets.gitee.com/assets/maven-bd58aee84f266d64d4b8ce5b006a9fcf.png" alt="Maven" />
<div class='item-title'>
JavaDoc
</div>
</a><a class="item" href="/ericling666/sponge/phpdoc"><img src="https://cn-assets.gitee.com/assets/phpdoc-a99f87c2feaa2fd99e5065377a39487e.png" alt="Phpdoc" />
<div class='item-title'>
PHPDoc
</div>
</a><a class="item" href="/ericling666/sponge/quality_analyses?platform=sonar_qube"><img src="https://cn-assets.gitee.com/assets/sonar_mini-5e1b54bb9f6c951d97fb778ef623afea.png" alt="Sonar mini" />
<div class='item-title'>
质量分析
</div>
</a><a class="item" target="_blank" href="https://gitee.com/help/articles/4193"><img src="https://cn-assets.gitee.com/assets/jenkins_for_gitee-554ec65c490d0f1f18de632c48acc4e7.png" alt="Jenkins for gitee" />
<div class='item-title'>
Jenkins for Gitee
</div>
</a><a class="item" target="_blank" href="https://gitee.com/help/articles/4318"><img src="https://cn-assets.gitee.com/assets/cloudbase-1197b95ea3398aff1df7fe17c65a6d42.png?20200925" alt="Cloudbase" />
<div class='item-title'>
腾讯云托管
</div>
</a><a class="item" target="_blank" href="https://gitee.com/help/articles/4330"><img src="https://cn-assets.gitee.com/assets/cloud_serverless-686cf926ced5d6d2f1d6e606d270b81e.png" alt="Cloud serverless" />
<div class='item-title'>
腾讯云 Serverless
</div>
</a><a class="item" href="/ericling666/sponge/open_sca"><img src="https://cn-assets.gitee.com/assets/open_sca/logo-9049ced662b2f9936b8001e6f9cc4952.png" alt="Logo" />
<div class='item-title'>
悬镜安全
</div>
</a><a class="item" target="_blank" href="https://help.gitee.com/devops/connect/Aliyun-SAE"><img src="https://cn-assets.gitee.com/assets/SAE-f3aa9366a1e2b7fff4747402eb8f10c3.png" alt="Sae" />
<div class='item-title'>
阿里云 SAE
</div>
</a><a class="item" id="update-codeblitz-link" target="_blank" href="https://codeblitz.cloud.alipay.com/gitee/ericling666/sponge/tree/main/thirdparty/json_fwd.hpp"><img style="width:100px;margin-top:4px" src="https://cn-assets.gitee.com/assets/Codeblitz-8824e38875a106e16e29ff57ec977b08.png" alt="Codeblitz" />
<div class='item-title'>
Codeblitz
</div>
</a><button class='ui orange basic button quit-button' id='quiting-button'>
我知道了，不再自动展开
</button>
</div>
</div>
</div>
</div>
</div>
</div>
<script>
  $('.git-project-nav .ui.dropdown').dropdown({ action: 'nothing' });
  var gitee_reward_config = JSON.parse(localStorage.getItem('gitee_reward_config') || null) || false
  var $settingText = $('.setting-text')
  // 如果没有访问过
  if(!gitee_reward_config) $settingText.addClass('red-dot')
  $('.git-project-service').dropdown({
    on: 'click',
    action: 'nothing',
    onShow: function () {
      const branch = 'main'
      let newUrl = `https://codeblitz.cloud.alipay.com/gitee/ericling666/sponge/tree/`
      const url = decodeURIComponent(window.location.pathname);
      const startIndex = url.indexOf('main');
      if (startIndex !== -1) {
        newUrl = newUrl + url.substring(startIndex); // 从分支名开始截取
      }else{
        newUrl = newUrl + branch
      }
      const linkElement = document.getElementById("update-codeblitz-link");
      linkElement.setAttribute("href", newUrl);
    },
  })
</script>
<style>
  .git-project-nav i.checkmark.icon {
    color: green;
  }
  #quiting-button {
    display: none;
  }
  
  .git-project-nav .dropdown .menu.hidden:after {
    visibility: hidden !important;
  }
</style>
<script>
  isSignIn = false
  isClickGuide = false
  $('#git-versions.dropdown').dropdown();
  $.ajax({
    url:"/ericling666/sponge/access/add_access_log",
    type:"GET"
  });
  $('#quiting-button').on('click',function() {
    $('.git-project-service').click();
    if (isSignIn) {
      $.post("/projects/set_service_guide")
    }
    $.cookie("Serve_State", true, { expires: 3650, path: '/'})
    $('#quiting-button').hide();
  });
  if (!(isClickGuide || $.cookie("Serve_State") == 'true')) {
    $('.git-project-service').click()
    $('#quiting-button').show()
  }
</script>

</div>
<div class='ui container'>
<div class='register-guide'>
<div class='register-container'>
<div class='regist'>
加入 Gitee
</div>
<div class='description'>
与超过 1200万 开发者一起发现、参与优秀开源项目，私有仓库也完全免费 ：）
</div>
<a class="ui orange button free-registion" sa_evt="register_show" sa_referrer_url="" sa_referrer_action="免费加入" sa_referrer_type="其他" href="/signup?from=project-guide">免费加入</a>
<div class='login'>
已有帐号？
<a href="/login?from=project-guide">立即登录</a>
</div>
</div>
</div>

<div class='git-project-content-wrapper'>

<div class='ui grid' id='project-wrapper'>
<div class='sixteen wide column'>
<div class='git-project-content' id='git-project-content'>
<div class='row'>
<div class='git-project-desc-wrapper'>
<script>
  $('.git-project-desc-wrapper .ui.dropdown').dropdown();
  if (false) {
    gon.project_new_blob_path = "/ericling666/sponge/new/main/thirdparty/json_fwd.hpp"
    bindShowModal({
      el: $('.no-license .project-license__create'),
      complete: function(data, modal) {
        if (!data.haveNoChoice && !data.data) {
          Flash.show('请选择一项开源许可证')
        } else {
          location.href = gon.project_new_blob_path + '?license=' + data.data
        }
      },
      skip: function () {
        location.href = gon.project_new_blob_path + '?license'
      }
    });
  }
  
  $(".project-admin-action-box .reject").click(function() {
    var reason = $('[name=review-reject-reason]').val();
    if (!reason) {
      Flash.error('请选择不通过理由')
      return
    }
    $.ajax({
      type: 'POST',
      url: "/admin/shumei_content/shumei_check/reject_project_public",
      data: {
        reason: reason,
        status: 'rejected',
        project_id: 31836100
      },
      success: function(result){
        if(result.status == 'success'){
          window.location.reload();
        }else{
          Flash.error(result.message)
        }
      }
    })
  })
  
  $(".project-admin-action-box .approve").click(function(){
  
    $.ajax({
      type: 'POST',
      url: "/admin/shumei_content/shumei_check/reject_project_public",
      data: {
        status: 'approved',
        project_id: 31836100
      },
      success: function(result){
        if(result.status == 'success'){
          window.location.reload();
        }else{
          Flash.error(result.message)
        }
      }
    })
  })
  
  $(".project-admin-action-box .waiting").click(function(){
  
    $.ajax({
      type: 'POST',
      url: "/admin/shumei_content/shumei_check/reject_project_public",
      data: {
        status: 'waiting',
        project_id: 31836100
      },
      success: function(result){
        if(result.status == 'success'){
          window.location.reload();
        }else{
          Flash.error(result.message)
        }
      }
    })
  })
  
  $('i.help.circle.icon').popup({
    popup: '.no-license .ui.popup',
    position: 'right center'
  });
  
  $('#remove-no-license-message').on('click', function() {
    $.cookie("skip_repo_no_license_message_31836100", 'hide', { expires: 365 });
    $('#user-no-license-message').hide();
    return;
  });
</script>
</div>

</div>
<div class='git-project-bread' id='git-project-bread'>
<div class='ui horizontal list mr-1'>
<div class='item git-project-branch-item'>
<input type="hidden" name="path" id="path" value="thirdparty/json_fwd.hpp" />
<div class='ui top left pointing dropdown gradient button dropdown-has-tabs' id='git-project-branch'>
<input type="hidden" name="ref" id="ref" value="main" />
<div class='default text'>
main
</div>
<i class='dropdown icon'></i>
<div class='menu'>
<div class='ui left icon input'>
<i class='iconfont icon-search dropdown-search-icon'></i>
<input class='search-branch' placeholder='搜索分支' type='text'>
</div>
<div class='tab-menu project-branch-tab-menu'>
<div class='tab-menu-actions d-align-center'>
<div class='tab-menu-action' data-tab='branches'>
<a class="ui link button" href="/ericling666/sponge/branches">管理</a>
</div>
<div class='tab-menu-action' data-tab='tags'>
<a class="ui link button" href="/ericling666/sponge/tags">管理</a>
</div>
</div>
<div class='tab-menu-item' data-placeholder='搜索分支' data-tab='branches'>
分支 (1)
</div>
</div>
<div class='tab scrolling menu' data-tab='branches' id='branches_panel'>
<div data-value="main" class="item"><span>main</span></div>
</div>
</div>
</div>
<style>
  .iconfont.icon-shieldlock {
    color: #8c92a4;
  }
  .dropdown-search-icon {
    position: absolute;
    top: 8px;
    left: 11px;
  }
</style>
<style>
  #git-project-branch .project-branch-tab-menu {
    width: 400px !important;
    margin: 0 16px !important;
    padding-left: 0px !important;
    padding-right: 0px !important;
    border-bottom: 1px solid #dfe3e9 !important; }
  #git-project-branch .tab-menu-actions {
    position: absolute;
    right: 0px !important;
    bottom: 0.357em; }
  #git-project-branch .tab-menu-action {
    position: relative !important;
    right: 0px !important;
    bottom: 0px !important; }
  #git-project-branch .menu::after {
    display: none !important; }
</style>
<script>
  var $branchesDropdown = $('#branches_panel');
  var $tagsDropdown = $('#tags_panel');
  var $searchNameInput = $('.search-branch');
  var concurrentRequestLock = false;
  var filterXSS = window.filterXSS;
  var search_text = "";
  var branch_page_number = 1;
  var branch_total_pager = Math.ceil(1 / 20) || 1
  
  var flag_is_loading = false;
  var flag_page_number = 1;
  var flag_total_pager = Math.ceil(0 / 20) || 1
  
  $branchesDropdown.scroll(function() {
    var branchesPanel = document.getElementById('branches_panel');
    var numOfBranches = $branchesDropdown.children().length;
    if (branchesPanel.clientHeight + branchesPanel.scrollTop + 37 > branchesPanel.scrollHeight && numOfBranches < 1) {
      debounceLoadMoreBranches.call();
    }
  });
  function resetFlagVal() {
    flag_is_loading = false;
    flag_page_number = 1;
    flag_total_pager = 1;
  
    concurrentRequestLock = false
    search_text = "";
    branch_page_number = 1;
    branch_total_pager = 1
  }
  $searchNameInput.on('input', window.globalUtils.debouce(function (e) {
    resetFlagVal()
    var $currentTab = $('.tab-menu-action.active');
    var numOfBranches = $branchesDropdown.children().length;
    var searchWord = $searchNameInput.val().trim();
    search_text = searchWord
    if($currentTab.data('tab') === 'branches') {
      if (searchWord !== "") {
        loadData(searchWord,1);
      } else {
        loadData();
      }
    }
    var numOfTags = $tagsDropdown.children().length;
    if($currentTab.data('tab') === 'tags') {
      if (searchWord !== "") {
        fetchTags(searchWord,1);
      } else {
        fetchTags();
      }
    }
  }, 500));
  
  function toggleNoResultView($popPanel) {
    let no_data_html= `<div class='mt-1 mb-1 d-flex-center'> <span>暂无数据</span> </div>`
    $popPanel.append(no_data_html)
  }
  var debounceLoadMoreBranches = window.globalUtils.debouce(function () {
    if (concurrentRequestLock) return;
    branch_page_number += 1;
    if (branch_page_number > branch_total_pager) return;
    loadData(search_text, branch_page_number);
  }, 350);
  
  function loadData(search, page) {
    if (concurrentRequestLock) { return; }
    concurrentRequestLock = true;
  
    var searchParams = search || "";
    var pageParams = page || 1;
    $.ajax({
      url: "/" + gon.user_project + "/branches/names.json",
      type: 'GET',
      data: {
        search: searchParams,
        page: pageParams,
      },
      dataType: 'json',
      success: function (data) {
        branch_total_pager = data.total_pages;
        var html = '';
  
        if (pageParams === 1) {
          $branchesDropdown.empty();
        }
        data.branches.forEach(function (branch) {
          var protectRule = '';
          var branchName = filterXSS(branch.name);
          if(branch.branch_type.value === 1) {
            var rule = filterXSS(branch.protection_rule.wildcard);
            protectRule = `<i
                class="iconfont icon-shieldlock protected-branch-popup"
                data-title="受保护分支"
                data-content='保护规则： ${rule}'
              >
              </i>`
          }
          html += `<div data-value='${branchName}' class="item">
                    <span>${branchName}</span> ${protectRule}
                    </div>`
        });
        $branchesDropdown.append(html);
        $('.protected-branch-popup').popup()
        if (pageParams === 1 && data.count === 0) {
          toggleNoResultView($branchesDropdown);
        }
      },
      complete: function () {
        concurrentRequestLock = false;
      }
    });
  }
  
  
  
  $tagsDropdown.scroll(function() {
    var tagsPanel = document.getElementById('tags_panel');
    var numOfTags = $tagsDropdown.children().length;
    if (tagsPanel.clientHeight + tagsPanel.scrollTop + 37 > tagsPanel.scrollHeight && numOfTags < 0) {
      debounceLoadMore.call();
    }
  });
  var debounceLoadMore = window.globalUtils.debouce(function () {
    if (flag_is_loading) return;
    flag_page_number += 1;
    if (flag_page_number > flag_total_pager) return;
    fetchTags(search_text, flag_page_number);
  }, 350);
  
  function fetchTags(search, page) {
    var searchParams = search || "";
    var pageParams = page || 1;
  
    if (flag_is_loading) return;
    flag_is_loading = true;
  
    $.ajax({
      url: "/" + gon.user_project + "/tags/names.json",
      data: {
        search: searchParams,
        page: pageParams,
      },
      type: "GET",
      xhrFields: {
        withCredentials: true,
      },
      success: function (data) {
        flag_total_pager = data.total_pages;
        if (pageParams === 1) {
          $tagsDropdown.html('');
        }
        data.tags.forEach((tag) => {
          const itemDiv = document.createElement('div');
          itemDiv.classList.add('item');
          itemDiv.setAttribute('data-value', tag.name);
          itemDiv.innerText = window.filterXSS(tag.name);
          $tagsDropdown.append(itemDiv)
        });
        if (pageParams === 1 && data.count === 0) {
          toggleNoResultView($tagsDropdown);
        }
      },
      error: function () {
      },
      complete: function () {
        flag_is_loading = false;
      },
    });
  }
  $('.project-branch-tab-menu').on('click','.tab-menu-item', function (e) {
    var $currentTab = $(this).data('tab')
    if($currentTab === 'branches') {
      $searchNameInput.val('')
      search_text = '';
      loadData()
    }
    if($currentTab === 'tags') {
      $searchNameInput.val('')
      search_text = '';
      fetchTags();
    }
  })
</script>

<script>
  $(function () {
    Gitee.initTabsInDropdown($('#git-project-branch').dropdown({
      fullTextSearch: true,
      selectOnKeydown: false,
      action: function (text,value,el) {
        var oItemOrInitObject = el[0] || el
        var isNotSelect = oItemOrInitObject.dataset.tab && oItemOrInitObject.dataset.tab === 'branches'
        if(isNotSelect){
          console.warn("You didn't choose a branch")
          return
        }
        var path = $('#path').val();
        var href = ['/ericling666/sponge/tree', encodeURIComponent(value), path].join('/');
        window.location.href = href;
        return true
      },
      onNoResults: function (searchTerm) {
        //未找到结果
        return true
      },
    }));
    $('.protected-branch-popup').popup()
  })
</script>

</div>
</div>
<div class='git-project-right-actions pull-right'>
<div class='ui orange button' id='btn-dl-or-clone'>
克隆/下载
<i class='dropdown icon'></i>
</div>
<div class='ui small modal' id='git-project-download-panel'>
<i class='iconfont icon-close close'></i>
<div class='header'>
克隆/下载
</div>
<div class='content'>
<div class='ui secondary pointing menu mb-2 menu-container'>
<a class='item active' data-text='' data-type='http' data-url='https://gitee.com/ericling666/sponge.git'>HTTPS</a>
<a class='item' data-text='' data-type='ssh' data-url='git@gitee.com:ericling666/sponge.git'>SSH</a>
<a class='item' data-text="该仓库未启用SVN访问，请仓库管理员前往【&lt;a target='_blank' href=/ericling666/sponge/settings#function&gt;仓库设置&lt;/a&gt;】开启。" data-type='svn' data-url=''>SVN</a>
<a class='item' data-text="该仓库未启用SVN访问，请仓库管理员前往【&lt;a target='_blank' href=/ericling666/sponge/settings#function&gt;仓库设置&lt;/a&gt;】开启。" data-type='svn_ssh' data-url=''>SVN+SSH</a>
<a class="ui basic orange button button-box unlogin-download-btn" sa_evt="loginInform_show" sa_referrer_url="" sa_referrer_action="克隆/下载" sa_referrer_type="其他" href="javascript:void(0);"><i class='icon download'></i>
下载ZIP
</a><div class='ui custom popup popup'>
<div class='popup-container actions'>
<div class='content'>
该操作需登录 Gitee 帐号，请先登录后再操作。
</div>
<a class="ui orange button ok icon" href="/login?from=download_repository_zip">立即登录
</a><a class="ui blank button cancel" href="/signup?from=download_repository_zip">没有帐号，去注册
</a></div>
</div>
</div>
<div class='ui fluid right labeled small input download-url-panel mb-2'>
<input type="text" name="project_url_clone" id="project_url_clone" value="https://gitee.com/ericling666/sponge.git" onclick="focus();select()" readonly="readonly" />
<div class='ui basic label copy-icon-box'>
<i class='icon iconfont icon-clone mr-0 btn-copy-clone' data-clipboard-target='#project_url_clone' id='btn-copy-project_clone_url1'></i>
</div>
</div>
<div class='tip-box mb-2'>
提示
</div>
<div class='mb-1 clone-url-title'>
下载代码请复制以下命令到终端执行
</div>
<div class='ui fluid right labeled small input download-url-panel mb-2'>
<input type="text" name="project_clone_url" id="project_clone_url" value="https://gitee.com/ericling666/sponge.git" onclick="focus();select()" readonly="readonly" />
<div class='ui basic label copy-icon-box'>
<i class='icon iconfont icon-clone mr-0 btn-copy-clone' data-clipboard-target='#project_clone_url' id='btn-copy-project_clone_url'></i>
</div>
</div>
<div class='ui fluid right labeled warning-text forbid-warning-text'>

</div>
<div class='http-ssh-item mb-2'>
<div>
为确保你提交的代码身份被 Gitee 正确识别，请执行以下命令完成配置
</div>
<div class='textarea-box mt-2'>
<textarea class='textarea-content-box' id='global-config-clone' readonly>git config --global user.name userName &#10git config --global user.email userEmail</textarea>
<i class='icon iconfont icon-clone mr-2 btn-copy-clone text-dark' data-clipboard-target='#global-config-clone' id='btn-copy-global-config'></i>
</div>
</div>
<div class='ssh-item item-panel-box'>
<div class='mb-2'>
初次使用 SSH 协议进行代码克隆、推送等操作时，需按下述提示完成 SSH 配置
</div>
<div class='mb-1'>
<span>1</span>
生成 RSA 密钥
</div>
<div class='ui fluid right labeled small input mb-2'>
<input type="text" name="ssh_keygen_clone" id="ssh_keygen_clone" value="ssh-keygen -t rsa" onclick="focus();select()" readonly="readonly" />
<div class='ui basic label copy-icon-box'>
<i class='icon iconfont icon-clone mr-0 btn-copy-clone' data-clipboard-target='#ssh_keygen_clone' id='btn-copy-ssh_keygen'></i>
</div>
</div>
<div class='mb-1'>
<span>2</span>
获取 RSA 公钥内容，并配置到<a href='/profile/sshkeys' target="_blank"> SSH公钥 </a> 中
</div>
<div class='ui fluid right labeled small input mb-2'>
<input type="text" name="id_rsa_clone" id="id_rsa_clone" value="cat ~/.ssh/id_rsa.pub" onclick="focus();select()" readonly="readonly" />
<div class='ui basic label copy-icon-box'>
<i class='icon iconfont icon-clone mr-0 btn-copy-clone' data-clipboard-target='#id_rsa_clone' id='btn-copy-d_rsa'></i>
</div>
</div>
</div>
<div class='svn-item item-panel-box'>
<div class='mb-1 mt-2'>
在 Gitee 上使用 SVN，请访问<a href='https://help.gitee.com/enterprise/code-manage/%E4%BB%A3%E7%A0%81%E6%89%98%E7%AE%A1/%E4%BB%A3%E7%A0%81%E4%BB%93%E5%BA%93/Gitee%20SVN%E6%94%AF%E6%8C%81' target="_blank"> 使用指南 </a>
</div>
</div>
<div class='http-item item-panel-box'>
<div class='mb-2 mt-2'>
使用 HTTPS 协议时，命令行会出现如下账号密码验证步骤。基于安全考虑，Gitee 建议<a href='/profile/personal_access_tokens' target="_blank"> 配置并使用私人令牌 </a>替代登录密码进行克隆、推送等操作
</div>
<div>Username for 'https://gitee.com': userName</div>
<div class='mb-1'>
<span>Password for 'https://userName@gitee.com':</span>
<span>#</span>
<span>
私人令牌
</span>
</div>
</div>
</div>
</div>
<style>
  #git-project-download-panel {
    top: 90px !important; }
    #git-project-download-panel input {
      color: #40485b !important; }
    #git-project-download-panel .textarea-box {
      width: 100%;
      height: 60px;
      color: #9d9d9d;
      border-radius: 2px;
      background-color: #F5F5F5 !important;
      display: -webkit-box;
      display: -ms-flexbox;
      display: flex;
      -webkit-box-align: center;
          -ms-flex-align: center;
              align-items: center; }
    #git-project-download-panel .menu-container {
      font-weight: bold;
      border-color: rgba(0, 0, 0, 0.1) !important;
      border-bottom: 1px solid rgba(0, 0, 0, 0.1) !important; }
      #git-project-download-panel .menu-container .item {
        padding: 7px 12px !important; }
    #git-project-download-panel .hr-item {
      color: rgba(39, 41, 43, 0.15) !important; }
    #git-project-download-panel .textarea-content-box {
      width: 100%;
      height: 60px;
      resize: none;
      border: 0px !important;
      background-color: #F5F5F5 !important;
      color: #40485b !important; }
    #git-project-download-panel .btn-copy-clone {
      cursor: pointer;
      color: rgba(0, 0, 0, 0.87) !important; }
    #git-project-download-panel .copy-icon-box {
      background-color: #F5F5F5 !important;
      border-left: 0px !important; }
    #git-project-download-panel .button-box {
      border: 0px !important;
      float: right !important;
      padding-right: 0 !important; }
    #git-project-download-panel .tip-box {
      border-bottom: 1px solid rgba(0, 0, 0, 0.1) !important;
      padding-bottom: 4px;
      font-weight: 700; }
    #git-project-download-panel .popup-container {
      padding: 8px 12px 4px 12px;
      text-align: center;
      font-size: 14px; }
      #git-project-download-panel .popup-container .ok {
        margin: 12px auto;
        width: 25%;
        min-width: 125px;
        display: block; }
      #git-project-download-panel .popup-container .cancel {
        margin-left: 0; }
</style>
<script>
  $(function () {
    var $btnClone = $('#btn-dl-or-clone')
    var $modalDownload = $('#git-project-download-panel');
    var $input = $('#project_clone_url')
    var $inputUrl = $('#project_url_clone')
    var cloneUrlTitle= $('.clone-url-title')
  
    $('#btn-dl-or-clone').on('click', function (e) {
      e.preventDefault();
      $modalDownload.modal('show');
    })
  
    $modalDownload.find('.menu > .item').on('click', function(e) {
      var $item = $(this).addClass('active');
      $item.siblings().removeClass('active');
      var dataUrl = $item.attr('data-url');
      var cloneUrl = $item.attr('data-url');
      var dataType = $item.attr('data-type')
      var cloneToLocal = '下载代码请复制以下命令到终端执行'
      if(dataType=='http'){
        $modalDownload.find('.http-item').show();
        $('.content > .item-panel-box:not(.http-item)').hide();
        $modalDownload.find('.http-ssh-item').show();
        cloneUrl = 'git clone '+dataUrl
      }else if(dataType=='ssh'){
        $modalDownload.find('.ssh-item').show();
        $('.content > .item-panel-box:not(.ssh-item)').hide();
        $modalDownload.find('.http-ssh-item').show();
        cloneUrl = 'git clone '+dataUrl
      }else if(dataType=='svn') {
        $('.content > .item-panel-box:not(.svn-item)').hide();
        $modalDownload.find('.svn-item').show();
        $modalDownload.find('.http-ssh-item').hide();
        cloneUrl = 'svn checkout '+dataUrl
      }else {
        $('.content > .item-panel-box:not(.svn-item)').hide();
        $modalDownload.find('.svn-item').show();
        $modalDownload.find('.http-ssh-item').hide();
        cloneUrl = 'svn checkout '+dataUrl
      }
      if (dataUrl) {
        $modalDownload.find('.download-url-panel').show();
        $input.val(cloneUrl);
        $inputUrl.val(dataUrl)
        cloneUrlTitle.show();
        $modalDownload.find('.forbid-warning-text').html('');
      } else {
        $modalDownload.find('.download-url-panel').hide();
        //$modalDownload.find('.svn-item').hide();
        cloneUrlTitle.hide();
        $modalDownload.find('.forbid-warning-text').html($item.attr('data-text') || '');
      }
      $.cookie('remote_way', $item.attr('data-type'), { expires: 365, path: '/' });
    }).filter('[data-type="' + ($.cookie('remote_way') || 'http') + '"]').trigger('click');
  
    $('.btn-copy-clone').popup({
      content: '点击复制',
    }).on('click', function(e) {
      e.stopPropagation();
      return false;
    }).each(function(_, btnCopy) {
      var $btnCopy = $(btnCopy);
      new Clipboard(btnCopy).on('success', function() {
        $btnCopy.popup('destroy').popup({
          content: '已复制',
          on: 'manual'
        }).popup('show');
        setTimeout(function() {
          $btnCopy.popup('destroy').popup({
            content: '点击复制'
          });
        }, 2000);
      });
    });
    var $downloadBtn= $('.unlogin-download-btn')
    var $popupContainer = $('.popup-container')
    $downloadBtn.popup({
      popup : $('.custom.popup'),
      position   : 'bottom right',
    }).on('click', function(e) {
      $downloadBtn.popup('destroy').popup({
        popup : $('.custom.popup'),
        on: 'manual',
        position   : 'bottom right',
      }).popup('show');
      setTimeout(function() {
        $downloadBtn.popup('hide');
      }, 2000);
  
    })
  })
</script>

</div>
<div class='d-inline pull-right' id='git-project-root-actions'>
<script>
  $('#git-tree-file').dropdown({
    action: 'hide',
    onHide: function () {
      $('.plus-box').removeClass('click-active')
    },
    onShow: function () {
      $('.plus-box').addClass('click-active')
    }
  });
  $('.disabled-upload-readonly').popup({
    content: "只读目录不允许上传文件",
    className: {
      popup: 'ui popup',
    },
    position: 'bottom center',
  })
  $('.disabled-create-folder').popup({
    content: "只读目录不允许创建目录",
    className: {
      popup: 'ui popup',
    },
    position: 'bottom center',
  })
  $('.disabled-create-file').popup({
    content: "只读目录不允许创建文件",
    className: {
      popup: 'ui popup',
    },
    position: 'bottom center',
  })
  $('.disabled-create-submodule').popup({
    content: "只读目录不允许创建子模块",
    className: {
      popup: 'ui popup',
    },
    position: 'bottom center',
  })
  $('.disabled-upload-readonly, .disabled-create-folder, .disabled-create-file, .disabled-create-submodule').click(function() {
    return false
  })
</script>
<style>
  .disabled-upload-readonly, .disabled-create-file, .disabled-create-folder, .disabled-create-submodule {
    background-color: #dcddde !important;
    color: rgba(0, 0, 0, 0.4) !important;
    opacity: 0.3 !important;
    background-image: none !important;
    -webkit-box-shadow: none !important;
            box-shadow: none !important; }
</style>


</div>
<div class='breadcrumb_path path-breadcrumb-contrainer' id='git-project-breadcrumb'>
<div class='ui breadcrumb path project-path-breadcrumb' id='path-breadcrumb'>
<a data-direction="back" class="section repo-name" style="font-weight: bold" href="/ericling666/sponge/tree/main">sponge
</a><div class='divider'>
/
</div>
<strong>
<a data-direction="back" class="section" href="/ericling666/sponge/tree/main/thirdparty"><span class='cblue'>
thirdparty
</span>
</a></strong>
<div class='divider'>
/
</div>
<strong>
json_fwd.hpp
</strong>
<i class='iconfont icon-clone' data-clipboard-text='thirdparty/json_fwd.hpp' id='btn-copy-file-path'></i>
</div>
<style>
  #btn-copy-file-path {
    vertical-align: middle;
    cursor: pointer;
  }
</style>
<script>
  $btnCopy = $('#btn-copy-file-path')
  $btnCopy.popup({
    content: '复制路径'
  })
  
  if ($btnCopy[0]) {
    new Clipboard($btnCopy[0]).on('success', function() {
      $btnCopy.popup('destroy').popup({
        content: '已复制',
        on: 'manual'
      }).popup('show');
      setTimeout(function () {
        $btnCopy.popup('destroy').popup({
          content: '复制路径'
        });
      }, 2000)
    });
  }
</script>


</div>
<div class='ui horizontal list repo-action-list branches-tags' style='display: none;'>
<div class='item'>
<a class="ui blank button" href="/ericling666/sponge/branches"><i class='iconfont icon-branches'></i>
分支 1
</a></div>
<div class='item mr-3'>
<a class="ui blank button" href="/ericling666/sponge/tags"><i class='iconfont icon-tag'></i>
标签 0
</a></div>
</div>
</div>
<script src="https://cn-assets.gitee.com/webpacks/parse_blob_form_scheme-b72b6a07c9684da96807.bundle.js"></script>
<script>
  if(window.gon.locale == 'en')
    $('.branches-tags').css('margin-top', '12px')
   // 仓库页面切换路径时: 刷新 yaml 错误检查
  $(window).on('pjax-complete:file-show', function () {
    window.parseBlobFormScheme && window.parseBlobFormScheme($('.js-blob-data').data('blob'));
  });
</script>

<style>
  .ui.dropdown .menu > .header {
    text-transform: none; }
</style>
<script>
  $(function () {
    var $tip = $('#apk-download-tip');
    if (!$tip.length) {
      return;
    }
    $tip.find('.btn-close').on('click', function () {
      $tip.hide();
    });
  });
  (function(){
    function pathAutoRender() {
      var $parent = $('#git-project-bread'),
          $child = $('#git-project-bread').children('.ui.horizontal.list'),
          mainWidth = 0;
      $child.each(function (i,item) {
        mainWidth += $(item).width()
      });
      $('.breadcrumb.path.fork-path').remove();
      if (mainWidth > 995) {
        $('#path-breadcrumb').hide();
        $parent.append('<div class="ui breadcrumb path fork-path">' + $('#path-breadcrumb').html() + '<div/>')
      } else {
        $('#path-breadcrumb').show();
      }
    }
    window.pathAutoRender = pathAutoRender;
    pathAutoRender();
  })();
</script>

<div class='row column tree-holder' id='tree-holder'>
<div class='tree-content-holder' id='tree-content-holder'>
<div class='file_holder'>
<div class='file_title'>
<div class='blob-header-title'>
<div class='blob-description'>
<i class="iconfont icon-file"></i>
<span class='file_name' title='json_fwd.hpp'>
json_fwd.hpp
</span>
<small>6.19 KB</small>
</div>
<div class='options'><div class='ui mini buttons basic'>
<textarea name="blob_raw" id="blob_raw" style="display:none;">
//     __ _____ _____ _____&#x000A;//  __|  |   __|     |   | |  JSON for Modern C++&#x000A;// |  |  |__   |  |  | | | |  version 3.11.2&#x000A;// |_____|_____|_____|_|___|  https://github.com/nlohmann/json&#x000A;//&#x000A;// SPDX-FileCopyrightText: 2013-2022 Niels Lohmann &lt;https://nlohmann.me&gt;&#x000A;// SPDX-License-Identifier: MIT&#x000A;&#x000A;#ifndef INCLUDE_NLOHMANN_JSON_FWD_HPP_&#x000A;#define INCLUDE_NLOHMANN_JSON_FWD_HPP_&#x000A;&#x000A;#include &lt;cstdint&gt; // int64_t, uint64_t&#x000A;#include &lt;map&gt; // map&#x000A;#include &lt;memory&gt; // allocator&#x000A;#include &lt;string&gt; // string&#x000A;#include &lt;vector&gt; // vector&#x000A;&#x000A;// #include &lt;nlohmann/detail/abi_macros.hpp&gt;&#x000A;//     __ _____ _____ _____&#x000A;//  __|  |   __|     |   | |  JSON for Modern C++&#x000A;// |  |  |__   |  |  | | | |  version 3.11.2&#x000A;// |_____|_____|_____|_|___|  https://github.com/nlohmann/json&#x000A;//&#x000A;// SPDX-FileCopyrightText: 2013-2022 Niels Lohmann &lt;https://nlohmann.me&gt;&#x000A;// SPDX-License-Identifier: MIT&#x000A;&#x000A;&#x000A;&#x000A;// This file contains all macro definitions affecting or depending on the ABI&#x000A;&#x000A;#ifndef JSON_SKIP_LIBRARY_VERSION_CHECK&#x000A;    #if defined(NLOHMANN_JSON_VERSION_MAJOR) &amp;&amp; defined(NLOHMANN_JSON_VERSION_MINOR) &amp;&amp; defined(NLOHMANN_JSON_VERSION_PATCH)&#x000A;        #if NLOHMANN_JSON_VERSION_MAJOR != 3 || NLOHMANN_JSON_VERSION_MINOR != 11 || NLOHMANN_JSON_VERSION_PATCH != 2&#x000A;            #warning &quot;Already included a different version of the library!&quot;&#x000A;        #endif&#x000A;    #endif&#x000A;#endif&#x000A;&#x000A;#define NLOHMANN_JSON_VERSION_MAJOR 3   // NOLINT(modernize-macro-to-enum)&#x000A;#define NLOHMANN_JSON_VERSION_MINOR 11  // NOLINT(modernize-macro-to-enum)&#x000A;#define NLOHMANN_JSON_VERSION_PATCH 2   // NOLINT(modernize-macro-to-enum)&#x000A;&#x000A;#ifndef JSON_DIAGNOSTICS&#x000A;    #define JSON_DIAGNOSTICS 0&#x000A;#endif&#x000A;&#x000A;#ifndef JSON_USE_LEGACY_DISCARDED_VALUE_COMPARISON&#x000A;    #define JSON_USE_LEGACY_DISCARDED_VALUE_COMPARISON 0&#x000A;#endif&#x000A;&#x000A;#if JSON_DIAGNOSTICS&#x000A;    #define NLOHMANN_JSON_ABI_TAG_DIAGNOSTICS _diag&#x000A;#else&#x000A;    #define NLOHMANN_JSON_ABI_TAG_DIAGNOSTICS&#x000A;#endif&#x000A;&#x000A;#if JSON_USE_LEGACY_DISCARDED_VALUE_COMPARISON&#x000A;    #define NLOHMANN_JSON_ABI_TAG_LEGACY_DISCARDED_VALUE_COMPARISON _ldvcmp&#x000A;#else&#x000A;    #define NLOHMANN_JSON_ABI_TAG_LEGACY_DISCARDED_VALUE_COMPARISON&#x000A;#endif&#x000A;&#x000A;#ifndef NLOHMANN_JSON_NAMESPACE_NO_VERSION&#x000A;    #define NLOHMANN_JSON_NAMESPACE_NO_VERSION 0&#x000A;#endif&#x000A;&#x000A;// Construct the namespace ABI tags component&#x000A;#define NLOHMANN_JSON_ABI_TAGS_CONCAT_EX(a, b) json_abi ## a ## b&#x000A;#define NLOHMANN_JSON_ABI_TAGS_CONCAT(a, b) \&#x000A;    NLOHMANN_JSON_ABI_TAGS_CONCAT_EX(a, b)&#x000A;&#x000A;#define NLOHMANN_JSON_ABI_TAGS                                       \&#x000A;    NLOHMANN_JSON_ABI_TAGS_CONCAT(                                   \&#x000A;            NLOHMANN_JSON_ABI_TAG_DIAGNOSTICS,                       \&#x000A;            NLOHMANN_JSON_ABI_TAG_LEGACY_DISCARDED_VALUE_COMPARISON)&#x000A;&#x000A;// Construct the namespace version component&#x000A;#define NLOHMANN_JSON_NAMESPACE_VERSION_CONCAT_EX(major, minor, patch) \&#x000A;    _v ## major ## _ ## minor ## _ ## patch&#x000A;#define NLOHMANN_JSON_NAMESPACE_VERSION_CONCAT(major, minor, patch) \&#x000A;    NLOHMANN_JSON_NAMESPACE_VERSION_CONCAT_EX(major, minor, patch)&#x000A;&#x000A;#if NLOHMANN_JSON_NAMESPACE_NO_VERSION&#x000A;#define NLOHMANN_JSON_NAMESPACE_VERSION&#x000A;#else&#x000A;#define NLOHMANN_JSON_NAMESPACE_VERSION                                 \&#x000A;    NLOHMANN_JSON_NAMESPACE_VERSION_CONCAT(NLOHMANN_JSON_VERSION_MAJOR, \&#x000A;                                           NLOHMANN_JSON_VERSION_MINOR, \&#x000A;                                           NLOHMANN_JSON_VERSION_PATCH)&#x000A;#endif&#x000A;&#x000A;// Combine namespace components&#x000A;#define NLOHMANN_JSON_NAMESPACE_CONCAT_EX(a, b) a ## b&#x000A;#define NLOHMANN_JSON_NAMESPACE_CONCAT(a, b) \&#x000A;    NLOHMANN_JSON_NAMESPACE_CONCAT_EX(a, b)&#x000A;&#x000A;#ifndef NLOHMANN_JSON_NAMESPACE&#x000A;#define NLOHMANN_JSON_NAMESPACE               \&#x000A;    nlohmann::NLOHMANN_JSON_NAMESPACE_CONCAT( \&#x000A;            NLOHMANN_JSON_ABI_TAGS,           \&#x000A;            NLOHMANN_JSON_NAMESPACE_VERSION)&#x000A;#endif&#x000A;&#x000A;#ifndef NLOHMANN_JSON_NAMESPACE_BEGIN&#x000A;#define NLOHMANN_JSON_NAMESPACE_BEGIN                \&#x000A;    namespace nlohmann                               \&#x000A;    {                                                \&#x000A;    inline namespace NLOHMANN_JSON_NAMESPACE_CONCAT( \&#x000A;                NLOHMANN_JSON_ABI_TAGS,              \&#x000A;                NLOHMANN_JSON_NAMESPACE_VERSION)     \&#x000A;    {&#x000A;#endif&#x000A;&#x000A;#ifndef NLOHMANN_JSON_NAMESPACE_END&#x000A;#define NLOHMANN_JSON_NAMESPACE_END                                     \&#x000A;    }  /* namespace (inline namespace) NOLINT(readability/namespace) */ \&#x000A;    }  // namespace nlohmann&#x000A;#endif&#x000A;&#x000A;&#x000A;/*!&#x000A;@brief namespace for Niels Lohmann&#x000A;@see https://github.com/nlohmann&#x000A;@since version 1.0.0&#x000A;*/&#x000A;NLOHMANN_JSON_NAMESPACE_BEGIN&#x000A;&#x000A;/*!&#x000A;@brief default JSONSerializer template argument&#x000A;&#x000A;This serializer ignores the template arguments and uses ADL&#x000A;([argument-dependent lookup](https://en.cppreference.com/w/cpp/language/adl))&#x000A;for serialization.&#x000A;*/&#x000A;template&lt;typename T = void, typename SFINAE = void&gt;&#x000A;struct adl_serializer;&#x000A;&#x000A;/// a class to store JSON values&#x000A;/// @sa https://json.nlohmann.me/api/basic_json/&#x000A;template&lt;template&lt;typename U, typename V, typename... Args&gt; class ObjectType =&#x000A;         std::map,&#x000A;         template&lt;typename U, typename... Args&gt; class ArrayType = std::vector,&#x000A;         class StringType = std::string, class BooleanType = bool,&#x000A;         class NumberIntegerType = std::int64_t,&#x000A;         class NumberUnsignedType = std::uint64_t,&#x000A;         class NumberFloatType = double,&#x000A;         template&lt;typename U&gt; class AllocatorType = std::allocator,&#x000A;         template&lt;typename T, typename SFINAE = void&gt; class JSONSerializer =&#x000A;         adl_serializer,&#x000A;         class BinaryType = std::vector&lt;std::uint8_t&gt;, // cppcheck-suppress syntaxError&#x000A;         class CustomBaseClass = void&gt;&#x000A;class basic_json;&#x000A;&#x000A;/// @brief JSON Pointer defines a string syntax for identifying a specific value within a JSON document&#x000A;/// @sa https://json.nlohmann.me/api/json_pointer/&#x000A;template&lt;typename RefStringType&gt;&#x000A;class json_pointer;&#x000A;&#x000A;/*!&#x000A;@brief default specialization&#x000A;@sa https://json.nlohmann.me/api/json/&#x000A;*/&#x000A;using json = basic_json&lt;&gt;;&#x000A;&#x000A;/// @brief a minimal map-like container that preserves insertion order&#x000A;/// @sa https://json.nlohmann.me/api/ordered_map/&#x000A;template&lt;class Key, class T, class IgnoredLess, class Allocator&gt;&#x000A;struct ordered_map;&#x000A;&#x000A;/// @brief specialization that maintains the insertion order of object keys&#x000A;/// @sa https://json.nlohmann.me/api/ordered_json/&#x000A;using ordered_json = basic_json&lt;nlohmann::ordered_map&gt;;&#x000A;&#x000A;NLOHMANN_JSON_NAMESPACE_END&#x000A;&#x000A;#endif  // INCLUDE_NLOHMANN_JSON_FWD_HPP_&#x000A;</textarea>
<a class="ui button" id="copy-text" href="#">一键复制</a>
<a class="ui button edit-blob" title="只有登陆后才可以编辑" href="/ericling666/sponge/edit/main/thirdparty/json_fwd.hpp">编辑</a>
<a class="ui button web-ide" target="_blank" href="/-/ide/project/ericling666/sponge/edit/main/-/thirdparty/json_fwd.hpp">Web IDE</a>
<a class="ui button edit-raw" target="_blank" href="/ericling666/sponge/raw/main/thirdparty/json_fwd.hpp">原始数据</a>
<a class="ui button edit-blame" href="/ericling666/sponge/blame/main/thirdparty/json_fwd.hpp">按行查看</a>
<a class="ui button edit-history" href="/ericling666/sponge/commits/main/thirdparty/json_fwd.hpp">历史</a>
</div>
<script>
  "use strict";
  try {
    if((gon.wait_fork!=undefined && gon.wait_fork==true) || (gon.wait_fetch!=undefined && gon.wait_fetch==true)){
      $('.edit-blob').popup({content:"当前仓库正在后台处理中,暂时无法编辑", on: 'hover', delay: { show: 200, hide: 200 }});
      $('.edit-blob').click(function(e){
        e.preventDefault();
      })
    }
  
    var setUrl = function() {
      var params = window.location.search
      if (params==undefined || $.trim(params).length==0) return;
      $('span.options').children('.basic').find('a').each(function(index,ele){
        var origin_href = $(ele).attr('href');
        if (origin_href!="#" && origin_href.indexOf('?') == -1){
          $(ele).attr('href',origin_href+params);
        }
      });
    }
  
    setUrl();
  
    var clipboard = null,
        $btncopy  = $("#copy-text");
  
    clipboard = new Clipboard("#copy-text", {
      text: function(trigger) {
        return $("#blob_raw").val();
      }
    })
  
    clipboard.on('success', function(e) {
      $btncopy.popup('hide');
      $btncopy.popup('destroy');
      $btncopy.popup({content: '已复制', position: 'bottom center'});
      $btncopy.popup('show');
    })
  
    clipboard.on('error', function(e) {
      var giteeModal = new GiteeModalHelper({okText: '确定'});
      giteeModal.alert("一键复制", '复制失败，请手动复制');
    })
  
    $(function() {
      $btncopy.popup({
        content: '点击复制',
        position: 'bottom center'
      })
    })
  
  } catch (error) {
    console.log('blob/action error:' + error);
  }
  
  $('.disabled-edit-readonly').popup({
    content: "只读文件不可编辑",
    className: {
      popup: 'ui popup',
    },
    position: 'bottom center',
  })
  $('.disabled-edit-readonly, .disabled-edit-status').click(function() {
    return false
  })
  $('.has_tooltip').popup({
    position: 'top center'
  });
</script>
<style>
  .disabled-edit-readonly, .disabled-edit-status {
    background-color: #dcddde !important;
    color: rgba(0, 0, 0, 0.4) !important;
    opacity: 0.3 !important;
    background-image: none !important;
    -webkit-box-shadow: none !important;
            box-shadow: none !important;
    cursor: default !important; }
  
  .drawio-iframe-code-card {
    position: relative; }
    .drawio-iframe-code-card textarea {
      width: 100%;
      height: 140px;
      resize: none; }
    .drawio-iframe-code-card .icon-clone {
      position: absolute;
      right: 32px;
      bottom: 32px; }
    .drawio-iframe-code-card iframe {
      border-radius: 2px;
      border: 1px solid #DEDEDF; }
</style>
</div>
</div>
<div class='blob-header-title mt-1 ubblock_tip'>
</div>
<div class='contributor-description'><span class='recent-commit' style='margin-top: 0.7rem'>
<a class="commit-author-link  js-popover-card " data-username="ericling666" href="/ericling666">Eric Ling</a>
<span>提交于</span>
<span class='timeago commit-date' title='2023-10-30 22:57:04 +0800'>
2023-10-30 22:57
</span>
.
<a href="/ericling666/sponge/commit/2291f432873cfecefc878d30a540a485f5c80310">测试json库</a>
</span>
</div>
</div>
<div class='clearfix'></div>
<div class='file_content code'>
<div class='lines white'>
<div class='line-numbers'><a href='#L1' id='L1'>1</a><a href='#L2' id='L2'>2</a><a href='#L3' id='L3'>3</a><a href='#L4' id='L4'>4</a><a href='#L5' id='L5'>5</a><a href='#L6' id='L6'>6</a><a href='#L7' id='L7'>7</a><a href='#L8' id='L8'>8</a><a href='#L9' id='L9'>9</a><a href='#L10' id='L10'>10</a><a href='#L11' id='L11'>11</a><a href='#L12' id='L12'>12</a><a href='#L13' id='L13'>13</a><a href='#L14' id='L14'>14</a><a href='#L15' id='L15'>15</a><a href='#L16' id='L16'>16</a><a href='#L17' id='L17'>17</a><a href='#L18' id='L18'>18</a><a href='#L19' id='L19'>19</a><a href='#L20' id='L20'>20</a><a href='#L21' id='L21'>21</a><a href='#L22' id='L22'>22</a><a href='#L23' id='L23'>23</a><a href='#L24' id='L24'>24</a><a href='#L25' id='L25'>25</a><a href='#L26' id='L26'>26</a><a href='#L27' id='L27'>27</a><a href='#L28' id='L28'>28</a><a href='#L29' id='L29'>29</a><a href='#L30' id='L30'>30</a><a href='#L31' id='L31'>31</a><a href='#L32' id='L32'>32</a><a href='#L33' id='L33'>33</a><a href='#L34' id='L34'>34</a><a href='#L35' id='L35'>35</a><a href='#L36' id='L36'>36</a><a href='#L37' id='L37'>37</a><a href='#L38' id='L38'>38</a><a href='#L39' id='L39'>39</a><a href='#L40' id='L40'>40</a><a href='#L41' id='L41'>41</a><a href='#L42' id='L42'>42</a><a href='#L43' id='L43'>43</a><a href='#L44' id='L44'>44</a><a href='#L45' id='L45'>45</a><a href='#L46' id='L46'>46</a><a href='#L47' id='L47'>47</a><a href='#L48' id='L48'>48</a><a href='#L49' id='L49'>49</a><a href='#L50' id='L50'>50</a><a href='#L51' id='L51'>51</a><a href='#L52' id='L52'>52</a><a href='#L53' id='L53'>53</a><a href='#L54' id='L54'>54</a><a href='#L55' id='L55'>55</a><a href='#L56' id='L56'>56</a><a href='#L57' id='L57'>57</a><a href='#L58' id='L58'>58</a><a href='#L59' id='L59'>59</a><a href='#L60' id='L60'>60</a><a href='#L61' id='L61'>61</a><a href='#L62' id='L62'>62</a><a href='#L63' id='L63'>63</a><a href='#L64' id='L64'>64</a><a href='#L65' id='L65'>65</a><a href='#L66' id='L66'>66</a><a href='#L67' id='L67'>67</a><a href='#L68' id='L68'>68</a><a href='#L69' id='L69'>69</a><a href='#L70' id='L70'>70</a><a href='#L71' id='L71'>71</a><a href='#L72' id='L72'>72</a><a href='#L73' id='L73'>73</a><a href='#L74' id='L74'>74</a><a href='#L75' id='L75'>75</a><a href='#L76' id='L76'>76</a><a href='#L77' id='L77'>77</a><a href='#L78' id='L78'>78</a><a href='#L79' id='L79'>79</a><a href='#L80' id='L80'>80</a><a href='#L81' id='L81'>81</a><a href='#L82' id='L82'>82</a><a href='#L83' id='L83'>83</a><a href='#L84' id='L84'>84</a><a href='#L85' id='L85'>85</a><a href='#L86' id='L86'>86</a><a href='#L87' id='L87'>87</a><a href='#L88' id='L88'>88</a><a href='#L89' id='L89'>89</a><a href='#L90' id='L90'>90</a><a href='#L91' id='L91'>91</a><a href='#L92' id='L92'>92</a><a href='#L93' id='L93'>93</a><a href='#L94' id='L94'>94</a><a href='#L95' id='L95'>95</a><a href='#L96' id='L96'>96</a><a href='#L97' id='L97'>97</a><a href='#L98' id='L98'>98</a><a href='#L99' id='L99'>99</a><a href='#L100' id='L100'>100</a><a href='#L101' id='L101'>101</a><a href='#L102' id='L102'>102</a><a href='#L103' id='L103'>103</a><a href='#L104' id='L104'>104</a><a href='#L105' id='L105'>105</a><a href='#L106' id='L106'>106</a><a href='#L107' id='L107'>107</a><a href='#L108' id='L108'>108</a><a href='#L109' id='L109'>109</a><a href='#L110' id='L110'>110</a><a href='#L111' id='L111'>111</a><a href='#L112' id='L112'>112</a><a href='#L113' id='L113'>113</a><a href='#L114' id='L114'>114</a><a href='#L115' id='L115'>115</a><a href='#L116' id='L116'>116</a><a href='#L117' id='L117'>117</a><a href='#L118' id='L118'>118</a><a href='#L119' id='L119'>119</a><a href='#L120' id='L120'>120</a><a href='#L121' id='L121'>121</a><a href='#L122' id='L122'>122</a><a href='#L123' id='L123'>123</a><a href='#L124' id='L124'>124</a><a href='#L125' id='L125'>125</a><a href='#L126' id='L126'>126</a><a href='#L127' id='L127'>127</a><a href='#L128' id='L128'>128</a><a href='#L129' id='L129'>129</a><a href='#L130' id='L130'>130</a><a href='#L131' id='L131'>131</a><a href='#L132' id='L132'>132</a><a href='#L133' id='L133'>133</a><a href='#L134' id='L134'>134</a><a href='#L135' id='L135'>135</a><a href='#L136' id='L136'>136</a><a href='#L137' id='L137'>137</a><a href='#L138' id='L138'>138</a><a href='#L139' id='L139'>139</a><a href='#L140' id='L140'>140</a><a href='#L141' id='L141'>141</a><a href='#L142' id='L142'>142</a><a href='#L143' id='L143'>143</a><a href='#L144' id='L144'>144</a><a href='#L145' id='L145'>145</a><a href='#L146' id='L146'>146</a><a href='#L147' id='L147'>147</a><a href='#L148' id='L148'>148</a><a href='#L149' id='L149'>149</a><a href='#L150' id='L150'>150</a><a href='#L151' id='L151'>151</a><a href='#L152' id='L152'>152</a><a href='#L153' id='L153'>153</a><a href='#L154' id='L154'>154</a><a href='#L155' id='L155'>155</a><a href='#L156' id='L156'>156</a><a href='#L157' id='L157'>157</a><a href='#L158' id='L158'>158</a><a href='#L159' id='L159'>159</a><a href='#L160' id='L160'>160</a><a href='#L161' id='L161'>161</a><a href='#L162' id='L162'>162</a><a href='#L163' id='L163'>163</a><a href='#L164' id='L164'>164</a><a href='#L165' id='L165'>165</a><a href='#L166' id='L166'>166</a><a href='#L167' id='L167'>167</a><a href='#L168' id='L168'>168</a><a href='#L169' id='L169'>169</a><a href='#L170' id='L170'>170</a><a href='#L171' id='L171'>171</a><a href='#L172' id='L172'>172</a><a href='#L173' id='L173'>173</a><a href='#L174' id='L174'>174</a><a href='#L175' id='L175'>175</a><a href='#L176' id='L176'>176</a></div><div class="highlight markdown-code-block"><pre class=""><div class='line' id='LC1'><span class="c1">//     __ _____ _____ _____</span>&#x000A;</div><div class='line' id='LC2'><span class="c1">//  __|  |   __|     |   | |  JSON for Modern C++</span>&#x000A;</div><div class='line' id='LC3'><span class="c1">// |  |  |__   |  |  | | | |  version 3.11.2</span>&#x000A;</div><div class='line' id='LC4'><span class="c1">// |_____|_____|_____|_|___|  https://github.com/nlohmann/json</span>&#x000A;</div><div class='line' id='LC5'><span class="c1">//</span>&#x000A;</div><div class='line' id='LC6'><span class="c1">// SPDX-FileCopyrightText: 2013-2022 Niels Lohmann &lt;https://nlohmann.me&gt;</span>&#x000A;</div><div class='line' id='LC7'><span class="c1">// SPDX-License-Identifier: MIT</span>&#x000A;</div><div class='line' id='LC8'>&#x000A;</div><div class='line' id='LC9'><span class="cp">#ifndef INCLUDE_NLOHMANN_JSON_FWD_HPP_</span>&#x000A;</div><div class='line' id='LC10'><span class="cp">#define INCLUDE_NLOHMANN_JSON_FWD_HPP_</span>&#x000A;</div><div class='line' id='LC11'>&#x000A;</div><div class='line' id='LC12'><span class="cp">#include</span> <span class="cpf">&lt;cstdint&gt;</span><span class="c1"> // int64_t, uint64_t</span>&#x000A;</div><div class='line' id='LC13'><span class="cp">#include</span> <span class="cpf">&lt;map&gt;</span><span class="c1"> // map</span>&#x000A;</div><div class='line' id='LC14'><span class="cp">#include</span> <span class="cpf">&lt;memory&gt;</span><span class="c1"> // allocator</span>&#x000A;</div><div class='line' id='LC15'><span class="cp">#include</span> <span class="cpf">&lt;string&gt;</span><span class="c1"> // string</span>&#x000A;</div><div class='line' id='LC16'><span class="cp">#include</span> <span class="cpf">&lt;vector&gt;</span><span class="c1"> // vector</span>&#x000A;</div><div class='line' id='LC17'>&#x000A;</div><div class='line' id='LC18'><span class="c1">// #include &lt;nlohmann/detail/abi_macros.hpp&gt;</span>&#x000A;</div><div class='line' id='LC19'><span class="c1">//     __ _____ _____ _____</span>&#x000A;</div><div class='line' id='LC20'><span class="c1">//  __|  |   __|     |   | |  JSON for Modern C++</span>&#x000A;</div><div class='line' id='LC21'><span class="c1">// |  |  |__   |  |  | | | |  version 3.11.2</span>&#x000A;</div><div class='line' id='LC22'><span class="c1">// |_____|_____|_____|_|___|  https://github.com/nlohmann/json</span>&#x000A;</div><div class='line' id='LC23'><span class="c1">//</span>&#x000A;</div><div class='line' id='LC24'><span class="c1">// SPDX-FileCopyrightText: 2013-2022 Niels Lohmann &lt;https://nlohmann.me&gt;</span>&#x000A;</div><div class='line' id='LC25'><span class="c1">// SPDX-License-Identifier: MIT</span>&#x000A;</div><div class='line' id='LC26'>&#x000A;</div><div class='line' id='LC27'>&#x000A;</div><div class='line' id='LC28'>&#x000A;</div><div class='line' id='LC29'><span class="c1">// This file contains all macro definitions affecting or depending on the ABI</span>&#x000A;</div><div class='line' id='LC30'>&#x000A;</div><div class='line' id='LC31'><span class="cp">#ifndef JSON_SKIP_LIBRARY_VERSION_CHECK</span>&#x000A;</div><div class='line' id='LC32'>    <span class="cp">#if defined(NLOHMANN_JSON_VERSION_MAJOR) &amp;&amp; defined(NLOHMANN_JSON_VERSION_MINOR) &amp;&amp; defined(NLOHMANN_JSON_VERSION_PATCH)</span>&#x000A;</div><div class='line' id='LC33'>        <span class="cp">#if NLOHMANN_JSON_VERSION_MAJOR != 3 || NLOHMANN_JSON_VERSION_MINOR != 11 || NLOHMANN_JSON_VERSION_PATCH != 2</span>&#x000A;</div><div class='line' id='LC34'>            <span class="cp">#warning "Already included a different version of the library!"</span>&#x000A;</div><div class='line' id='LC35'>        <span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC36'>    <span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC37'><span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC38'>&#x000A;</div><div class='line' id='LC39'><span class="cp">#define NLOHMANN_JSON_VERSION_MAJOR 3   // NOLINT(modernize-macro-to-enum)</span>&#x000A;</div><div class='line' id='LC40'><span class="cp">#define NLOHMANN_JSON_VERSION_MINOR 11  // NOLINT(modernize-macro-to-enum)</span>&#x000A;</div><div class='line' id='LC41'><span class="cp">#define NLOHMANN_JSON_VERSION_PATCH 2   // NOLINT(modernize-macro-to-enum)</span>&#x000A;</div><div class='line' id='LC42'>&#x000A;</div><div class='line' id='LC43'><span class="cp">#ifndef JSON_DIAGNOSTICS</span>&#x000A;</div><div class='line' id='LC44'>    <span class="cp">#define JSON_DIAGNOSTICS 0</span>&#x000A;</div><div class='line' id='LC45'><span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC46'>&#x000A;</div><div class='line' id='LC47'><span class="cp">#ifndef JSON_USE_LEGACY_DISCARDED_VALUE_COMPARISON</span>&#x000A;</div><div class='line' id='LC48'>    <span class="cp">#define JSON_USE_LEGACY_DISCARDED_VALUE_COMPARISON 0</span>&#x000A;</div><div class='line' id='LC49'><span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC50'>&#x000A;</div><div class='line' id='LC51'><span class="cp">#if JSON_DIAGNOSTICS</span>&#x000A;</div><div class='line' id='LC52'>    <span class="cp">#define NLOHMANN_JSON_ABI_TAG_DIAGNOSTICS _diag</span>&#x000A;</div><div class='line' id='LC53'><span class="cp">#else</span>&#x000A;</div><div class='line' id='LC54'>    <span class="cp">#define NLOHMANN_JSON_ABI_TAG_DIAGNOSTICS</span>&#x000A;</div><div class='line' id='LC55'><span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC56'>&#x000A;</div><div class='line' id='LC57'><span class="cp">#if JSON_USE_LEGACY_DISCARDED_VALUE_COMPARISON</span>&#x000A;</div><div class='line' id='LC58'>    <span class="cp">#define NLOHMANN_JSON_ABI_TAG_LEGACY_DISCARDED_VALUE_COMPARISON _ldvcmp</span>&#x000A;</div><div class='line' id='LC59'><span class="cp">#else</span>&#x000A;</div><div class='line' id='LC60'>    <span class="cp">#define NLOHMANN_JSON_ABI_TAG_LEGACY_DISCARDED_VALUE_COMPARISON</span>&#x000A;</div><div class='line' id='LC61'><span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC62'>&#x000A;</div><div class='line' id='LC63'><span class="cp">#ifndef NLOHMANN_JSON_NAMESPACE_NO_VERSION</span>&#x000A;</div><div class='line' id='LC64'>    <span class="cp">#define NLOHMANN_JSON_NAMESPACE_NO_VERSION 0</span>&#x000A;</div><div class='line' id='LC65'><span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC66'>&#x000A;</div><div class='line' id='LC67'><span class="c1">// Construct the namespace ABI tags component</span>&#x000A;</div><div class='line' id='LC68'><span class="cp">#define NLOHMANN_JSON_ABI_TAGS_CONCAT_EX(a, b) json_abi ## a ## b</span>&#x000A;</div><div class='line' id='LC69'><span class="cp">#define NLOHMANN_JSON_ABI_TAGS_CONCAT(a, b) \</span>&#x000A;</div><div class='line' id='LC70'><span class="cp">    NLOHMANN_JSON_ABI_TAGS_CONCAT_EX(a, b)</span>&#x000A;</div><div class='line' id='LC71'>&#x000A;</div><div class='line' id='LC72'><span class="cp">#define NLOHMANN_JSON_ABI_TAGS                                       \</span>&#x000A;</div><div class='line' id='LC73'><span class="cp">    NLOHMANN_JSON_ABI_TAGS_CONCAT(                                   \</span>&#x000A;</div><div class='line' id='LC74'><span class="cp">            NLOHMANN_JSON_ABI_TAG_DIAGNOSTICS,                       \</span>&#x000A;</div><div class='line' id='LC75'><span class="cp">            NLOHMANN_JSON_ABI_TAG_LEGACY_DISCARDED_VALUE_COMPARISON)</span>&#x000A;</div><div class='line' id='LC76'>&#x000A;</div><div class='line' id='LC77'><span class="c1">// Construct the namespace version component</span>&#x000A;</div><div class='line' id='LC78'><span class="cp">#define NLOHMANN_JSON_NAMESPACE_VERSION_CONCAT_EX(major, minor, patch) \</span>&#x000A;</div><div class='line' id='LC79'><span class="cp">    _v ## major ## _ ## minor ## _ ## patch</span>&#x000A;</div><div class='line' id='LC80'><span class="cp">#define NLOHMANN_JSON_NAMESPACE_VERSION_CONCAT(major, minor, patch) \</span>&#x000A;</div><div class='line' id='LC81'><span class="cp">    NLOHMANN_JSON_NAMESPACE_VERSION_CONCAT_EX(major, minor, patch)</span>&#x000A;</div><div class='line' id='LC82'>&#x000A;</div><div class='line' id='LC83'><span class="cp">#if NLOHMANN_JSON_NAMESPACE_NO_VERSION</span>&#x000A;</div><div class='line' id='LC84'><span class="cp">#define NLOHMANN_JSON_NAMESPACE_VERSION</span>&#x000A;</div><div class='line' id='LC85'><span class="cp">#else</span>&#x000A;</div><div class='line' id='LC86'><span class="cp">#define NLOHMANN_JSON_NAMESPACE_VERSION                                 \</span>&#x000A;</div><div class='line' id='LC87'><span class="cp">    NLOHMANN_JSON_NAMESPACE_VERSION_CONCAT(NLOHMANN_JSON_VERSION_MAJOR, \</span>&#x000A;</div><div class='line' id='LC88'><span class="cp">                                           NLOHMANN_JSON_VERSION_MINOR, \</span>&#x000A;</div><div class='line' id='LC89'><span class="cp">                                           NLOHMANN_JSON_VERSION_PATCH)</span>&#x000A;</div><div class='line' id='LC90'><span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC91'>&#x000A;</div><div class='line' id='LC92'><span class="c1">// Combine namespace components</span>&#x000A;</div><div class='line' id='LC93'><span class="cp">#define NLOHMANN_JSON_NAMESPACE_CONCAT_EX(a, b) a ## b</span>&#x000A;</div><div class='line' id='LC94'><span class="cp">#define NLOHMANN_JSON_NAMESPACE_CONCAT(a, b) \</span>&#x000A;</div><div class='line' id='LC95'><span class="cp">    NLOHMANN_JSON_NAMESPACE_CONCAT_EX(a, b)</span>&#x000A;</div><div class='line' id='LC96'>&#x000A;</div><div class='line' id='LC97'><span class="cp">#ifndef NLOHMANN_JSON_NAMESPACE</span>&#x000A;</div><div class='line' id='LC98'><span class="cp">#define NLOHMANN_JSON_NAMESPACE               \</span>&#x000A;</div><div class='line' id='LC99'><span class="cp">    nlohmann::NLOHMANN_JSON_NAMESPACE_CONCAT( \</span>&#x000A;</div><div class='line' id='LC100'><span class="cp">            NLOHMANN_JSON_ABI_TAGS,           \</span>&#x000A;</div><div class='line' id='LC101'><span class="cp">            NLOHMANN_JSON_NAMESPACE_VERSION)</span>&#x000A;</div><div class='line' id='LC102'><span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC103'>&#x000A;</div><div class='line' id='LC104'><span class="cp">#ifndef NLOHMANN_JSON_NAMESPACE_BEGIN</span>&#x000A;</div><div class='line' id='LC105'><span class="cp">#define NLOHMANN_JSON_NAMESPACE_BEGIN                \</span>&#x000A;</div><div class='line' id='LC106'><span class="cp">    namespace nlohmann                               \</span>&#x000A;</div><div class='line' id='LC107'><span class="cp">    {                                                \</span>&#x000A;</div><div class='line' id='LC108'><span class="cp">    inline namespace NLOHMANN_JSON_NAMESPACE_CONCAT( \</span>&#x000A;</div><div class='line' id='LC109'><span class="cp">                NLOHMANN_JSON_ABI_TAGS,              \</span>&#x000A;</div><div class='line' id='LC110'><span class="cp">                NLOHMANN_JSON_NAMESPACE_VERSION)     \</span>&#x000A;</div><div class='line' id='LC111'><span class="cp">    {</span>&#x000A;</div><div class='line' id='LC112'><span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC113'>&#x000A;</div><div class='line' id='LC114'><span class="cp">#ifndef NLOHMANN_JSON_NAMESPACE_END</span>&#x000A;</div><div class='line' id='LC115'><span class="cp">#define NLOHMANN_JSON_NAMESPACE_END                                     \</span>&#x000A;</div><div class='line' id='LC116'><span class="cp">    }  </span><span class="cm">/* namespace (inline namespace) NOLINT(readability/namespace) */</span><span class="cp"> \</span>&#x000A;</div><div class='line' id='LC117'><span class="cp">    }  // namespace nlohmann</span>&#x000A;</div><div class='line' id='LC118'><span class="cp">#endif</span>&#x000A;</div><div class='line' id='LC119'>&#x000A;</div><div class='line' id='LC120'>&#x000A;</div><div class='line' id='LC121'><span class="cm">/*!</span>&#x000A;</div><div class='line' id='LC122'><span class="cm">@brief namespace for Niels Lohmann</span>&#x000A;</div><div class='line' id='LC123'><span class="cm">@see https://github.com/nlohmann</span>&#x000A;</div><div class='line' id='LC124'><span class="cm">@since version 1.0.0</span>&#x000A;</div><div class='line' id='LC125'><span class="cm">*/</span>&#x000A;</div><div class='line' id='LC126'><span class="n">NLOHMANN_JSON_NAMESPACE_BEGIN</span>&#x000A;</div><div class='line' id='LC127'>&#x000A;</div><div class='line' id='LC128'><span class="cm">/*!</span>&#x000A;</div><div class='line' id='LC129'><span class="cm">@brief default JSONSerializer template argument</span>&#x000A;</div><div class='line' id='LC130'>&#x000A;</div><div class='line' id='LC131'><span class="cm">This serializer ignores the template arguments and uses ADL</span>&#x000A;</div><div class='line' id='LC132'><span class="cm">([argument-dependent lookup](https://en.cppreference.com/w/cpp/language/adl))</span>&#x000A;</div><div class='line' id='LC133'><span class="cm">for serialization.</span>&#x000A;</div><div class='line' id='LC134'><span class="cm">*/</span>&#x000A;</div><div class='line' id='LC135'><span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="nc">T</span> <span class="o">=</span> <span class="kt">void</span><span class="p">,</span> <span class="k">typename</span> <span class="nc">SFINAE</span> <span class="o">=</span> <span class="kt">void</span><span class="p">&gt;</span>&#x000A;</div><div class='line' id='LC136'><span class="k">struct</span> <span class="nc">adl_serializer</span><span class="p">;</span>&#x000A;</div><div class='line' id='LC137'>&#x000A;</div><div class='line' id='LC138'><span class="c1">/// a class to store JSON values</span>&#x000A;</div><div class='line' id='LC139'><span class="c1">/// @sa https://json.nlohmann.me/api/basic_json/</span>&#x000A;</div><div class='line' id='LC140'><span class="k">template</span><span class="o">&lt;</span><span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="nc">U</span><span class="p">,</span> <span class="k">typename</span> <span class="nc">V</span><span class="p">,</span> <span class="k">typename</span><span class="o">...</span> <span class="nc">Args</span><span class="p">&gt;</span> <span class="k">class</span> <span class="nc">ObjectType</span> <span class="o">=</span>&#x000A;</div><div class='line' id='LC141'>         <span class="n">std</span><span class="o">::</span><span class="n">map</span><span class="p">,</span>&#x000A;</div><div class='line' id='LC142'>         <span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="nc">U</span><span class="p">,</span> <span class="k">typename</span><span class="o">...</span> <span class="nc">Args</span><span class="p">&gt;</span> <span class="k">class</span> <span class="nc">ArrayType</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">vector</span><span class="p">,</span>&#x000A;</div><div class='line' id='LC143'>         <span class="k">class</span> <span class="nc">StringType</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">string</span><span class="p">,</span> <span class="k">class</span> <span class="nc">BooleanType</span> <span class="o">=</span> <span class="kt">bool</span><span class="p">,</span>&#x000A;</div><div class='line' id='LC144'>         <span class="k">class</span> <span class="nc">NumberIntegerType</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="kt">int64_t</span><span class="p">,</span>&#x000A;</div><div class='line' id='LC145'>         <span class="k">class</span> <span class="nc">NumberUnsignedType</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="kt">uint64_t</span><span class="p">,</span>&#x000A;</div><div class='line' id='LC146'>         <span class="k">class</span> <span class="nc">NumberFloatType</span> <span class="o">=</span> <span class="kt">double</span><span class="p">,</span>&#x000A;</div><div class='line' id='LC147'>         <span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="nc">U</span><span class="p">&gt;</span> <span class="k">class</span> <span class="nc">AllocatorType</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">allocator</span><span class="p">,</span>&#x000A;</div><div class='line' id='LC148'>         <span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="nc">T</span><span class="p">,</span> <span class="k">typename</span> <span class="nc">SFINAE</span> <span class="o">=</span> <span class="kt">void</span><span class="p">&gt;</span> <span class="k">class</span> <span class="nc">JSONSerializer</span> <span class="o">=</span>&#x000A;</div><div class='line' id='LC149'>         <span class="n">adl_serializer</span><span class="p">,</span>&#x000A;</div><div class='line' id='LC150'>         <span class="k">class</span> <span class="nc">BinaryType</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">vector</span><span class="o">&lt;</span><span class="n">std</span><span class="o">::</span><span class="kt">uint8_t</span><span class="p">&gt;,</span> <span class="c1">// cppcheck-suppress syntaxError</span>&#x000A;</div><div class='line' id='LC151'>         <span class="k">class</span> <span class="nc">CustomBaseClass</span> <span class="o">=</span> <span class="kt">void</span><span class="o">&gt;</span>&#x000A;</div><div class='line' id='LC152'><span class="k">class</span> <span class="nc">basic_json</span><span class="p">;</span>&#x000A;</div><div class='line' id='LC153'>&#x000A;</div><div class='line' id='LC154'><span class="c1">/// @brief JSON Pointer defines a string syntax for identifying a specific value within a JSON document</span>&#x000A;</div><div class='line' id='LC155'><span class="c1">/// @sa https://json.nlohmann.me/api/json_pointer/</span>&#x000A;</div><div class='line' id='LC156'><span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="nc">RefStringType</span><span class="p">&gt;</span>&#x000A;</div><div class='line' id='LC157'><span class="k">class</span> <span class="nc">json_pointer</span><span class="p">;</span>&#x000A;</div><div class='line' id='LC158'>&#x000A;</div><div class='line' id='LC159'><span class="cm">/*!</span>&#x000A;</div><div class='line' id='LC160'><span class="cm">@brief default specialization</span>&#x000A;</div><div class='line' id='LC161'><span class="cm">@sa https://json.nlohmann.me/api/json/</span>&#x000A;</div><div class='line' id='LC162'><span class="cm">*/</span>&#x000A;</div><div class='line' id='LC163'><span class="k">using</span> <span class="n">json</span> <span class="o">=</span> <span class="n">basic_json</span><span class="o">&lt;&gt;</span><span class="p">;</span>&#x000A;</div><div class='line' id='LC164'>&#x000A;</div><div class='line' id='LC165'><span class="c1">/// @brief a minimal map-like container that preserves insertion order</span>&#x000A;</div><div class='line' id='LC166'><span class="c1">/// @sa https://json.nlohmann.me/api/ordered_map/</span>&#x000A;</div><div class='line' id='LC167'><span class="k">template</span><span class="o">&lt;</span><span class="k">class</span> <span class="nc">Key</span><span class="p">,</span> <span class="k">class</span> <span class="nc">T</span><span class="p">,</span> <span class="k">class</span> <span class="nc">IgnoredLess</span><span class="p">,</span> <span class="k">class</span> <span class="nc">Allocator</span><span class="p">&gt;</span>&#x000A;</div><div class='line' id='LC168'><span class="k">struct</span> <span class="nc">ordered_map</span><span class="p">;</span>&#x000A;</div><div class='line' id='LC169'>&#x000A;</div><div class='line' id='LC170'><span class="c1">/// @brief specialization that maintains the insertion order of object keys</span>&#x000A;</div><div class='line' id='LC171'><span class="c1">/// @sa https://json.nlohmann.me/api/ordered_json/</span>&#x000A;</div><div class='line' id='LC172'><span class="k">using</span> <span class="n">ordered_json</span> <span class="o">=</span> <span class="n">basic_json</span><span class="o">&lt;</span><span class="n">nlohmann</span><span class="o">::</span><span class="n">ordered_map</span><span class="o">&gt;</span><span class="p">;</span>&#x000A;</div><div class='line' id='LC173'>&#x000A;</div><div class='line' id='LC174'><span class="n">NLOHMANN_JSON_NAMESPACE_END</span>&#x000A;</div><div class='line' id='LC175'>&#x000A;</div><div class='line' id='LC176'><span class="cp">#endif  // INCLUDE_NLOHMANN_JSON_FWD_HPP_</span>&#x000A;</div></pre><div class="markdown-code-block-copy-btn"></div></div></div>
</div>
<script>
  window.Gitee.initReadmeCatalog();
  toMathMlCode('','markdown-body');
  $('.file_content a, .catalog-li a.anchor').click(function () {
    var anchor = $(this).attr('href')
    window.location.hash = anchor
  })
</script>

</div>
</div>
<div class='tree_progress'></div>
<div class='ui small modal' id='modal-linejump'>
<div class='ui custom form content'>
<div class='field'>
<div class='ui right action input'>
<input placeholder='跳转至某一行...' type='number'>
<div class='ui orange button'>
跳转
</div>
</div>
</div>
</div>
</div>

<div class='complaint'>
<div class='ui modal small form' id='landing-comments-complaint-modal'>
<i class='iconfont icon-close close'></i>
<div class='header'>
举报
</div>
<div class='content'>
<div class='appeal-success-tip hide'>
<i class='iconfont icon-ic_msg_success'></i>
<div class='appeal-success-text'>
举报成功
</div>
<span>
我们将于2个工作日内通过站内信反馈结果给你！
</span>
</div>
<div class='appeal-tip'>
请认真填写举报原因，尽可能描述详细。
</div>
<div class='ui form appeal-form'>
<div class='inline field'>
<label class='left-part appeal-type-wrap'>
举报类型
</label>
<div class='ui dropdown selection' id='appeal-comments-types'>
<div class='text default'>
请选择举报类型
</div>
<i class='dropdown icon'></i>
<div class='menu'></div>
</div>
</div>
<div class='inline field'>
<label class='left-part'>
举报原因
</label>
<textarea class='appeal-reason' id='appeal-comment-reason' name='msg' placeholder='请说明举报原因' rows='3'></textarea>
</div>
<div class='ui message callback-msg hide'></div>
<div class='ui small error text message exceeded-size-tip'></div>
</div>
</div>
<div class='actions'>
<div class='ui button blank cancel'>
取消
</div>
<div class='ui orange icon button disabled ok' id='complaint-comment-confirm'>
发送
</div>
</div>
</div>
<script>
  var $complaintCommentsModal = $('#landing-comments-complaint-modal'),
      $complainCommentType = $complaintCommentsModal.find('#appeal-comments-types'),
      $complaintModalTip = $complaintCommentsModal.find('.callback-msg'),
      $complaintCommentsContent = $complaintCommentsModal.find('.appeal-reason'),
      $complaintCommentBtn = $complaintCommentsModal.find('#complaint-comment-confirm'),
      complaintSending = false,
      initedCommentsType = false;
  
  function initCommentsTypeList() {
    if (!initedCommentsType) {
      $.ajax({
        url: "/appeals/fetch_types",
        method: 'get',
        data: {'type': 'comment'},
        success: function (data) {
          var result = '';
          for (var i = 0; i < data.length; i++) {
            result = result + "<div class='item' data-value='" + data[i].id + "'>" + data[i].name + "</div>";
          }
          $complainCommentType.find('.menu').html(result);
        }
      });
      $complainCommentType.dropdown({showOnFocus: false});
      initedCommentsType = true;
    }
  }
  $complainCommentType.on('click', function() {
    $complaintCommentsModal.modal({
      autofocus: false,
      onApprove: function() {
        return false;
      },
      onHidden: function() {
        restoreCommonentDefault();
      }
    }).modal('show');
  });
  
  $complaintCommentsContent.on('change keyup', function(e) {
    var content = $(this).val();
    if ($.trim(content).length > 0 && $complainCommentType.dropdown('get value').length > 0 ) {
      $complaintCommentBtn.removeClass('disabled');
      return;
    }
    $complaintCommentBtn.addClass('disabled');
  });
  
  
  $complainCommentType.dropdown({
    showOnFocus: false,
    onChange: function(value, text, $selectedItem) {
      if (value.length > 0 && $.trim($complaintCommentsContent.val()).length > 0) {
        $complaintCommentBtn.removeClass('disabled');
        return
      }
      $complaintCommentBtn.addClass('disabled');
    }
  });
  
  function restoreCommonentDefault() {
    $complainCommentType.dropdown('restore defaults');
    $complaintCommentsContent.val('');
    $('.exceeded-size-tip').text('').hide();
    $complaintModalTip.text('').hide();
    setTimeout(function() {
      setCommentSendTip(false);
    }, 1500);
  }
  
  $complaintCommentBtn.on('click',function(e){
    var reason = $complaintCommentsContent.val();
    var appealableId = $('#landing-comments-complaint-modal').attr('data-id');
    if (complaintSending) {
      return;
    }
    var appealType = $complainCommentType.dropdown('get value');
    var formData = new FormData();
    formData.append('appeal_type_id', appealType);
    formData.append('reason', reason);
    formData.append('appeal_type','Note');
    formData.append('target_id',appealableId);
    $.ajax({
      type: 'POST',
      url: "/appeals",
      cache: false,
      contentType: false,
      processData: false,
      data: formData,
      beforeSend: function() {
        setCommentSendStatus(true);
      },
      success: function(res) {
        if (res.status == 200) {
          setCommentSendTip(true);
          setTimeout(function() {
            $complaintCommentsModal.modal('hide');
            restoreCommonentDefault();
          }, 3000);
        }
        setCommentSendStatus(false);
      },
      error: function(err) {
        showCommonTips(err.responseJSON.message, 'error');
        setCommentSendStatus(false);
      }
    })
  });
  
  function showCommonTips(text, type) {
    $complaintModalTip.text(text).show();
    if (type == 'error') {
      $complaintModalTip.removeClass('success').addClass('error');
    } else {
      $complaintModalTip.removeClass('error').addClass('success');
    }
  }
  
  function setCommentSendStatus(value) {
    complaintSending = value;
    if (complaintSending) {
      $complaintCommentBtn.addClass('loading');
      $complaintCommentsContent.attr('readonly', true);
      $complainCommentType.attr('readonly', true);
    } else {
      $complaintCommentBtn.removeClass('loading');
      $complaintCommentsContent.attr('readonly', false);
      $complainCommentType.attr('readonly', false);
    }
  }
  
  function setCommentSendTip(value) {
    if (value) {
      $('.appeal-success-tip').removeClass('hide');
      $('.appeal-tip').addClass('hide');
      $('.appeal-form').addClass('hide');
      $('#landing-comments-complaint-modal .actions').addClass('hide');
    } else {
      $('.appeal-success-tip').addClass('hide');
      $('.appeal-tip').removeClass('hide');
      $('.appeal-form').removeClass('hide');
      $('#landing-comments-complaint-modal .actions').removeClass('hide');
    }
  }
</script>

<div class='ui small modal' id='misjudgment_appeal_modal'>
<i class='close icon'></i>
<div class='header dividing ui'>
误判申诉
</div>
<div class='content'>
<p>此处可能存在不合适展示的内容，页面不予展示。您可通过相关编辑功能自查并修改。</p>
<p>如您确认内容无涉及 不当用语 / 纯广告导流 / 暴力 / 低俗色情 / 侵权 / 盗版 / 虚假 / 无价值内容或违法国家有关法律法规的内容，可点击提交进行申诉，我们将尽快为您处理。</p>
<div class='buttons'>
<div class='ui button blank cancel'>取消</div>
<div class='ui button orange submit'>提交</div>
</div>
</div>
</div>
<style>
  #misjudgment_appeal_modal .buttons {
    float: right;
    margin-top: 30px;
    margin-bottom: 20px; }
    #misjudgment_appeal_modal .buttons .cancel {
      margin-right: 20px; }
</style>
<script>
  var $misjudgmentAppealModal = $('#misjudgment_appeal_modal');
  $('.cancel').on('click',function(){
    $misjudgmentAppealModal.modal('hide');
  });
  var $jsSubmitAppeal = $misjudgmentAppealModal.find('.submit')
  $jsSubmitAppeal.on('click', function(e) {
    e.preventDefault();
    $(this).addClass('loading').addClass('disabled');
    var type = $(this).attr('data-type');
    var id = $(this).attr('data-id');
    var projectId = $(this).attr('data-project-id');
    var appealType = $(this).attr('data-appeal-type');
    $.ajax({
      type: "PUT",
      url: "/misjudgment_appeal",
      data: {
        type: type,
        id: id,
        project_id: projectId,
        appeal_type: appealType
      },
      success: function(data) {
        Flash.info('提交成功');
        $jsSubmitAppeal.removeClass('loading');
        $misjudgmentAppealModal.modal('hide');
        location.reload()
      },
      error: function(e) {
        Flash.error('提交失败:'+e.responseText);
        $jsSubmitAppeal.removeClass('loading').removeClass('disabled');
        location.reload()
      }
    });
  })
</script>

</div>
<script>
  "use strict";
  $('.js-check-star').checkbox('set unchecked')
</script>

</div>
</div>
</div>
<div class='four wide column' style='display: none;'>
<div class='project__right-side'>
<div class='side-item intro'>
<div class='header'>
<h4>简介</h4>
</div>
<div class='content'>
<span class='git-project-desc-text'>集群聊天服务器，docker compose一键部署</span>
<a class='hide spread' href='javascript:void(0);'>
展开
<i class='caret down icon'></i>
</a>
<a class='retract hide' href='javascript:void(0);'>
收起
<i class='caret up icon'></i>
</a>
<div class='intro-list'>
<div class='d-flex d-flex-between dropdown item js-project-label_show label-list-line-feed project-label-list ui' data-labels='[]' data-url='/ericling666/sponge/update_description'>
<div class='mixed-label'>
<a title="聊天服务器" class="project-label-item-box" target="_blank" href="/explore/topic/%E8%81%8A%E5%A4%A9%E6%9C%8D%E5%8A%A1%E5%99%A8"><div class='project-label-item'>聊天服务器</div>
</a><a title="Cpp" class="project-label-item-box" target="_blank" href="/explore/topic/Cpp"><div class='project-label-item'>Cpp</div>
</a><a title="muduo" class="project-label-item-box" target="_blank" href="/explore/topic/muduo"><div class='project-label-item'>muduo</div>
</a><a title="MySQL" class="project-label-item-box" target="_blank" href="/explore/topic/MySQL"><div class='project-label-item'>MySQL</div>
</a><a title="Redis" class="project-label-item-box" target="_blank" href="/explore/topic/Redis"><div class='project-label-item'>Redis</div>
</a></div>

<div class='default'>暂无标签</div>
</div>
<div class='hide item'>
<i class='iconfont icon-link'></i>
<span class='git-project-homepage'>
<a rel="nofollow" id="homepage" target="_blank" href=""></a>
</span>
</div>
<div class='item'>
<i class='iconfont icon-tag-program'></i>
<span class='summary-languages'>
C++
<span class='text-muted'>
等 4 种语言
<i class='icon dropdown'></i>
</span>
</span>
<div class='ui popup summary-languages-popup'>
<div class='row'>
<div class='lang'>
<a href="/explore/all?lang=C%2B%2B">C++</a>
</div>
<div class='lang-bar'>
<div class='bar' style='width: 93.5%;'></div>
</div>
<a class="percentage" href="/explore/all?lang=C%2B%2B">93.5%</a>
</div>
<div class='row'>
<div class='lang'>
<a href="/explore/all?lang=CMake">CMake</a>
</div>
<div class='lang-bar'>
<div class='bar' style='width: 5.0%;'></div>
</div>
<a class="percentage" href="/explore/all?lang=CMake">5.0%</a>
</div>
<div class='row'>
<div class='lang'>
<a href="/explore/all?lang=C">C</a>
</div>
<div class='lang-bar'>
<div class='bar' style='width: 1.1%;'></div>
</div>
<a class="percentage" href="/explore/all?lang=C">1.1%</a>
</div>
<div class='row'>
<div class='lang'>
<a href="/explore/all?lang=Shell">Shell</a>
</div>
<div class='lang-bar'>
<div class='bar' style='width: 0.4%;'></div>
</div>
<a class="percentage" href="/explore/all?lang=Shell">0.4%</a>
</div>
</div>
</div>

<div class='item box-licence'>
<i class='iconfont icon-licence'></i>
<span id='license-popup'>
GPL-2.0
</span>
<div class='ui popup dark'>使用 GPL-2.0 开源许可协议</div>
</div>
</div>
</div>
<div class='content intro-form'>
<div class='ui small input'>
<textarea name='project[description]' placeholder='描述' rows='5'></textarea>
</div>
<div class='ui small input'>
<input data-regex-value='(^$)|(^(http|https):\/\/(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\.){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5]).*)|(^(http|https):\/\/[a-zA-Z0-9]+([_\-\.]{1}[a-zA-Z0-9]+)*\.[a-zA-Z]{2,10}(:[0-9]{1,10})?(\?.*)?(\/.*)?$)' name='project[homepage]' placeholder='主页(eg: https://gitee.com)' type='text'>
</div>
<button class='ui orange button mt-1 btn-save'>
保存更改
</button>
<div class='ui blank button btn-cancel-edit'>
取消
</div>
</div>
</div>
<div class='side-item release'>
<div class='header'>
<h4>发行版</h4>
</div>
<div class='content'>
<span class='text-muted'>
暂无发行版
</span>
</div>
</div>
<div class='side-item contrib' data-url='/ericling666/sponge/contributors_count?ref=main' id='contributor'>
<div class='header'>
<h4>
贡献者
<span class='text-muted' id='contributor-count'></span>
</h4>
<a class="ui link button pull-right" href="/ericling666/sponge/contributors?ref=main">全部</a>
</div>
<div class='content' id='contributor-list'></div>
<div class='ui active centered inline loader' id='contributor-loader'></div>
</div>
<div class='side-item events' data-url='/ericling666/sponge/events.json' id='proj-events'>
<div class='header'>
<h4>近期动态</h4>
</div>
<div class='content'>
<div class='ui comments' id='event-list'></div>
<a class="loadmore hide" href="javascript:void(0);">加载更多
<i class='icon dropdown'></i>
</a><center>
<div class='text-muted nomore hide'>不能加载更多了</div>
<div class='ui inline loader active'></div>
</center>
</div>
</div>
</div>
<div class='ui modal tiny' id='edit-project-description'>
<i class='iconfont icon-close close'></i>
<div class='header'>编辑仓库简介</div>
<div class='content'>
<div class='item mb-2'>
<div class='title label'>简介内容</div>
<div class='ui small input'>
<textarea maxlength='200' name='project[description]' placeholder='描述' rows='5'>集群聊天服务器，docker compose一键部署</textarea>
</div>
</div>
<div class='item mb-2'>
<div class='title label'>主页</div>
<div class='ui small input'>
<input data-regex-value='(^$)|(^(http|https):\/\/(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\.){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5]).*)|(^(http|https):\/\/[a-zA-Z0-9]+([_\-\.]{1}[a-zA-Z0-9]+)*\.[a-zA-Z]{2,10}(:[0-9]{1,10})?(\?.*)?(\/.*)?$)' name='project[homepage]' placeholder='主页(eg: https://gitee.com)' type='text' value=''>
</div>
</div>
</div>
<div class='actions'>
<button class='ui button blank cancel'>取消</button>
<button class='ui button orange btn-save'>保存更改</button>
</div>
</div>

<style>
  #license-popup {
    color: #005980;
    cursor: pointer; }
</style>
<script>
  window.gon.projectRightSide = {
    homepage: "",
    description: "集群聊天服务器，docker compose一键部署",
    url: '/ericling666/sponge/update_description',
    i18n: {
      invalidHomepage: '不是有效的 http 地址',
      descriptionLimitExceeded: '简介长度不得超过%{limit}个字符',
      noDescription: '暂无描述',
      noPermission: '无权限操作！',
      requestError: '修改发生错误，请稍后重试！'
    }
  }
  window.gon.cloneArrSelectedLabel = [] || []
  $(function () {
    var $editModal = $('#edit-project-description')
    $editModal.modal({
      onShow: function () {
        window.globalUtils.getFocus($editModal.find('textarea'))
      }
    })
    $('.project__right-side').on('click', '.header .btn-edit', function () {
      $editModal.modal('show')
    })
    $('#license-popup').popup({ position: 'bottom center', lastResort: 'bottom center' })
  
    $('.js-project-label_show').projectLabel({
      i18n: {
        empty: "标签名不能为空",
        verify: "标签名只允许包含中文、字母、数字或者中划线(-)，不能以中划线开头，且长度少于35个字符",
        max: "最多选择 5 个标签"
      }
    })
  })
</script>

</div>
</div>
</div>
<script>
  (function() {
    $(function() {
      Tree.init();
      return TreeCommentActions.init();
    });
  
  }).call(this);
</script>
<script>
  function scrollToReadmeBox() {
    var readmeBox = document.getElementById('git-readme');
    if (readmeBox) {
      const topPos = readmeBox.offsetTop;
      window.scrollTo({ top: topPos, behavior: "smooth" });
    }
  }
  $(".box-licence").click(function(event) {
    $('.lisence-content').show()
    $('.lisence-edit').show()
    $('.readme-content').hide()
    $('.readme-edit').hide()
    $('.file_title_license').addClass('active-title')
    $('.file_title_readme').removeClass('active-title')
    scrollToReadmeBox()
  });
</script>
<script src="/static/javascripts/file-icons.js"></script>

</div>
<script>
  (function() {
    var donateModal;
  
    Gitee.modalHelper = new GiteeModalHelper({
      alertText: '提示',
      okText: '确定'
    });
  
    donateModal = new ProjectDonateModal({
      el: '#project-donate-modal',
      alipayUrl: '/ericling666/sponge/alipay',
      wepayUrl: '/ericling666/sponge/wepay',
      nameIsBlank: '名称不能为空',
      nameTooLong: '名称过长（最多为 36 个字符）',
      modalHelper: Gitee.modalHelper
    });
  
    if (null === 'true') {
      donateModal.show();
    }
  
    $('#project-donate').on('click', function() {
      return donateModal.show();
    });
  
  }).call(this);
</script>
<script>
  Tree.initHighlightTheme('white')
</script>


</div>
<div class='gitee-project-extension'>
<div class='extension public'>1</div>
<div class='extension https'>https://gitee.com/ericling666/sponge.git</div>
<div class='extension ssh'>git@gitee.com:ericling666/sponge.git</div>
<div class='extension namespace'>ericling666</div>
<div class='extension repo'>sponge</div>
<div class='extension name'>sponge</div>
<div class='extension branch'>main</div>
</div>

<script>
  $(function() {
    GitLab.GfmAutoComplete.dataSource = "/ericling666/sponge/autocomplete_sources"
    GitLab.GfmAutoComplete.Emoji.assetBase = '/assets/emoji'
    GitLab.GfmAutoComplete.setup();
  });
</script>

<footer id='git-footer-main'>
<div class='ui container'>
<div class='logo-row'>
<a href="https://gitee.com"><img alt='Gitee - 基于 Git 的代码托管和研发协作平台' class='logo-img' src='/static/images/logo-black.svg?t=158106666'>
</a></div>
<div class='name-important'>
深圳市奥思网络科技有限公司版权所有
</div>
<div class='ui two column grid d-flex-center'>
<div class='eight wide column git-footer-left'>
<div class='ui four column grid' id='footer-left'>
<div class='column'>
<div class='ui link list'>
<div class='item'>
<a class="item" href="/all-about-git">Git 大全</a>
</div>
<div class='item'>
<a class="item" rel="nofollow" href="https://oschina.gitee.io/learn-git-branching/">Git 命令学习</a>
</div>
<div class='item'>
<a class="item" rel="nofollow" href="https://copycat.gitee.com/">CopyCat 代码克隆检测</a>
</div>
<div class='item'>
<a class="item" href="/appclient">APP与插件下载</a>
</div>
</div>
</div>
<div class='column'>
<div class='ui link list'>
<div class='item'>
<a class="item" href="/gitee_reward">Gitee Reward</a>
</div>
<div class='item'>
<a class="item" href="/gitee-stars">Gitee 封面人物</a>
</div>
<div class='item'>
<a class="item" href="/gvp">GVP 项目</a>
</div>
<div class='item'>
<a class="item" rel="nofollow" href="https://blog.gitee.com/">Gitee 博客</a>
</div>
<div class='item'>
<a class="item" href="/enterprises#nonprofit-plan">Gitee 公益计划</a>
</div>
<div class='item'>
<a class="item" href="https://gitee.com/features/gitee-go">Gitee 持续集成</a>
</div>
</div>
</div>
<div class='column'>
<div class='ui link list'>
<div class='item'>
<a class="item" href="/api/v5/swagger">OpenAPI</a>
</div>
<div class='item'>
<a class="item" href="https://help.gitee.com">帮助文档</a>
</div>
<div class='item'>
<a class="item" href="/self_services">在线自助服务</a>
</div>
<div class='item'>
<a class="item" href="/help/articles/4378">更新日志</a>
</div>
</div>
</div>
<div class='column'>
<div class='ui link list'>
<div class='item'>
<a class="item" href="/about_us">关于我们</a>
</div>
<div class='item'>
<a class="item" rel="nofollow" href="https://www.oschina.net/news/131099/oschina-hiring">加入我们</a>
</div>
<div class='item'>
<a class="item" href="/terms">使用条款</a>
</div>
<div class='item'>
<a class="item" href="/oschina/git-osc/issues">意见建议</a>
</div>
<div class='item'>
<a class="item" href="/links.html">合作伙伴</a>
</div>
</div>
</div>
</div>
</div>
<div class='eight wide column right aligned followus git-footer-right'>
<div class='qrcode pre-box mr-1'>
<img class="mjc-qr" src="https://cn-assets.gitee.com/assets/mjc_ip@2x-42c8d21ed1a7027b083d7457a6cf5b8a.png" alt="Mjc ip@2x" />
<div class='qrcode-box customer_service'>
<img alt="售前咨询客服" src="https://cn-assets.gitee.com/assets/QR@2x-5a3f4a6d99fb8d31cc6ef3be028abc8c.png" />
</div>
<p class='mt-1 mini_app-text'>售前咨询客服</p>
</div>
<div class='qrcode mr-1'>
<div class='qrcode-box'>
<img alt="技术交流QQ群" src="https://cn-assets.gitee.com/assets/contact_qr-5e2c2a8da453396590e56a545bce4974.jpg" />
</div>
<p class='mt-1 mini_app-text'>技术交流QQ群</p>
</div>
<div class='qrcode'>
<div class='qrcode-box'>
<img alt="微信服务号" class="weixin-qr" src="https://cn-assets.gitee.com/assets/qrcode-weixin@2x-b74cc97a2ea80123ea53a737f709836d.png" />
</div>
<p class='mt-1 weixin-text'>微信服务号</p>
</div>
<div class='phone-and-qq column'>
<div class='ui list official-support-container'>
<div class='item'></div>
<div class='item mail-and-zhihu'>
<a rel="nofollow" href="mailto: client@oschina.cn"><i class='iconfont icon-msg-mail'></i>
<span id='git-footer-email'>client#oschina.cn</span>
</a></div>
<div class='item tel'>
<a>
<i class='iconfont icon-tel'></i>
<span>企业版在线使用：400-606-0201</span>
</a>
</div>
<div class='item tel'>
<a class='d-flex'>
<i class='iconfont icon-tel mt-05 mr-05'></i>
<span>专业版私有部署：</span>
<div>
<div>13670252304</div>
<div>13352947997</div>
</div>
</a>
</div>
</div>
</div>
</div>
</div>
</div>
<div class='bottombar'>
<div class='ui container'>
<div class='ui d-flex d-flex-between'>
<div class='seven wide column partner d-flex'>
<div class='open-atom d-flex-center'>
<img class="logo-openatom mr-1" alt="开放原子开源基金会" src="https://cn-assets.gitee.com/assets/logo-openatom-d083391cc8a54e283529f3fc11cc38ca.svg" />
<a target="_blank" rel="nofollow" href="https://www.openatom.org/">开放原子开源基金会</a>
<div class='sub-title ml-1'>合作代码托管平台</div>
</div>
<div class='report-12377 d-flex-center ml-3'>
<img class="report-12377__logo mr-1" alt="违法和不良信息举报中心" src="https://cn-assets.gitee.com/assets/12377@2x-1aa42ed2d2256f82a61ecf57be1ec244.png" />
<a target="_blank" rel="nofollow" href="https://12377.cn">违法和不良信息举报中心</a>
</div>
<div class='copyright ml-3'>
<a rel="nofollow" href="http://beian.miit.gov.cn/">粤ICP备12009483号</a>
</div>
</div>
<div class='nine wide column right aligned'>
<i class='icon world'></i>
<a href="/language/zh-CN">简 体</a>
/
<a href="/language/zh-TW">繁 體</a>
/
<a href="/language/en">English</a>
</div>
</div>
</div>
</div>
</footer>

<script>
  var officialEmail = $('#git-footer-email').text()
  $('#git-footer-main .icon-popup').popup({ position: 'bottom center' })
  $('#git-footer-email').text(officialEmail.replace('#', '@'))
  window.gon.popover_card_locale = {
    follow:"关注",
    unfollow:"已关注",
    gvp_title: "GVP - Gitee 最有价值开源项目",
    project: "项目",
    org: "开源组织",
    member: "",
    author: "作者",
    user_blocked: "该用户已被屏蔽或已注销",
    net_error: "网络错误",
    unknown_exception: "未知异常"
  }
  window.gon.select_message = {
    placeholder: "请输入个人空间地址或完整的邮箱地址"
  }
</script>
<script src="https://cn-assets.gitee.com/webpacks/popover_card-90e2943d5fc869fd6435.bundle.js"></script>
<link rel="stylesheet" media="all" href="https://cn-assets.gitee.com/webpacks/css/gitee_nps-ae0dbee40f6ddc72015a.css" />
<script src="https://cn-assets.gitee.com/webpacks/gitee_nps-a17ec945d8ddaf40dc1d.bundle.js"></script>
<script src="https://cn-assets.gitee.com/webpacks/gitee_icons-2a476c43d2fabbe57e80.bundle.js"></script>



<div class='side-toolbar'>
<div class='button toolbar-help'>
<i class='iconfont icon-help'></i>
</div>
<div class='ui popup left center dark'>点此查找更多帮助</div>
<div class='toolbar-help-dialog'>
<div class='toolbar-dialog-header'>
<h3 class='toolbar-dialog-title'>搜索帮助</h3>
<form class="toolbar-help-search-form" action="/help/load_keywords_data" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" />
<div class='ui icon input fluid toolbar-help-search'>
<input name='keywords' placeholder='请输入产品名称或问题' type='text'>
<i class='icon search'></i>
</div>
</form>

<i class='iconfont icon-close toolbar-dialog-close-icon'></i>
</div>
<div class='toolbar-dialog-content'>
<div class='toolbar-help-hot-search'>
<div class='toolbar-roll'>
<a class="init active" title="Git 命令在线学习" href="https://oschina.gitee.io/learn-git-branching/?utm_source==gitee-help-widget"><i class='Blue icon icon-command iconfont'></i>
<span>Git 命令在线学习</span>
</a><a class="init " title="如何在 Gitee 导入 GitHub 仓库" href="https://gitee.com/help/articles/4261?utm_source==gitee-help-widget"><i class='icon icon-clipboard iconfont orange'></i>
<span>如何在 Gitee 导入 GitHub 仓库</span>
</a></div>
<div class='toolbar-list'>
<div class='toolbar-list-item'>
<a href="/help/articles/4114">Git 仓库基础操作</a>
</div>
<div class='toolbar-list-item'>
<a href="/help/articles/4166">企业版和社区版功能对比</a>
</div>
<div class='toolbar-list-item'>
<a href="/help/articles/4191">SSH 公钥设置</a>
</div>
<div class='toolbar-list-item'>
<a href="/help/articles/4194">如何处理代码冲突</a>
</div>
<div class='toolbar-list-item'>
<a href="/help/articles/4232">仓库体积过大，如何减小？</a>
</div>
<div class='toolbar-list-item'>
<a href="/help/articles/4279">如何找回被删除的仓库数据</a>
</div>
<div class='toolbar-list-item'>
<a href="/help/articles/4283">Gitee 产品配额说明</a>
</div>
<div class='toolbar-list-item'>
<a href="/help/articles/4284">GitHub仓库快速导入Gitee及同步更新</a>
</div>
<div class='toolbar-list-item'>
<a href="/help/articles/4328">什么是 Release（发行版）</a>
</div>
<div class='toolbar-list-item'>
<a href="/help/articles/4354">将 PHP 项目自动发布到 packagist.org</a>
</div>
</div>
</div>
<div class='toolbar-help-search-reseult'></div>
</div>
</div>
<script>
  var opt = { position: 'left center'};
  var $helpSideToolbar = $('.button.toolbar-help');
  var $toolbarRoll = $('.toolbar-roll');
  
  $(function() {
    if (false) {
      $helpSideToolbar.popup(opt).popup({lastResort:'left center'})
    } else {
      $helpSideToolbar.popup({lastResort:'left center'}).popup('show', opt);
      setTimeout(function() {
        $helpSideToolbar.popup('hide', opt);
      }, 3000);
    }
  
    if ($toolbarRoll.length) {
      setInterval(function() {
        var $nextActiveLink = $toolbarRoll.find('a.active').next();
        if (!$nextActiveLink.length) {
          $nextActiveLink = $toolbarRoll.find('a:first-child');
        }
        $nextActiveLink.attr('class', 'active').siblings().removeClass('active init');
      }, 5000);
    }
  })
</script>

<div class='popup button' id='home-comment'>
<i class='iconfont icon-comment'></i>
</div>
<div class='ui popup dark'>评论</div>
<div class='toolbar-appeal popup button'>
<i class='iconfont icon-report'></i>
</div>
<div class='ui popup dark'>
仓库举报
</div>
<script>
  $('.toolbar-appeal').popup({ position: 'left center' });
</script>

<div class='button gotop popup' id='gotop'>
<i class='iconfont icon-top'></i>
</div>
<div class='ui popup dark'>回到顶部</div>
</div>
<div class='form modal normal-modal tiny ui' id='unlanding-complaint-modal'>
<i class='iconfont icon-close close'></i>
<div class='header'>
登录提示
</div>
<div class='container actions'>
<div class='content'>
该操作需登录 Gitee 帐号，请先登录后再操作。
</div>
<div class='ui orange icon large button ok'>
立即登录
</div>
<div class='ui button blank cancel'>
没有帐号，去注册
</div>
</div>
</div>
<script>
  var $elm = $('.toolbar-appeal');
  
  $elm.on('click', function() {
    var modals = $("#unlanding-complaint-modal.normal-modal");
    if (modals.length > 1) {
      modals.eq(0).modal('show');
    } else {
      modals.modal('show');
    }
  })
  $("#unlanding-complaint-modal.normal-modal").modal({
    onDeny: function() {
      window.location.href = "/signup?from=";
    },
    onApprove: function() {
      window.location.href = "/login?from=";
    }
  })
</script>

<style>
  .side-toolbar .bdsharebuttonbox a {
    font-size: 24px;
    color: white !important;
    opacity: 0.9;
    margin: 6px 6px 0px 6px;
    background-image: none;
    text-indent: 0;
    height: auto;
    width: auto;
  }
</style>
<style>
  #udesk_btn a {
    margin: 0px 20px 167px 0px !important;
  }
</style>
<script>
  (function() {
    $('#project-user-message').popup({
      position: 'left center'
    });
  
  }).call(this);
</script>
<script>
  Gitee.initSideToolbar({
    hasComment: true,
    commentUrl: '/ericling666/sponge#tree_comm_title'
  })
</script>





<script>
  (function() {
    this.__gac = {
      domain: 'www.oschina.net'
    };
  
  }).call(this);
</script>

<script src="https://cn-assets.gitee.com/webpacks/build_status-a3ee4cc8489b2defc1a8.bundle.js"></script>
<script src="https://cn-assets.gitee.com/webpacks/scan_status-8b929e0997115c370d33.bundle.js"></script>
<script src="https://cn-assets.gitee.com/webpacks/mermaid_render-80437a0d645e9044f9e8.bundle.js"></script>
</body>
</html>
