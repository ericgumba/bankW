/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1203
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_max_html_param_len("1044");
 
	web_set_sockets_option("SSL_VERSION", "2&3");
 

/*Correlation comment - Do not change!  Original value='00000000-0000-0000-0000-000000000e01' Name ='entityIDs' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=entityIDs",
		"RegExp=erecruitActiveEntity=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/Login.aspx*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='/wEPDwUKMTYzMDU1NjE3NRAWAh4TVmFsaWRhdGVSZXF1ZXN0TW9kZQIBZBYCZg9kFgRmD2QWAgIBDxUEOi9NVkMvQ29udGVudC9qcy9FeHRlcm5hbC9LZW5kby9zdHlsZXMva2VuZG8uY29tbW9uLm1pbi5jc3M7L01WQy9Db250ZW50L2pzL0V4dGVybmFsL0tlbmRvL3N0eWxlcy9rZW5kby51bmlmb3JtLm1pbi5jc3MoL01WQy9Db250ZW50L2Nzcy9MaWJyYXJ5L2xpYnJhcnkubWluLmNzcx0vTVZDL0NvbnRlbnQvY3NzL2VyZWNydWl0LmNzc2QCBw9kFgQCBQ9kFgJmDxUBLkFwcF9UaGVtZXMvRGVmYXVsdC9qYXZhc2NyaXB0L3RlbGVyaWstaGFja3MuanNkAgsPZBYEAgUPZBYCZg9kFgRmD2QWBAIBDw8WAh4EVGV4dAUUV2VsY29tZSB0byBlcmVjcnVpdC5kZAIFD2QWAmYPZBYCAgEPZBYEAgMPD2QWAh4MYXV0b2NvbXBsZXRlBQJvbmQCBw8PZBYCHwIFA29mZmQCAQ9kFgYCBQ8PFgIeB1Zpc2libGVoZGQCCw8WAh4LXyFJdGVtQ291bnQCARYCAgEPZBYCZg8VASdQYXNzd29yZCBtdXN0IGJlIGF0IGxlYXN0IDggY2hhcmFjdGVycy5kAg0PZBYCZg9kFgICAQ88KwAEAGQCBw9kFgICAQ8PFgIfAQUNVXBsb2FkIFJlc3VtZWRkGAIFHl9fQ29udHJvbHNSZXF1aXJlUG9zdEJhY2tLZXlfXxYBBRRjdGwwMCR0aXBQaG9uZU51bWJlcgUXY3RsMDAkY3BoTWFpbiRtdWx0aVZpZXcPD2RmZMri2VLD5z9cOEVhzzjl5nB9UcDV' 
Name ='AspNet_ViewState' 
Type ='Rule' 
AppName ='ASPNET' 
RuleName ='__VIEWSTATE'*/
	web_reg_save_param_ex(
		"ParamName=AspNet_ViewState",
		"LB/IC=__VIEWSTATE\" value=\"",
		"RB/IC=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/Login.aspx*",
		LAST);

