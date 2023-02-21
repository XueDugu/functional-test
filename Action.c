Action()
{
    lr_start_transaction("feed");
    web_url("feed", 
        "URL=http://localhost:8080/douyin/feed/", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Mode=HTTP", 
        LAST);
    lr_end_transaction("feed", LR_AUTO);

    lr_start_transaction("user_info");
    web_url("user_info", 
        "URL=http://localhost:8080/douyin/user/?id=123", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Mode=HTTP", 
        LAST);
    lr_end_transaction("user_info", LR_AUTO);

    lr_start_transaction("register");
    web_submit_data("register", 
        "Action=http://localhost:8080/douyin/user/register/", 
        "Method=POST", 
        "RecContentType=application/json", 
        "Referer=http://localhost:8080/douyin/user/register/", 
        "Snapshot=t1.inf", 
        "Mode=HTML", 
        ITEMDATA, 
        "Name=username", "Value=testuser", ENDITEM, 
        "Name=password", "Value=testpassword", ENDITEM, 
        LAST);
    lr_end_transaction("register", LR_AUTO);

    lr_start_transaction("login");
    web_submit_data("login", 
        "Action=http://localhost:8080/douyin/user/login/", 
        "Method=POST", 
        "RecContentType=application/json", 
        "Referer=http://localhost:8080/douyin/user/login/", 
        "Snapshot=t2.inf", 
        "Mode=HTML", 
        ITEMDATA, 
        "Name=username", "Value=testuser", ENDITEM, 
        "Name=password", "Value=testpassword", ENDITEM, 
        LAST);
    lr_end_transaction("login", LR_AUTO);

    lr_start_transaction("publish");
    web_submit_data("publish", 
        "Action=http://localhost:8080/douyin/publish/action/", 
        "Method=POST", 
        "RecContentType=application/json", 
        "Referer=http://localhost:8080/douyin/publish/action/", 
        "Snapshot=t3.inf", 
        "Mode=HTML", 
        ITEMDATA, 
        "Name=title", "Value=testtitle", ENDITEM, 
        "Name=content", "Value=testcontent", ENDITEM, 
        LAST);
    lr_end_transaction("publish", LR_AUTO);

    lr_start_transaction("publish_list");
    web_url("publish_list", 
        "URL=http://localhost:8080/douyin/publish/list/", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Mode=HTTP", 
        LAST);
    lr_end_transaction("publish_list", LR_AUTO);

    lr_start_transaction("favorite_action");
    web_submit_data("favorite_action", 
        "Action=http://localhost:8080/douyin/favorite/action/", 
        "Method=POST", 
        "RecContentType=application/json", 
        "Referer=http://localhost:8080/douyin/favorite/action/", 
        "Snapshot=t4.inf", 
        "Mode=HTML", 
        ITEMDATA, 
        "Name=id", "Value=123", ENDITEM, 
        LAST);
    lr_end_transaction("favorite_action", LR_AUTO);

    lr_start_transaction("favorite_list");
    web_url("favorite_list", 
        "URL=http://localhost:8080/douyin/favorite/list/",
		"Resource=0",
		"RecContentType=text/html",
		"Mode=HTTP",
		LAST);
	lr_end_transaction("favorite_list", LR_AUTO);

	lr_start_transaction("comment_action");
	web_submit_data("comment_action", 
    	"Action=http://localhost:8080/douyin/comment/action/", 
    	"Method=POST", 
    	"RecContentType=application/json", 
    	"Referer=http://localhost:8080/douyin/comment/action/", 
    	"Snapshot=t5.inf", 
    	"Mode=HTML", 
    	ITEMDATA, 
    	"Name=id", "Value=123", ENDITEM, 
    	"Name=comment", "Value=testcomment", ENDITEM, 
    	LAST);
	lr_end_transaction("comment_action", LR_AUTO);

	lr_start_transaction("comment_list");
	web_url("comment_list", 
    	"URL=http://localhost:8080/douyin/comment/list/?id=123", 
    	"Resource=0", 
    	"RecContentType=text/html", 
    	"Mode=HTTP", 
    	LAST);
	lr_end_transaction("comment_list", LR_AUTO);

	lr_start_transaction("relation_action");
	web_submit_data("relation_action", 
    	"Action=http://localhost:8080/douyin/relation/action/", 
    	"Method=POST", 
    	"RecContentType=application/json", 
    	"Referer=http://localhost:8080/douyin/relation/action/", 
    	"Snapshot=t6.inf", 
    	"Mode=HTML", 
    	ITEMDATA, 
    	"Name=id", "Value=123", ENDITEM, 
    	"Name=action", "Value=follow", ENDITEM, 
    	LAST);
	lr_end_transaction("relation_action", LR_AUTO);

	lr_start_transaction("follow_list");
	web_url("follow_list", 
    	"URL=http://localhost:8080/douyin/relation/follow/list/?id=123", 
    	"Resource=0", 
    	"RecContentType=text/html", 
    	"Mode=HTTP", 
    	LAST);
	lr_end_transaction("follow_list", LR_AUTO);

	lr_start_transaction("follower_list");
	web_url("follower_list", 
    	"URL=http://localhost:8080/douyin/relation/follower/list/?id=123", 
    	"Resource=0", 
    	"RecContentType=text/html", 
    	"Mode=HTTP", 
    	LAST);
	lr_end_transaction("follower_list", LR_AUTO);

	lr_start_transaction("friend_list");
	web_url("friend_list", 
    	"URL=http://localhost:8080/douyin/relation/friend/list/?id=123", 
    	"Resource=0", 
   	 	"RecContentType=text/html", 
    	"Mode=HTTP", 
    	LAST);
	lr_end_transaction("friend_list", LR_AUTO);

	lr_start_transaction("message_chat");
	web_url("message_chat", 
    	"URL=http://localhost:8080/douyin/message/chat/?id=123", 
    	"Resource=0", 
    	"RecContentType=text/html", 
    	"Mode=HTTP", 
    	LAST);
	lr_end_transaction("message_chat", LR_AUTO);

	lr_start_transaction("message_action");
	web_submit_data("message_action", 
    	"Action=http://localhost:8080/douyin/message/action/", 
    	"Method=POST", 
    	"RecContentType=application/json", 
    	"Referer=http://localhost:8080/douyin/message/action/", 
    	"Snapshot=t7.inf", 
    	"Mode=HTML", 
    	ITEMDATA, 
    	"Name=id", "Value=123", ENDITEM, 
    	"Name=message", "Value=testmessage", ENDITEM, 
        LAST);
	lr_end_transaction("message_action", LR_AUTO);

	return 0;
}