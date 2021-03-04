Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("OGPC=19011552-1:748494848-1:879517696-3:; DOMAIN=www.google.com");

	web_add_cookie("1P_JAR=2021-03-01-14; DOMAIN=www.google.com");

	web_add_cookie("OGP=-19011552:-748494848:-879517696:; DOMAIN=www.google.com");

	web_add_cookie("CONSENT=YES+GB.en-GB+V9+BX; DOMAIN=www.google.com");

	web_add_cookie("NID=209=lE_faqlVYbgnkY6Axg2rGOdMdC2OUeV5dLInc4Tp9a7xQYVD_k7beRL0vSveQBTCIAvWgiLOrsEKtnAnK2YXjxBpG7obsFUpZvRRds5EYIzjnXtQKNjq2fQeL4di2A1MsyGDs8P8a5rDJAIfWJkJjBwFv9pjJW8D2mSLP1cesGs; DOMAIN=www.google.com");

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google.com/images/searchbox/desktop_searchbox_sprites318_hr.png", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.gstatic.com/og/_/ss/k=og.qtm.1-VnKc4oXVY.L.X.O/m=qcwid/excm=qaaw,qadd,qaid,qein,qhaw,qhbr,qhch,qhga,qhid,qhin,qhpr/d=1/ed=1/ct=zgms/rs=AA2YrTvsm5pSbRVr90UF-eyFAmG0a0KGCA", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		LAST);

	web_url("gen_204", 
		"URL=https://www.google.com/gen_204?s=webhp&t=aft&atyp=csi&ei=mqdAYIqPFoqgUKGrl8AI&rt=wsrt.3,aft.1038&imn=2&ima=2&imad=0&aftp=-1&bl=7aLq", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/?gws_rd=ssl", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.gstatic.com/og/_/js/k=og.qtm.en_US.TJ22SR6ED5U.O/rt=j/m=qabr,q_d,qcwid,qmutsd,qapid,qald/exm=qaaw,qadd,qaid,qein,qhaw,qhbr,qhch,qhga,qhid,qhin,qhpr/d=1/ed=1/rs=AA2YrTtLt2X8gXYRVoslIo0H-_cipX-KqQ", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=/xjs/_/js/k=xjs.s.en_GB.J-IAj76qDl8.O/ck=xjs.s.dSoujdHyMj0.L.I11.O/am=AAAAAQAAAAAAWBkAAAGQAAAAADCBNQDAfxAAXHCJAwAAAAAQASEJGqUGJAYEQAAAAJDVhRIACAQ/d=1/exm=cdos,cr,csi,d,dpf,hsm,jsa/ed=1/dg=2/ct=zgms/rs=ACT90oFzdMuGuv3-Bt87wK7dAOsbVhj4Og/m=BLvsRb,NBZ7u,aa,abd,async,dvl,ifl,lu,mUpTid,mu,sb_wiz,sf,xz7cCd?xjs=s1", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		LAST);

	web_url("search", 
		"URL=https://www.google.com/complete/search?q&cp=0&client=gws-wiz&xssi=t&gs_ri=gws-wiz&hl=en-GB&authuser=0&psi=mqdAYIqPFoqgUKGrl8AI.1614849945708&nolsbt=1&dpr=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.com/?gws_rd=ssl", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../xjs/_/js/k=xjs.s.en_GB.J-IAj76qDl8.O/ck=xjs.s.dSoujdHyMj0.L.I11.O/am=AAAAAQAAAAAAWBkAAAGQAAAAADCBNQDAfxAAXHCJAwAAAAAQASEJGqUGJAYEQAAAAJDVhRIACAQ/d=1/exm=BLvsRb,NBZ7u,aa,abd,async,cdos,cr,csi,d,dpf,dvl,hsm,ifl,jsa,lu,mUpTid,mu,sb_wiz,sf,xz7cCd/ed=1/dg=2/ct=zgms/rs=ACT90oFzdMuGuv3-Bt87wK7dAOsbVhj4Og/m=HFyn5c?xjs=s2", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		LAST);

	web_add_cookie("OGPC=19011552-1:748494848-1:879517696-3:; DOMAIN=ogs.google.com");

	web_add_cookie("OGP=-19011552:-748494848:-879517696:; DOMAIN=ogs.google.com");

	web_add_cookie("CONSENT=YES+GB.en-GB+V9+BX; DOMAIN=ogs.google.com");

	web_add_cookie("NID=209=lE_faqlVYbgnkY6Axg2rGOdMdC2OUeV5dLInc4Tp9a7xQYVD_k7beRL0vSveQBTCIAvWgiLOrsEKtnAnK2YXjxBpG7obsFUpZvRRds5EYIzjnXtQKNjq2fQeL4di2A1MsyGDs8P8a5rDJAIfWJkJjBwFv9pjJW8D2mSLP1cesGs; DOMAIN=ogs.google.com");

	web_add_cookie("OTZ=5834462_56_56__56_; DOMAIN=ogs.google.com");

	web_add_cookie("OGPC=19011552-1:748494848-1:879517696-3:; DOMAIN=apis.google.com");

	web_add_cookie("OGP=-19011552:-748494848:-879517696:; DOMAIN=apis.google.com");

	web_add_cookie("CONSENT=YES+GB.en-GB+V9+BX; DOMAIN=apis.google.com");

	web_add_cookie("NID=209=lE_faqlVYbgnkY6Axg2rGOdMdC2OUeV5dLInc4Tp9a7xQYVD_k7beRL0vSveQBTCIAvWgiLOrsEKtnAnK2YXjxBpG7obsFUpZvRRds5EYIzjnXtQKNjq2fQeL4di2A1MsyGDs8P8a5rDJAIfWJkJjBwFv9pjJW8D2mSLP1cesGs; DOMAIN=apis.google.com");

	web_url("so", 
		"URL=https://ogs.google.com/widget/app/so?bc=1&origin=https%3A%2F%2Fwww.google.com&cn=app&pid=1&spid=538&hl=en", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/?gws_rd=ssl", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://apis.google.com/_/scs/abc-static/_/js/k=gapi.gapi.en.GTg18L1Wqko.O/m=gapi_iframes,googleapis_client/rt=j/sv=1/d=1/ed=1/rs=AHpOoo_RJSdiavtoJQlz9JCcpOM9qnUIlw/cb=gapi.loaded_0", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.google.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_url("gen_204_2", 
		"URL=https://www.google.com/gen_204?atyp=csi&ei=mqdAYIqPFoqgUKGrl8AI&s=webhp&t=all&bl=7aLq&imn=2&ima=2&imad=0&aftp=-1&adh=&ime=2&imex=2&imeh=0&imea=0&imeb=0&wh=1052&scp=0&rt=aft.1038,iml.1038,prt.2523,xjses.2783,xjsee.2978,xjs.2978,dcl.2979,ol.6227,wsrt.3,cst.0,dnst.0,rqst.9,rspt.9,rqstt.3,unt.2,cstt.3,dit.2638&zx=1614849948819", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/?gws_rd=ssl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("OGPC=19011552-1:748494848-1:879517696-3:; DOMAIN=adservice.google.com");

	web_add_cookie("OGP=-19011552:-748494848:-879517696:; DOMAIN=adservice.google.com");

	web_add_cookie("CONSENT=YES+GB.en-GB+V9+BX; DOMAIN=adservice.google.com");

	web_add_cookie("NID=209=lE_faqlVYbgnkY6Axg2rGOdMdC2OUeV5dLInc4Tp9a7xQYVD_k7beRL0vSveQBTCIAvWgiLOrsEKtnAnK2YXjxBpG7obsFUpZvRRds5EYIzjnXtQKNjq2fQeL4di2A1MsyGDs8P8a5rDJAIfWJkJjBwFv9pjJW8D2mSLP1cesGs; DOMAIN=adservice.google.com");

	web_url("ui", 
		"URL=https://adservice.google.com/adsid/google/ui", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/?gws_rd=ssl", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	lr_think_time(6);

	web_url("www.advantageonlineshopping.com", 
		"URL=http://www.advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.eot?", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.eot?", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.eot?", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.eot?", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j88&a=1443708950&t=pageview&_s=2&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&dp=%2F&ul=en-us&de=utf-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1052&je=1&fl=32.0%20r0&_u=KEBAAEQAAAAAAC~&jid=&gjid=&cid=47121582.1614849961&tid=UA-81334227-1&_gid=378383070.1614849961&z=1654872770", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.eot?", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/arrow_right.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		LAST);

	web_url("gen_204_3", 
		"URL=https://www.google.com/gen_204?atyp=i&ei=mqdAYIqPFoqgUKGrl8AI&ct=slh&v=t1&m=HV&pv=0.6232312497723546&me=1:1614849946208,x:1,V,0,0,1920,1052:0,N,1,mqdAYIqPFoqgUKGrl8AI:0,R,1,1,0,0,1920,1052:1,B,1052:5300,h,1,1,i:488,h,1,1,o:5762,h,1,1,i:982,e,H&zx=1614849958745", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/?gws_rd=ssl", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ALL", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://www.advantageonlineshopping.com//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://www.advantageonlineshopping.com");

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j88&a=1443708950&t=pageview&_s=1&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&ul=en-us&de=utf-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1052&je=1&fl=32.0%20r0&_u=IEBAAEQAAAAAAC~&jid=1436393824&gjid=32765979&cid=47121582.1614849961&tid=UA-81334227-1&_gid=378383070.1614849961&_r=1&_slc=1&z=1609737453", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_add_cookie("_ga=GA1.2.47121582.1614849961; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.378383070.1614849961; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_url("search_2", 
		"URL=http://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}