/*Correlation comment - Do not change!  Original value='C2EE9ABB' Name ='__VIEWSTATEGENERATOR' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=__VIEWSTATEGENERATOR",
		"RegExp=id=\"__VIEWSTATEGENERATOR\"\\ value=\"(.*?)\"\\ ",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Login.aspx*",
		LAST);

/*Correlation comment - Do not change!  Original value=';Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:53e1db5a:d126a8ef' Name ='ctl00_radStylesheetManager_TSSM' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=ctl00_radStylesheetManager_TSSM",
		"RegExp==\\ '(.*?)';\\\r\\\n\\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ Sys\\.Application\\.remove_load\\(loadHandler\\)",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Login.aspx*",
		LAST);

/*Correlation comment - Do not change!  Original value='635004139976250000' Name ='t' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=t",
		"RegExp=r532rj6peQhOU9Jbs60awRF9cVkMG6_f_gKnSGE-TbyWHumQoRS4KEP5BSetjKUf5oEvASreCkcRaiN8wcDAhb-bSsvTJOcrlLIt9O6cnfMGr-Wi81LfhnL7n7k1&t=(.*?)'\\)\\ no-repeat\\ center}\\.RadToolTip_Default\\ \\.rtWrapper\\ \\.rtWrapperTopLeft,\\.RadToolTip_Default\\ \\.rtWrapper\\ \\.rtWrapperTopRight,\\.RadToolT",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Telerik.Web.UI.WebResource.axd*",
		LAST);

	web_url("Login.aspx", 
		"URL=https://bankwstaffing.erecruitcloud.com/Login.aspx", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/ScriptResource.axd?d=9x5OvJaQVu0vj9j4xaQBlKKOEaHrkzcdmYjM4RFhcq_Djt9kUkyhoYU-zBekcY7ErwHvsRc6Fag_rhwv4YrfJqE6BjlCkvm8UNUUm_-qZjnXRoo20cEn-b5wePLrceOAAkBxDE5DWZN0-d_FIEREFdILw641&t=ffffffff93f2983c", ENDITEM, 
		"Url=/WebResource.axd?d=m3cmci195IuJDEJw8Ad9w37t-ar6S_p30DNET5tULqLw7XFJh2YiN6Ss8jqHn9dSsoMnt6V8ZKqZirvlHa70GP0TrFw1&t=637100682046795651", ENDITEM, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", ENDITEM, 
		"Url=/WebResource.axd?d=ppYwzJsRb6AhcOLm41MnVR6O_dxAYwx8kQEpShx-opg0jHDm6nly6o_cE0sit9ie8fEwOeM0k4Lm4iI1v9oFaDaP91E1&t=637100682046795651", ENDITEM, 
		"Url=/App_Themes/Default/javascript/telerik-hacks.js", ENDITEM, 
		"Url=/MVC/Content/amd-base-url-marker.js", ENDITEM, 
		"Url=/MVC/Content/js/Base/koBindings.js", ENDITEM, 
		"Url=/MVC/Content/js/Base/cooltipKoBridge.js", ENDITEM, 
		"Url=/MVC/Content/js/External/Ace/bundles-config.js", ENDITEM, 
		"Url=/MVC/Content/js/Localization/LocalizationService.js", ENDITEM, 
		"Url=/App_Themes/Default/images/logos/BWS.png", ENDITEM, 
		"Url=/MVC/Content/js/External/zxcvbn/zxcvbn.js", ENDITEM, 
		"Url=/MVC/Content/js/Controls/Tipped.js", ENDITEM, 
		"Url=/MVC/Content/js/External/Knockout/knockout-3.1.0.debug.js", ENDITEM,  
		"Url=/MVC/Content/js/Base/tableSorter.js", ENDITEM, 
		"Url=/MVC/Content/js/common.js", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/main.js", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/main.js", ENDITEM, 
		"Url=/MVC/Content/js/Utils/internationalization.js", ENDITEM, 
		"Url=/MVC/Content/js/External/requirejs-plugins/json.js", ENDITEM, 
		"Url=/MVC/Content/js/External/moment/moment.min.js", ENDITEM, 
		"Url=/MVC/Content/js/External/LinqJS/linq.min.js", ENDITEM, 
		"Url=/MVC/Content/js/External/accounting/accounting.min.js", ENDITEM, 
		"Url=/MVC/Content/js/Base/api.js", ENDITEM, 
		"Url=/MVC/Content/js/Base/seq.js", ENDITEM, 
		"Url=/MVC/Content/js/Base/keys.js", ENDITEM, 
		"Url=/MVC/Content/js/Base/dynamic.js", ENDITEM, 
		"Url=/MVC/Content/js/Base/userSettings.js", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.min.js", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.time.min.js", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.dom.min.js", ENDITEM, 
		"Url=/MVC/Content/js/External/Rx/rx.binding.min.js", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize.js", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/number.js", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/currency.js", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/date.js", ENDITEM, 
		"Url=/MVC/Content/require/text.js", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/globalize/plural.js", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/cldr.js", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/cldr/event.js", ENDITEM, 
		"Url=/MVC/Content/js/External/globalization/cldr/supplemental.js", ENDITEM, 
		"Url=/MVC/Content/fonts/fontawesome-webfont.woff2?v=4.4.0", "Referer=https://bankwstaffing.erecruitcloud.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/Icons/AboutTypes/IconSprite.png", "Referer=https://bankwstaffing.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/Images/ajaxloader_small.gif", "Referer=https://bankwstaffing.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/Images/icons/search/dropdown_arrow.png", "Referer=https://bankwstaffing.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/js/External/Kendo/styles/Uniform/loading-image.gif", "Referer=https://bankwstaffing.erecruitcloud.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/MVC/Content/images/bits/ddl.png", "Referer=https://bankwstaffing.erecruitcloud.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/Images/ajaxloader_small_square.gif", "Referer=https://bankwstaffing.erecruitcloud.com/MVC/Content/css/erecruit.css", ENDITEM, 
		"Url=/MVC/Content/images/select2.png", "Referer=https://bankwstaffing.erecruitcloud.com/MVC/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/MVC/Content/js/External/Kendo/styles/Uniform/sprite.png", "Referer=https://bankwstaffing.erecruitcloud.com/MVC/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		LAST);

	web_convert_param("ctl00_radStylesheetManager_TSSM_URL1",
		"SourceString=ctl00_radStylesheetManager_TSSM",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);

	web_url("LocalizationModel", 
		"URL=https://bankwstaffing.erecruitcloud.com/Mvc/Localization/LocalizationModel", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://bankwstaffing.erecruitcloud.com/Login.aspx", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=https://bankwstaffing.erecruitcloud.com/Login.aspx", ENDITEM, 
		LAST);
 

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/
 

	lr_start_transaction("01_Login");

/*Correlation comment - Do not change!  Original value='ebb82c6c-64b2-4708-88d6-9472c371f170' Name ='CorrelationParameter' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter",
		"RegExp=user/(.*?)/phone",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/Recruiter/*",
		LAST);

	web_submit_data("Login.aspx_2",
		"Action=https://bankwstaffing.erecruitcloud.com/Login.aspx",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t23.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=__LASTFOCUS", "Value=", ENDITEM,
		"Name=ctl00_radStylesheetManager_TSSM", "Value={ctl00_radStylesheetManager_TSSM}", ENDITEM,
		"Name=ctl00_radScriptManager_TSM", "Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:92dc34f5-462f-43bd-99ec-66234f705cd1:ea597d4b:b25378d2;Telerik.Web.UI, Version=2013.1.220.40, Culture=neutral, PublicKeyToken=121fae78165ba3d4:en-US:d8ebf3de-0179-4fa4-89e6-a030e0cf94a1:16e4e7cd:ed16cbdc:874f8ea2:f7645509:24ee1bba:f46195d3:19620875:39040b5c", ENDITEM,
		"Name=__EVENTTARGET", "Value=", ENDITEM,
		"Name=__EVENTARGUMENT", "Value=", ENDITEM,
		"Name=__VIEWSTATE", "Value={AspNet_ViewState}", ENDITEM,
		"Name=__VIEWSTATEGENERATOR", "Value={__VIEWSTATEGENERATOR}", ENDITEM,
		"Name=ctl00$hidNewLayoutName", "Value=", ENDITEM,
		"Name=ctl00_tipPhoneNumber_ClientState", "Value=", ENDITEM,
		"Name=ctl00$cphMain$logIn$UserName", "Value=dynatrace@erecruit.com", ENDITEM,
		"Name=ctl00$cphMain$logIn$Password", "Value=Sggtech2020!", ENDITEM,
		"Name=ctl00$cphMain$logIn$Login", "Value=Log In", ENDITEM,
		EXTRARES,
		"URL=/ScriptResource.axd?d=44SGZo2TqL-tI83tWSKG8qKB9UZnvLKDSxUi-NIFy3yxTKJqxSWjJszXi7N5Vq2I-pDh4lzE2aedAgysznkiqQmFF8CPdPqk-e3lCPim0zvTyyQ5iVh_MbUxPwADjrlT_DYlqg0MQqXdscQsjTsKLnAFymmFL5Mei2yq6piAErmURXsI0&t=ffffffffecf19baa", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=EFBgsmtsU0pdW_GJ6_OLMOrpZnHX-DWOrBZ7HrzZ8BxeBZf6YnNWFzULdDmVnk70LtTO4gZ_GyqSkGD95bPbJwgHe11fjxzISOEzOaL5e0drVbOMzhrLbjDWCA35mcSvn7z-MyNf7pU_iUvtiyL7sgvvlP0Z6zAimtFRWZkedUYXrqEu0&t=ffffffffecf19baa", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=nM7jnaDKzh8r0qooI-UZcLRDfwSRG7XKH8vedy3aww5zKlTICQoAd64X1JVcMK5p2ivHIp3YFOQqqCc9D3cjUDMw1_brU7KlI8W5eh6R7iwppIAov5f1J9QUTJQuFYeh79_qyA2&t=3967d01", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=YN85L9yCqHa46htTwACglZBRKHzwPIpqenx2u72M76RQV_y-pwroGZmbSjFPIkTs7VklX_g4cX7dI8TxvvPZ_oP9C1u3utgsyFoRaLMXklAUFpGoHUSepS8YO0p2X4rI_CPCoXF81NlH1Qse3Vm6Pj8RLWc1&t=3967d01", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=OPUKgPGoeoBBrUdA2DMmoomsFtTsVq7K1ejHgdz4UfE45IXBH_Oh6eu4jGVBwMUhMdXN3LyWI3NliLXRxx_sT3zg8gapIEImnnyughuGO39GyMKfdvffTxQjaHhtLkSrYhu3Lw241Pp2RzG5yvQS1gesBqY1&t=3967d01", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=-zZOk8-NgGZhYzHzZuTKA2_9EbckOn7KTEpbivPPfxQqqi6BwtvEVAeHw5XD8-e5FNyTcWEj91fUvzVvwqxsDkSBDLxyplONQSelOh_IWQovz_thK1qigzaD8MTuVSKZoOvL_8R8LAFqU8pgKDpFNP-tnl81&t=3967d01", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/ScriptResource.axd?d=MFXKNQ8ab_LEQJ6hHeptPLbDgUby09PE2PQ5-iasaA4Mb6j84cjUM6hvPXK7V0csracmME3AcOt51Yu1PvN7MlpI0rhQv48pTd2dPbJrVfw1UzZdO6nh6QF8jd-A1JSmtQuzA-x7vzhb6jQ_2Gx8-UAlJGA1&t=3967d01", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/Mvc/Content/Images/icons/refresh.png", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/Mvc/Content/Images/icons/14/cross.png", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Logout.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/mvc/dispatch/hubs?", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/dispatch.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Notifications/Notifications.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/AddShortcutCommand.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/TopMenu/TopMenu.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/ShortcutManager.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/External/jQuery-plugins/jquery.modal.min.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/Base.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/TopMenu/Items.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/External/jQuery-plugins/menu-aim.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/Mvc/Localization/LocalizationModel", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/ShortcutManager/ShortcutAliases.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Frame/container.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/BL/ScheduledItem/SearchSidebarButtons.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Localization/ResourceKeys.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/Popup.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/BL/ScheduledItem/Templates/SearchSidebarButtons.css", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Search/interfaces.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/InfoBox.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/MVC/Content/js/Controls/stylesheet.js", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/mvc/dispatch/negotiate?connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&clientProtocol=1.3&_=1584489428622", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/Mvc/User/CheckExpiration", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/mvc/dispatch/connect?transport=serverSentEvents&connectionToken=g5me0HDYRObTPJ9Q5Q0zPrsajziWYygARPyZoBwEby0R%2F8g70i0lt6bToUKqJeBp54ArNoK%2BlUvN8zCemgKNCey%2Fxs73mkdsoxE%2BWngTJbxUqEIvp1RUJml5CwQLMBRZvBbz5g%3D%3D&connectionData=%5B%7B%22name%22%3A%22notification%22%7D%5D&tid=3", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		"URL=/App_Themes/Default/images/logos/BWS5.png", "Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", ENDITEM,
		LAST);

/*Correlation comment - Do not change!  Original value='%3b%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a53e1db5a%3ad126a8ef%3af75bf8aa%3a35583c8c%3a9ad5c0b%3abf649b0%3bTelerik.Web.UI.Skins%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+PublicKeyToken%3d121fae78165ba3d4%3aen-US%3a570f752b-8ab3-43cb-9159-0950fdbaf409%3ab2586c6e' Name ='_TSM_CombinedScripts_' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=_TSM_CombinedScripts_",
		"RegExp=_TSM_CombinedScripts_=(.*?)\"\\ type",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Recruiter.aspx*",
		LAST);

/*Correlation comment - Do not change!  Original value='PendingStatusSinceDate DESC' Name ='CorrelationParameter_1' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_1",
		"RegExp=SortBy=(.*?);DefaultView",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Recruiter.aspx*",
		LAST);

/*Correlation comment - Do not change!  Original value='PlacementEndDate ASC' Name ='CorrelationParameter_2' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter_2",
		"RegExp=SortBy=(.*?);PageSize",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Recruiter.aspx*",
		LAST);

/*Correlation comment - Do not change!  Original value='DMDPiNJHkDcJW29r0627GIpiNvka6f90iYZ6lcbOoud_aiTQlcrpAQOiDxLHhA0Qb3xBg8TKlvsFi0IMqolY5kPNLuqjHGt2MOf1JBnK-sFbFk1JWAhFDbE23AgisF13Pw1p8O-X8FY-x4EJr7rn4bCik4yfqxsexc28dHlrl61xmPgk0' Name ='d' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=d",
		"RegExp=\\.rdRight\\{background-image:url\\('/WebResource\\.axd\\?d=(.*?)&t",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/Telerik.Web.UI.WebResource.axd*",
		LAST);

	web_url("Recruiter.aspx", 
		"URL=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=ctl00_radScriptManager_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a92dc34f5-462f-43bd-99ec-66234f705cd1%3aea597d4b%3ab25378d2%3bTelerik.Web.UI%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+"
		"PublicKeyToken%3d121fae78165ba3d4%3aen-US%3ad8ebf3de-0179-4fa4-89e6-a030e0cf94a1%3a16e4e7cd%3aed16cbdc%3a874f8ea2%3af7645509%3a24ee1bba%3af46195d3%3a19620875%3a39040b5c%3a854aa0a7%3a607498fe%3a9cdfc6e7%3a7165f74%3addbfcb67", "Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		"Url=/Services/UpdateService.asmx/js", "Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_convert_param("CorrelationParameter_2_URL1",
		"SourceString=CorrelationParameter_2",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);

	web_convert_param("CorrelationParameter_1_URL1",
		"SourceString=CorrelationParameter_1",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);

	web_custom_request("1367", 
		"URL=https://bankwstaffing.erecruitcloud.com/MVC/Dashboard/Tasks/View/1367", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Logout.html", 
		"URL=https://bankwstaffing.erecruitcloud.com/MVC/Content/js/Templates/Logout.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://bankwstaffing.erecruitcloud.com/Recruiter/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("1321", 
		"URL=https://bankwstaffing.erecruitcloud.com/MVC/Dashboard/TopRecruiters/View/1321", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1584489435420", "Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_custom_request("353", 
		"URL=https://bankwstaffing.erecruitcloud.com/MVC/Dashboard/MyOpenPositions/View/353", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("354", 
		"URL=https://bankwstaffing.erecruitcloud.com/MVC/Dashboard/MyPendingActivity/View/354", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1584489435421", "Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM, 
		LAST);

	web_custom_request("373", 
		"URL=https://bankwstaffing.erecruitcloud.com/MVC/Dashboard/PlacementsEndingSoon/View/373", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("355", 
		"URL=https://bankwstaffing.erecruitcloud.com/MVC/Dashboard/ScheduledItemCalendar/View/355", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("6643",
		"URL=https://bankwstaffing.erecruitcloud.com/MVC/Dashboard/CandidatesWithStatus/Configure/6643",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null",
		"Snapshot=t32.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1584489435422", "Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM,
		"URL=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1584489435423", "Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM,
		"URL=/App_Themes/Default/javascript/jquery.validate.unobtrusive.js?_=1584489435424", "Referer=https://bankwstaffing.erecruitcloud.com/Pages/dashboard/Recruiter.aspx?null", ENDITEM,
		"URL=/WebResource.axd?d={d}&t={t}", "Referer=https://bankwstaffing.erecruitcloud.com/Telerik.Web.UI.WebResource.axd?compress=1&_TSM_CombinedScripts_=%3b{ctl00_radStylesheetManager_TSSM_URL1}%3af75bf8aa%3a35583c8c%3a9ad5c0b%3abf649b0%3bTelerik.Web.UI.Skins%2c+Version%3d2013.1.220.40%2c+Culture%3dneutral%2c+PublicKeyToken%3d121fae78165ba3d4%3aen-US%3a570f752b-8ab3-43cb-9159-0950fdbaf409%3ab2586c6e", ENDITEM,
		LAST);
 
	lr_end_transaction("01_Login",LR_AUTO);

	return 0;
}
